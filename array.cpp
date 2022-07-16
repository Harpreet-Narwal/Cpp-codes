#include<iostream>
#include<climits>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     // for(int i=0; i<n; i++){
//     //     cin>>arr[i];
//     // }

//     // for(int i=0; i<n; i++){
//     //     cout<<arr[i]<<" ";
//     // }

//     for(int i=0; i<n;i++){
//         cin>>arr[i];

//     }


//     int maxno=INT_MIN;
//     int minno=INT_MAX;

//     for(int i=0; i<n; i++){
//         // if(arr[i]>maxno)
//         //     maxno = arr[i];

//         // if(arr[i]<minno)
//         //     minno = arr[i];
//         maxno = max(maxno, arr[i]);
//         minno = min(minno, arr[i]);

//     }
//     cout<<maxno<<" "<<minno;

//     return 0;
//}


// LINEAR SEARCH:

// int linearSearch(int arr[], int n, int key ){
//     for(int i=0; i<n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n; 
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int key;
//     cin>>key;

//     cout<<linearSearch(arr, n,key);
// }


// BINARY SEARCH:

// int BinarySearch(int arr[], int n, int key){
//     int s=0; 
//     int e=n;

//     while(s<=e){
//         int mid = (s+e)/2;

//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//     }
//     return -1;
// }


// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i= 0; i<n; i++){
//         cin>>arr[i];

//     }
//     int key;
//     cin>>key;

//     cout<<BinarySearch(arr, n, key)<<endl;
// }

// SELECTION SORT!!

// int main(){
//     int n;
//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++){
//         for(int j =i+1; j<n; j++){
//             if (arr[j]<arr[i])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }



// Bubble SORT:
// int main(){
//     int n;

//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int counter=1;
//     while(counter<n){
//         for(int i=0; i<n-counter; i++){
//             if(arr[i]>arr[i+1]){
//                 int temp = arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
//         }
//         counter++;
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }



// INSERTION SORT:

// int main(){
//     int n;

//     cin>>n;

//     int arr[n];

//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=1; i<n; i++){
//         int current = arr[i];
//         int j=i-1;
//         while(arr[j]>current && j>=0){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = current;
//     }

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

// }


//  EXERCISES!!!:

// int main(){
//     int mx = -19999999;
//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         mx = max(mx, a[i]);
//         cout<<mx<<endl;
//     }


//     return 0;
// }


// int main(){

//     int n;
//     cin>>n;

//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     const int N = 1e6+2; // 1e6 = 10^6
//     int idx[N];
//     for(int i=0; i<N; i++){
//         idx[i] = -1;   
//     }

//     int minidx = INT_MAX;

//     for(int i=0; i<n; i++){
//         if(idx[a[i]]!= -1){
//             minidx = min(minidx, idx[a[i]]);
//         }
        
//         else{
//             idx[a[i]] = i;
//         }
//     }

//     if(minidx == INT_MAX){
//         cout<<"-1"<<endl;
//     }
//     else{
//         cout<<minidx + 1<<endl;
//     }


//     return 0;
// }
 
 // CHARACTER ARRAY:

// int main(){
//     char arr[100]="apple";
//     int i=0; 

//     while(arr[i] != '\0'){
//         cout<<arr[i] <<endl;
//         i++;
//     }
//     return 0;
// }

// int main(){
//     char arr[100];
//     cin>>arr;
//     cout<<arr;
//     return 0;
// }


// PALINDROME:
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1]){
            check = 0;
            break;
        }
    }

    if( check == true){
        cout<<" Word is a palindrome" <<endl;
    }
    else{
        cout<<" word is not a palindrome"<<endl;
    }
    return 0;

// }

// LARGEST word in a sentence:

int main(){
    int n; 
    cin>>n;
    cin.ignore();   

    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0; 
    int currlen = 0, maxlen = 0;

    int st = 0, maxst=0;
    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen > maxlen){
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
        else
        currlen++;

        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0; i<maxlen; i++){
        cout<<arr[i+maxst];

    }
    return 0;
}