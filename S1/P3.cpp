// 📘 Problem: Number Analyzer

// Write a program that analyzes a number entered by the user.

// The program should determine:

// 1️⃣ Whether the number is positive, negative, or zero
// 2️⃣ Whether the number is even or odd
// 3️⃣ The sum of its digits
// 4️⃣ The reverse of the number

#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int temp = num;
    int digit;
    int sum = 0;
    int reverse = 0;

    // Positive / Negative / Zero
    if(num < 0){
        cout<<"Number is Negative"<<endl;
    }
    else if(num > 0){
        cout<<"Number is Positive"<<endl;
    }
    else{
        cout<<"Number is Zero"<<endl;
    }

    // Even or Odd
    if(num % 2 == 0){
        cout<<"Number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }

    // Sum of digits and reverse
    while(temp != 0){
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Reversed number: "<<reverse<<endl;

    return 0;
}