// 🟡 Problem 18 (DSA — Core 🔥)

// 📘 Problem Statement
// You are given an array of integers.
// You need to find the second largest element in the array.

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes size of array n
// 2️⃣ Takes n elements
// 3️⃣ Finds:
//     Largest element
//     Second largest element
// 4️⃣ Prints the second largest element

// 📥 Example
// Enter n: 5
// Array: 10 25 3 99 45
// 📤 Output
// Second Largest: 45

#include<iostream>
using namespace std;

int main(){

    int n, arr[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    if(n < 2){
        cout<<"Not enough elements";
        return 0;
    }

    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max1 = arr[0];
    int max2 = -1;

    for(int i=1;i<n;i++){

        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1){
            max2 = arr[i];
        }
    }

    if(max2 == -1){
        cout<<"No second largest element";
    }
    else{
        cout<<"Second Largest: "<<max2;
    }

    return 0;
}