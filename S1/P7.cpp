// 🟠 Problem 7 (Medium — Real Thinking)
// 📘 Problem Statement
// A shop owner wants to create a simple billing system.
// Customers buy multiple items, and each item has a price and quantity.
// The system should calculate the total bill and apply discounts based on the total amount.

// The shop rules are:
// If total bill ≥ ₹5000 → 20% discount
// If total bill ≥ ₹2000 → 10% discount
// Otherwise → no discount


// 🎯 Tasks
// Write a C++ program that:
// 1️⃣ Takes number of items n
// 2️⃣ For each item:
//     Input price
//     Input quantity
// 3️⃣ Calculates:
//     Total bill
// 4️⃣ Applies discount based on rules
// 5️⃣ Prints:
//     Total before discount
//     Discount amount
//     Final bill

#include<iostream>
using namespace std;

int main(){

    int n;
    float total = 0, dis = 0;

    cout<<"Enter number of items: ";
    cin>>n;

    int price[100], quantity[100];

    for(int i = 0; i < n; i++){
        cout<<"Item "<<i+1<<" ->"<<endl;

        cout<<"Price: ";
        cin>>price[i];

        cout<<"Quantity: ";
        cin>>quantity[i];

        total += price[i] * quantity[i];
    }

    cout<<"Total: "<<total<<endl;

    if(total >= 5000){
        dis = total * 0.20;
    }
    else if(total >= 2000){
        dis = total * 0.10;
    }
    else{
        dis = 0;
    }

    float finalBill = total - dis;

    cout<<"Discount: "<<dis<<endl;
    cout<<"Final Bill: "<<finalBill;

    return 0;
}