#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll r,b,d;
        cin>>r>>b>>d;
        ll mn=min(r,b);
        ll mx=max(r,b);
        if(mn*(d+1)>=mx)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}