// 📘 Problem: ATM Withdrawal Simulator
// A user wants to withdraw money from an ATM.
// Rules:  ATM only gives ₹100, ₹200, and ₹500 notes.
//         User enters an amount to withdraw.

// Constraints:
// 1️⃣ Amount must be multiple of 100
// 2️⃣ ATM should prioritize largest notes first
// Order:₹500 → ₹200 → ₹100

// 🎯 Task
// Write a program that:
// 1️⃣ Takes withdrawal amount
// 2️⃣ Checks if amount is valid
// 3️⃣ Calculates number of notes needed
// 4️⃣ Prints number of each note

#include <iostream>
using namespace std;

int main(){

    int amount;
    int note[3];
    int arr[3] = {500,200,100};

    cout<<"Enter withdrawal amount: ";
    cin>>amount;

    if(amount % 100 != 0){
        cout<<"Invalid amount";
        return 0;
    }

    for(int i=0;i<3;i++){
        note[i] = amount / arr[i];
        amount = amount % arr[i];
        cout<<arr[i]<<" notes: "<<note[i]<<endl;
    }

    return 0;
}