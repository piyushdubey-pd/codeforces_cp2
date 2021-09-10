#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int u=n;
    int wt[n],val[n];
    int dp[n+1][31+1];
    int i=0;
    while(i<u){
        string s;int z;
        cin>>s>>z;
        // cout<<s<<"]]"<<z<<endl;
        wt[i]=s.size()+1;
        val[i]=z;
        // cout<<i<<endl;
        ++i;
    }
    for(int i=0;i<n+1;i++)
    dp[i][0]=0;
    for(int i=0;i<31+1;i++)
    dp[0][i]=0;
    // for(int i=0;i<n;i++)
    // cin>>wt[i];
    // for(int i=0;i<n;i++)
    // cin>>val[i];

    for(int i=1;i<n+1;i++){
        for(int j=1;j<31+1;j++){
            if(wt[i-1]<=j)
            dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][31];
}