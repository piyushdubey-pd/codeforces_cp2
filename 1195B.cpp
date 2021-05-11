#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,k;
    cin>>n>>k;
    ll z=(sqrt((9+(8*(n+k))))-3)/2;
    cout<<n-z<<endl;
}