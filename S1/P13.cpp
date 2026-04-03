// 🟣 Problem 13 (Pattern → Slightly Hard 🔥)

// 📘 Problem Statement
// A teacher wants to print a right-aligned triangle pattern using numbers.

// 🎯 Task
// For n = 5, print:
//     1
//    12
//   123
//  1234
// 12345

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    for(int i=1; i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // for(int j=n;j>=i;j--){
        //     cout<<" ";
        // }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}