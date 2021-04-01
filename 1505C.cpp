#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()<=2)
    {
        cout<<"YES"<<endl;
        exit(0);
    }
    int x=s[0]-65;
    int y=s[1]-65;
    bool f=true;
    for(int i=2;i<s.size();i++){
        int z=s[i]-65;
        // cout<<x<<endl;
        // cout<<y<<endl;
        // cout<<z<<endl;
        if((x+y)%26!=z)
        {
            f=false;
            break;
        }
        x=y;
        y=z;
    }
    if(f)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}