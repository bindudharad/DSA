// 🟣 Problem 10 (Medium → Pattern + Logic)

// 📘 Problem Statement
// A teacher wants to print a number pattern for students.
// The pattern should follow a structure where numbers increase in each row.

// 🎯 Task
// Write a program that prints the following pattern:
// For n = 5
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number :";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}