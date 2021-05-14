#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        int fez=0, feo=0, fdz=0, fdo=0;
        bool flg=false;
        int t=-1;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i])
            {
                if(fdz!=fdo){
                    flg=false;
                    break;
                }
                else
                {
                    fdz=0;
                    fdo=0;
                    t=i;
                    flg=true;
                }
                if(s1[i]=='0')
                fez++;
                else
                feo++;
            }
            else
            {
                if(fez!=feo){
                    flg=false;
                    break;
                }
                else
                {
                    fez=0;
                    feo=0;
                    flg=true;
                    t=i;
                }
                if(s1[i]=='0')
                fdz++;
                else
                fdo++;
            }
        }
        for(int i)
        if(flg && )
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
