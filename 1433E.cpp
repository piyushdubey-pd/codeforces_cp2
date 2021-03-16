#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,p=1;
    cin>>n;
    for(int i=2;i<n;i++)
    p*=i;
    cout<<p/(n/2)<<endl;
}