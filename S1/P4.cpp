// 📘 Problem: Palindrome Number Checker
// A number is called a palindrome if it reads the same forward and backward.
// Examples:
// 121 → Palindrome
// 1331 → Palindrome
// 123 → Not Palindrome

// 🎯 Task
// Write a program that:
// 1️⃣ Takes a number as input
// 2️⃣ Reverses the number
// 3️⃣ Checks if the number equals the reversed number
// 4️⃣ Prints whether it is Palindrome or Not

#include <iostream>
using namespace std;

int main(){

    int num, temp, reverse = 0;

    cout<<"Enter a number: ";
    cin>>num;

    int original = num;

    while(num != 0){
        temp = num % 10;
        reverse = reverse * 10 + temp;
        num = num / 10;
    }

    if(original == reverse){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not a Palindrome";
    }

    return 0;
}