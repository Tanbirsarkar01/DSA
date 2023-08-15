#include<iostream>
using namespace std;
int main(){

    int arr[8];
    int key=4;
    int temp;
    for(int i=0;i<8;i++){
        cin>>arr[i];
    }
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            temp=i;
            // break;
        }
    }
    for(int i=0;i<7;i++){
        if(i>=temp){
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}