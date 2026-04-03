#include<iostream>
using namespace;

int main(){
    int n,arr[100];
    cout<<"Enter number of elements :";
    cin>>n;
    
    if(n<2){
        cout<<"Not enough elements";
        return 0;
    }
    
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max1=arr[0];
    int max2=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if(arr[i]>max2&&arr[i]!=max1){
            max2=arr[i];
        }
    }

    if(max2==-1){
        cout<<"No second largest element";
    }else{
        cout<<"Second Largest:"<<max2;
    }
    return 0;
}