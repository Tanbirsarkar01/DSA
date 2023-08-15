#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8];
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    cout<<"The array is " ;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    arr[7]=67;
    cout<<"New array is : ";
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}