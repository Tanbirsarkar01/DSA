//Tanbir Sarkar 
//2212129
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v1.push_back(m);
    }
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v2.push_back(m);
    }
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v3.push_back(m);
    }
    int cnt=0;
    map<int,int>m;
    for(auto it: v1) m[it]++;
    for(int i=0;i<n;i++){
        long long s=v2[v3[i]-1];
        cnt+=m[s];
    }
    cout<<cnt<<endl;
}