#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n];
    for(int &i:arr)
    cin>>i;

    int l,r;
    while(q--){
        cin>>l>>r;
        int s= (arr[l-1]-1) + (k - arr[r-1]) + 2*((arr[r-1]-arr[l-1]+1) - (r-l+1));
        cout<<s<<endl;
    }
}