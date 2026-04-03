// 🟣 Problem 16 (Final Pattern → Very Important 🔥)

// 📘 Problem Statement
// Print a hollow square pattern.
// 🎯 Task
// For n = 5, print:

// *****
// *   *
// *   *
// *   *
// *****

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){

            if(i==1 || i==n || j==1 || j==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}