#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        string str;
        cin>>str;
        unordered_map<char, bool> mp;
        int dis=0,sam=0;
        for(int i=0;i<str.size();i++){
            if(mp.find(str[i])==mp.end())
            {
                mp[str[i]]=false;
            }
            else{
                if(mp[str[i]]==false)
                {
                    mp[str[i]]=true;
                    sam++;
                }
            }
        }
        dis=mp.size()-sam;
        cout<<sam+(dis/2)<<endl;
    }
}