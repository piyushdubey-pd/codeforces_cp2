#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k,lim=0; cin >> n >> k;
        long long ans=LLONG_MIN;
        int arr[n]={0};
        for (int i=0; i<n; i++){
            cin >> arr[i];
        }
        if (n<=10000) lim=0;
        else lim=n-10000;
        for (int i=lim; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                long long temp = ((i+1)*(j+1))-(k*(arr[i]|arr[j]));
                ans=max(ans, temp);
            }
        }
        cout << ans << endl;
    }
    return 0;
}