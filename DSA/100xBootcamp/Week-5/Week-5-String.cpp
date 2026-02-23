#include<iostream>
#include<vector>

using namespace std;


// A: Char to ASCII:
// int main(){
//     char c;
//     cin>>c;

//     cout<< (int)c;
//     return 0;
// }

// B: Ascii To Char:

// int main(){
//     int c;
//     cin>>c;

//     cout<< char(c);
//     return 0;
// }


// C: Lowercase, Uppercase, Digit or Special:

// int main(){
//     char c;
//     cin>>c;

//     if(c >= 'a' && c <= 'z'){
//         cout<<"Lowercase";
//     }else if(c >= 'A' && c <= 'Z'){
//         cout<<"Uppercase";
//     }else if(c >= '0' && c <= '9'){
//         cout<<"Digit";
//     }else{
//         cout<<"Special";
//     }

//     return 0;
// }


// D: Convert to lowercase:

// int main(){
//     char c;
//     cin>>c;

//     cout<<(char)tolower(c);

//     return 0;
// }

// E: Brothers:

// int main(){
//     string a1, a2;
//     string b1, b2;
//     cin>>a1>>a2 >> b1>>b2;


//     if(a2 == b2){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
// }


// F: Lexicographical Order:

// int main(){
//     string a, b;

//     cin>>a>>b;

//     for(int i=0; i<min(a.length(), b.length()); i++){
//         if(a[i] < b[i]){
//             cout<<"A";
//             return 0;
//         }else if(a[i] > b[i]){
//             cout<<"B";
//             return 0;
//         }
//     }
//     if(a.length() < b.length()){
//         cout<<"A";
//     }else if(a.length() > b.length()){
//         cout<<"B";
//     }
//     else{
//         cout<<"Equal";
//     }
//     return 0;
// }


// G: Replace Character:

// int main(){
//     string a;
//     char c1 ,c2;

//     cin>>a;
//     cin>>c1>>c2;

//     for(int i=0; i<a.length(); i++){
//         if(a[i] == c1){
//             a[i] = c2;
//         }
//     }

//     cout<<a;

// }


// H: Remove Character:



int main(){
    string a;
    char c;

    cin>>a;
    cin>>c;
    string ans = "";

    for(int i=0; i<a.length(); i++){
        if(a[i] != c){
            ans += a[i];
        }
    }

    cout<<ans<<endl;

}