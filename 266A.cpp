#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int num=0,sum=0;
    while(i<n-1){
        if(s[i]==s[i+1])
        num++;
        else
        {
            sum=sum+(num);
            num=0;
        }
        i++;
    }
    cout<<sum+num<<endl;
}