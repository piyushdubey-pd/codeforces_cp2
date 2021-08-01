#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%3==1)
        cout<<(n/3)+1<<" "<<n/3<<endl;
        else if(n%3==2)
        cout<<(n/3)<<" "<<(n/3)+1<<endl;
        else
        cout<<n/3<<" "<<n/3<<endl;
    }
}