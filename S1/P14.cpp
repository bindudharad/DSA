// 🟣 Problem 14 (Pattern → Advanced 🔥)

// 📘 Problem Statement
// A teacher wants to print a centered number pyramid.
// Numbers should increase and then decrease symmetrically.

// 🎯 Task
// For n = 5, print:
//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){

        // spaces
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }

        // increasing
        for(int k=1;k<=i;k++){
            cout<<k;
        }

        // decreasing
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }

        cout<<endl;
    }

    return 0;
}