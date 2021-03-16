#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    ll n,p=1;
    cin>>n;
    for(int i=2;i<n;i++)
    p*=i;
    // best self explainable anwer is..
    // (n-1)P(n/2) * ((n/2)-1)
    cout<<p/(n/2)<<endl;

    // n! is for linear arrangement circular is (n-1)! that is nothing but n!/n
    //  so in this case we have covered circular of first then dividing the other
}