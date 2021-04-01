#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
    ll n,m,temp;
    cin>>n>>m;
    map <int,int> arr;
    for (ll i=0;i<n;i++){
        cin>>temp;
        arr[temp%m]++;
    }   
    ll sum=0;
    for(auto &i: arr){
        if(i.first==0)
        sum+=1;
        else if (2*i.first==m)
        sum+=1;
        else if(2*i.first < m || arr.find(m-i.first) == arr.end())
        { 
        int x = i.second, y = arr[m-i.first];
        sum += 1 + max(0,abs(x-y)-1);
    }
    }
    cout<<sum<<endl;
    }
}