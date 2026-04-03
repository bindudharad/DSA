// 📘 Problem: Armstrong Number Checker
// A number is called an Armstrong number if:
// Sum of the cubes of its digits = the number itself.
// Example:
// 153
// Calculation:
// 1³ + 5³ + 3³
// = 1 + 125 + 27
// = 153
// So 153 is an Armstrong number.

// 🎯 Task
// Write a program that:
// 1️⃣ Takes a number as input
// 2️⃣ Finds each digit
// 3️⃣ Cubes the digit
// 4️⃣ Adds all cubes
// 5️⃣ Checks if result equals the original number

#include<iostream>
using namespace std;

int main(){

    int num, digit, arm = 0, temp;

    cout<<"Enter a number: ";
    cin>>num;

    temp = num;

    while(num != 0){
        digit = num % 10;
        arm += digit * digit * digit;
        num = num / 10;
    }

    if(temp == arm){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }

    return 0;
}