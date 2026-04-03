// 🟣 Problem 11 (Pattern Upgrade 🔥)

// 📘 Problem Statement
// A teacher wants to print a reverse number pattern where numbers decrease in each row.

// 🎯 Task
// For a given number n, print:
// For n = 5
// 12345
// 1234
// 123
// 12
// 1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}