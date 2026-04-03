// 🟡 Problem 20 (Very Important 🔥)

// 📘 Problem Statement
// You are given a sorted array and a number key.
// You need to find whether the key exists using Binary Search.

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes size n
// 2️⃣ Takes sorted array
// 3️⃣ Takes key
// 4️⃣ Uses binary search to find key
// 5️⃣ Prints:
//     "Found"
//     "Not Found"
// 📥 Example
// Enter n: 5
// Array: 10 20 30 40 50
//     Key: 30
// 📤 Output
//     Found

#include<iostream>
using namespace std;

int main(){
    int n,arr[100];
    cout<<"Enter the elemets :";
    cin>>n;

    cout<<"Entre the elemets :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key element to search :";
    cin>>key;

    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;

        if(arr[mid]==key){
            cout<<"Found";
        }
    }
    return 0;
}