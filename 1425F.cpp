#include <bits/stdc++.h>
using namespace std;

int ask(int n,int m){
    int x;
    cout<<"? "<<n<<" "<<m<<endl;
    cin>>x;
    return x;
}

int main(){
    int k;
    cin>>k;
    int arr[k];

    int m,n,o;
    m=ask(1,2);
    n=ask(2,3);
    o=ask(1,3);

    arr[0]= o-n;
    arr[1]= m+n-o;
    arr[2]= o-m;

    int g;
    for(int i=4;i<=k;i++){
        g=ask(i-1,i);
        arr[i-1]=g-arr[i-2];
    }
    cout<<"! ";
    for(int i=0;i<k;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}