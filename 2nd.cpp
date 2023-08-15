//Tanbir Sarkar 
//2212129
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if((v[i]%3)==0 && (v[i]%5)!=0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}