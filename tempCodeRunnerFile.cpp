#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
    ll n,m,temp;
    cin>>n>>m;
    ll arr[m]={0};
    for (ll i=0;i<n;i++){
        cin>>temp;
        arr[temp%m]++;
    }
    ll sum=0;
    if(arr[0]!=0)
    sum+=1;
    if(n==1)
    sum=1;
    else if(m%2!=0){
        if(arr[m/2]!=0)
        sum+=1;
        for(ll i=1;i<n/2;i++)
        {
            if(arr[i]==arr[m-i] && arr[i]!=0)
            sum+=1;
            else{
                if(arr[i]==0 && arr[m-i]!=0)
                sum+=arr[m-i];
                if(arr[m-i]==0 && arr[i]!=0)
                sum+=arr[i];
                if(arr[m-i]!=0 && arr[i]!=0) {
                        sum+=(max(arr[i],arr[m-i])-min(arr[i],arr[m-i]))-1;
                        sum+=1;
                }
            }
        }
    }
    else{
        for(int i=1;i<=n/2;i++)
        {
            if(arr[i]==arr[m-i] && arr[i]!=0)
            sum+=1;
            else{
                if(arr[i]==0)
                sum+=arr[m-i];
                else if(arr[m-i]==0)
                sum+=arr[m-i];
                else {
                        sum+=(max(arr[i],arr[m-i])-min(arr[i],arr[m-i]))-1;
                        sum+=1;
                }
            }
        }
    }
    cout<<sum<<endl;
    }
}