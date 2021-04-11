#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int &i:arr)
        cin>>i;
        int m=0,l=0,x,y;
        for(int i=1;i<n;i++)
        {
            if(arr[i]==arr[0])
            {
                m++;
                x=i;
            }
            else
            {
                l++;
                y=i;
            }
        }
        if(l==1)
        cout<<y+1<<endl;
        else if(m==1)
        cout<<x+1<<endl;
        else
        cout<<1<<endl;
    }
}