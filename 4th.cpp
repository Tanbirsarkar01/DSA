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
            int m;
            cin>>m;
            v.push_back(m);
        }
        int ans=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(v[i]);
        }
        for(int i=0;i<n;i++){
            if(((v[i]^q.front())+(v[i]&q.front()))%2==0){
                ans++;
                q.pop();
            }
                
            
        }
        cout<<ans<<endl;
    }
}