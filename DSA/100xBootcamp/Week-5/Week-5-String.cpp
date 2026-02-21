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

int main(){
    char c;
    cin>>c;

    if(c >= 'a' && c <= 'z'){
        cout<<"Lowercase";
    }else if(c >= 'A' && c <= 'Z'){
        cout<<"Uppercase";
    }else if(c >= '0' && c <= '9'){
        cout<<"Digit";
    }else{
        cout<<"Special";
    }

    return 0;
}