#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c[50];
    int size,i,x[50],y[50],even=0,odd=0;
    int arr[50];
    cout<<"Enter the number of elements in array : ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"enter the array element"<<i+1<<" :";
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        if(arr[i]%2==0)
            x[even++]=arr[i];
        else if(arr[i]%2!=0)
            y[odd++]=arr[i];
    }
    cout<<"\n";
    cout<<"even array is "<<endl;
    for(i=0;i<even;i++){
        cout<<x[i]<<" ";
    }
    cout<<"\nodd array is "<<endl;
    for(i=0;i<odd;i++){
        cout<<y[i]<<" ";
    }
    cout<<"\nmerged array is ";
    for( i=0; i<even; i++){
        c[i]=x[i];
        cout<<c[i]<<" ";
    }
    for(i=0; i<odd; i++){
        c[i]=y[i];
        cout<<c[i]<<" ";
    }
    
    return 0;
}
