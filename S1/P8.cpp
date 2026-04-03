// 🟠 Problem 8 (Medium → Slightly Hard)

// 📘 Problem Statement
// A teacher wants to analyze marks of students in a class.
// Each student has marks in multiple subjects.
// The teacher wants to:
//     Find the highest mark
//     Find the lowest mark
// Count how many students passed and failed
// Rules:
//     Pass if marks ≥ 40
//     Fail if marks < 40

// 🎯 Tasks
// Write a program that:
// 1️⃣ Takes number of students n
// 2️⃣ Takes marks of each student
// 3️⃣ Calculates:
//     Highest mark
//     Lowest mark
//     Number of pass students
//     Number of fail students

#include<iostream>
using namespace std;

int main(){

    int n, arr[100];
    int high, low, pass = 0, fail = 0;

    cout<<"Enter number of students: ";
    cin>>n;

    if(n <= 0){
        cout<<"Invalid input";
        return 0;
    }

    cout<<"Enter marks of "<<n<<" students:\n";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    high = arr[0];
    low = arr[0];

    for(int i = 0; i < n; i++){

        if(arr[i] > high){
            high = arr[i];
        }

        if(arr[i] < low){
            low = arr[i];
        }

        if(arr[i] >= 40){
            pass++;
        }
        else{
            fail++;
        }
    }

    cout<<"Highest: "<<high<<endl;
    cout<<"Lowest: "<<low<<endl;
    cout<<"Passed: "<<pass<<endl;
    cout<<"Failed: "<<fail<<endl;

    return 0;
}