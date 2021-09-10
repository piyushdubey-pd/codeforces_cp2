#include <bits/stdc++.h>
using namespace std;

int recur(int n){
    if(n<=1)
    return n;

    else if(n&1)
    return 4*(recur(n/2))+1;

    else
    return 4*(recur(n/2));
}
int main(){
    int n;
    cin>>n;
    cout<<recur(n)<<endl;

}