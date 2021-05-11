#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<n-1<<endl;
        int h=min_element(arr.begin(), arr.end())-arr.begin();
        int x=h+arr[h];
        for(int i=0;i<h;i++)
        cout<<h+1<<" "<<i+1<<" "<<arr[h]<<" "<<x--<<endl;
        int y=arr[h]+1;
        for(int i=h+1;i<n;i++)
        cout<<h+1<<" "<<i+1<<" "<<arr[h]<<" "<<y++<<endl;
}
}