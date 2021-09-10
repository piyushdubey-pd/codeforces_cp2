#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[n];
        vector<int> vis;
        for(int i=0;i<n;i++)
        {
            arr[i]=s[i]-48;
            if(arr[i]==2)
            vis.push_back(i);
        }
        if(vis.size()<=2 && vis.size()>0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            char p[n][n];
            memset(p,'=',sizeof(p));
            for(int i=0;i<n;i++)
            p[i][i]='X';
            
            for(int i=0;i<vis.size();i++)
            {
                p[vis[i]][vis[(i+1)%vis.size()]] = '+';
                p[vis[(i+1)%vis.size()]][vis[i]] = '-';
            }           
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {cout<<p[i][j];}
                cout<<endl;
            }
        }

    }
}