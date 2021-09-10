#include <bits/stdc++.h>
using namespace std;

using ll=long long;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;cin>>s;
        bool flag=true;
        char x=s[0];
        bool p=true;
        for(int i=1;i<n;i++){
            if(s[i]!=x && flag)
            {
                p=false;
                cout<<i-1<<" "<<i<<endl;
                break;
            }
        }
        if(p)
        cout<<-1<<" "<<-1<<endl;
    }
    return 0;
}