// 🟣 Problem 12 (Pattern + Twist 🔥)

// 📘 Problem Statement
// A teacher wants to print a pattern where numbers continue increasing across rows, not restarting from 1.

// 🎯 Task
// For n = 4, print:
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;

int main(){
    int n,num=1;
    cout<<"Enter a number :";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}