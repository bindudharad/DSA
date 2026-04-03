// 🟡 Problem 6 (Medium — Structured Thinking)
// 📘 Problem: Student Result Analyzer
// A school wants to analyze student marks.
// You are given:
//     Number of subjects n
//     Marks of each subject

// 🎯 Task
// Write a program that:
// 1️⃣ Takes number of subjects
// 2️⃣ Takes marks of all subjects
// 3️⃣ Calculates:
//     Total marks
//     Average marks

// 4️⃣ Prints grade based on average:
// Average	Grade
// ≥ 90	     A
// ≥ 75    	 B
// ≥ 50	     C
// < 50	     Fail

#include<iostream>
using namespace std;

int main(){

    int n, sum = 0;
    float avg;

    cout<<"Enter number of subjects: ";
    cin>>n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cout<<"Enter marks of subject "<<i+1<<": ";
        cin>>arr[i];
        sum += arr[i];
    }

    avg = (float)sum / n;

    cout<<"Total: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;

    if(avg >= 90){
        cout<<"Grade: A";
    }
    else if(avg >= 75){
        cout<<"Grade: B";
    }
    else if(avg >= 50){
        cout<<"Grade: C";
    }
    else{
        cout<<"Grade: Fail";
    }

    return 0;
}