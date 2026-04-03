// 🟡 Problem 19 (DSA Core 🔥)

// 📘 Problem Statement

// You are given an array of integers and a number key.
// You need to find whether the key exists in the array.

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes size n
// 2️⃣ Takes n elements
// 3️⃣ Takes a number key
// 4️⃣ Searches for the key
// 5️⃣ Prints:
//     "Found" if exists
//     "Not Found" if not
// 📥 Example
// Enter n: 5
// Array: 10 25 3 99 45
// Enter key: 25
// 📤 Output
// Found

#include<iostream>
using namespace std;

int main(){
    int n,arr[100],found=0;
    cout<<"Enter the elemets :";
    cin>>n;

    cout<<"Entre the elemets :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element to search :";
    cin>>key;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"Found";
            found=1;
        }
    }
    if(found==0)
        cout<<"Not Found";
    return 0;
}