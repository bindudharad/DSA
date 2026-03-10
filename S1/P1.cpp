// 📘 Problem: Smart Electricity Bill Calculator
// A small town electricity department charges customers based on units of electricity used.
// The billing rules are:
// Units Consumed	Cost per Unit
// 0 – 100	₹5 per unit
// 101 – 300	₹7 per unit
// Above 300	₹10 per unit

// Additionally:
// If the total bill exceeds ₹2000, a 10% tax is added.
// If the total bill is less than ₹500, a ₹50 fixed service charge is added.

// 🎯 Task
// Write a C++ program that:
// Takes number of units consumed as input.
// Calculates the electricity bill based on the rules.
// Applies tax or service charge if needed.
// Prints the final bill amount.

#include<iostream>
using namespace std;

int main(){

    int unit;
    float total;

    cout<<"Enter units consumed: ";
    cin>>unit;

    if(unit < 0){
        cout<<"Invalid units";
        return 0;
    }

    if(unit <= 100){
        total = unit * 5;
    }
    else if(unit <= 300){
        total = unit * 7;
    }
    else{
        total = unit * 10;
    }

    if(total > 2000){
        total = total + (total * 0.10);
    }
    else if(total < 500){
        total = total + 50;
    }

    cout<<"Final bill amount is: "<<total;

    return 0;
}