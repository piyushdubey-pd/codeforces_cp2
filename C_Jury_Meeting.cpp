#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int mod = 998244353;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll &i:arr)
        cin>>i;

        sort(arr,arr+n);
        ll p=1,p_=1;
        ll temp=arr[n-1]-1;
        int j=n-1;
        int cnt=0;
        while(temp<=arr[j] && j>=0){
            if(arr[j]==temp)
            cnt++;
            j--;
        }
        for(int i=1;i<=n;i++)
        {
            p= (p*i)%mod;
            if(i!=cnt+1) p_=(p_*i)%mod;
        }
        if(arr[n-1]==arr[n-2])
        cout<<p<<endl;
        else{
            
            ll cnt=0;
            if(arr[n-2]==arr[n-1]-1){
            cout<<(p-p_+mod)%mod<<endl;
            }
            else
            cout<<0<<endl;
            }
    }
}