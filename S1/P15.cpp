// 🟣 Problem 15 (Advanced Pattern 🔥)

// 📘 Problem Statement
// Print a diamond pattern using *.

// 🎯 Task
// For n = 5, print:

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // Upper part
    for(int i=1;i<=n;i++){

        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }

        cout<<endl;
    }

    // Lower part
    for(int i=n-1;i>=1;i--){

        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }

        // stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a Number :";
//     cin>>n;
//     for(int i=1;i<=n;i++){
        
//         for(int j=n;j>=i;j--){
//             cout<<" ";
//         }
        
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
        
//         for(int l=i-1;l>=1;l--){
//             cout<<*"*";
//         }
//         cout<<endl;
//     }
//     for(int i=2;i<=n;i++){
        
//         for(int j=1;j<=i;j++){
//             cout<<" ";
//         }
        
//         for(int k=n;k>=i;k--){
//             cout<<"*";
//         }
//         for(int k=n-1;k>=i;k--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }