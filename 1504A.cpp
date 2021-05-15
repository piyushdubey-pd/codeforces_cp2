#include<bits/stdc++.h>
#include <regex>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        regex r("(a)*");
        if(regex_match(s,r))
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            string s1="a"+s;
            string s2=s1;
            reverse(s2.begin(),s2.end());
            if(s1==s2)
            cout<<s<<"a"<<endl;
            else
            cout<<"a"<<s<<endl;
        }
    }
}