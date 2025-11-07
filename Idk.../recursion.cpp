#include<iostream>

using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevSum = Sum(n-1);
    return n+ prevSum;
}
int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;
    return 0;
}
// POWER OF A NUMBER N
int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int prevPower = power(n, p-1);
    return n *prevPower;
}

int main(){
    int n, p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}


// FACTORIAL OF A NUMBER N

int  fact(int n){
    if(n==0){
        return 1;
    }
    int prevFact = fact(n-1);
    return n*prevFact;
}
int main(){
    int n;
    cin>>n;

    cout<<fact(n)<<endl;
}

// Fibonacci number:
int fib(int n){
    // if(n==0){
    //     return 0;
    // }
    // if(n==1){
    //     return 1;
    // }

    if(n==0 || n==1){
        return n;
    }
    int prevNo = fib(n-1) + fib(n-2);
    return prevNo;
}


int main(){
    int n;
    cin>>n;

    cout<<fib(n)<<endl;
    return 0;
}


// CHECK IF AN ARRAY IS SORTED OR NOT:

bool sorted(int arr[], int n){

    if(n==1){
        return true;
    }

    bool restArray = sorted(arr+1, n-1);
    return(arr[0]<arr[1] && restArray);
}   


int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   
    cout<<sorted(arr, n);
    return 0;
}

// PRINT NUMBERS TILL N
// 1) DECREASING ORDER
// 2) INCREASING ORDER

int numbers(int n){
    while(n>0){
        cout<<n<<" ";
        n--;
    }
    cout<<endl;
    return 0;
}

void dec(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n){
   if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}


int main(){

    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}

// FIND THE FIRST AND LAST OCCURENCE OF A NUMBER IN AN ARRAY

int firstocc(int arr[], int n, int i, int key){
    
    if(i==n){
        return -1;
    }
    
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    int restArray = lastocc(arr, n, i+1, key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};
    cout<<firstocc(arr, 7, 0, 2)<<endl;

    cout<<lastocc(arr, 7,0,2)<<endl;
    return 0;
}

// REVERSE A STRING USING RECURSION:

void reverse(string s){
    if(s.length() == 0){
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main(){
    string n;
    cin>>n;
    reverse(n);

}

// REPLACE PI WITH 3.14 IN STRING:

void replacePi(string s){
    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1] == 'i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

int main(){
    replacePi("pippppiiiipi");
    return 0;
}


// TOWER OF HANOI

void towerofhanoi(int n, char src, char dest, char helper){
    
    if(n==0){
        return;
    }
    
    towerofhanoi(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofhanoi(n-1, helper, dest, src);

}

int main(){
    towerofhanoi(3, 'A', 'C', 'B');

    return 0;
}

// REMOVE ALL DUBPLICATES FROM THE STRING:

string removeDup(string s)
{
  if(s.length()==0){
    return "";
  }  
  char ch=s[0];
  string ans = removeDup(s.substr(1));

  if (ch==ans[0])
  {
    /* code */s
    return ans;
  }
  return ch+ans;
}
int main(){
    cout<<removeDup("aaaabbbeeecdddd");
    return 0;
}

// MOVE ALL THE CHARACTER(X) TO THE END OF THE STRING:

string moveX(string s){

    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveX(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;

}

int main(){
    cout<<moveX("axxbdxcefxgix")<<endl;;
    return 0;
}



// GENERATE ALL SUBSTRINGS OF A STRING:

void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans+ch);
}

int main(){
    subseq("ABC","");
    cout<<endl;
    return 0;

}

// GENERATE SUBSTRINGS WITH ASCII NUMBER:

void subseq(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;

    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
    subseq(ros, ans + to_string(code));


}

int main(){
    subseq("AB", "");
    return 0;
}

string keypadArr[] = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keypadArr[ch-'0'];//will get converted into integer
    string ros = s.substr(1);

    for(int i=0; i<code.length(); i++){
        keypad(ros, ans+code[i]);
    }
}

int main(){
    keypad("23", "");
    return 0;
}