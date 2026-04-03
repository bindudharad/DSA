// 🟡 Problem 17 (Start of Real DSA)

// 📘 Problem Statement
// You are given an array of integers.
// You need to find the largest element in the array.

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes size of array n
// 2️⃣ Takes n elements
// 3️⃣ Finds the maximum element
// 4️⃣ Prints it

// 📥 Example
// Enter n: 5
// Array: 10 25 3 99 45
// 📤 Output
// Largest element: 99

#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    if(n <= 0){
        cout<<"Invalid input";
        return 0;
    }

    int arr[100];

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxVal = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }

    cout<<"Largest element: "<<maxVal;

    return 0;
}