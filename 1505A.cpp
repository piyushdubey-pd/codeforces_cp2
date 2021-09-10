#include <bits/stdc++.h>
using namespace std;


void helper(vector<int> &arr, int n){
    // for(int i:arr)
    // i+=1;
    arr.push_back(10);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &i:arr){
        cin>>i;
        }

    // {int x; cin>>x; arr.push_back(x);}
    helper(arr,n);
    for(int i:arr)
    cout<<i<<endl;

}