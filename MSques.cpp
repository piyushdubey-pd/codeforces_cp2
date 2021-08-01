#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> R(m);
    vector<int> C(m);
    for(int i=0;i<m;i++)
        cin>>R[i];
    for(int i=0;i<m;i++)
        cin>>C[i];
    bool mat[n+2][n+2];
    memset(mat,0,sizeof(mat));
    for(int i=0;i<m;i++)
    {
        mat[R[i]+1][C[i]+1]=true;
    }
    // int final[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int temp=0;
            temp=mat[i-1][j-1] + mat[i-1][j]+ mat[i-1][j+1] + mat[i][j+1] + mat[i][j-1] + 
                        mat[i+1][j-1] + mat[i+1][j] + mat[i+1][j+1];
            if(mat[i][j]==1)
            cout<<"B ";
            else
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
