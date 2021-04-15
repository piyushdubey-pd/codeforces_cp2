#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,W;
    cin>>n>>W;
    int arr[n];
    for(int &i:arr)
    cin>>i;
    bool dp[n+1][W+1];
    for(int i=0;i<=n;i++)
    dp[i][0]=true;
    for(int j=1;j<=W;j++)
    dp[0][j]=false;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++)
        {
            if(arr[i-1]<=j)
            dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][W]<<endl;

}