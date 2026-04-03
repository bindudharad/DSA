// 🟣 Problem 9 (Medium → More Thinking)

// 📘 Problem Statement
// A number is called a Perfect Number if:
// Sum of all its proper divisors (excluding itself) = the number
// Example:
// 6 → divisors: 1, 2, 3
// sum = 1 + 2 + 3 = 6 → Perfect
// 28 → divisors: 1, 2, 4, 7, 14
// sum = 28 → Perfect

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes a number n
// 2️⃣ Finds all divisors (excluding n itself)
// 3️⃣ Calculates their sum
// 4️⃣ Checks if sum == n
// 5️⃣ Prints whether it is a Perfect Number or not

#include<iostream>
using namespace std;

int main(){

    int n, sum = 0;

    cout<<"Enter a number: ";
    cin>>n;

    if(n <= 0){
        cout<<"Invalid number";
        return 0;
    }

    for(int i = 1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(n == sum){
        cout<<"Perfect Number";
    }
    else{
        cout<<"Not a Perfect Number";
    }

    return 0;
}