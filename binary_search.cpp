#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int key=4;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]==key){
            cout<< mid;
            break;
        }
        else if(arr[mid]>key){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}