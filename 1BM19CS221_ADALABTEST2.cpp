#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of vertices : ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter cost matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    int i,j,u,v,min;
    int ne=0;
    int mincost=0;
    int elec[n];
    for(int i=0;i<n;i++)
    elec[i]=0;
    int res[n][n];
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            {
                res[i][j]=0;
            }
        }
    }
    elec[0]=1;
    while(ne!=n-1){
        min=9999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                if(elec[i]==1){
                    if(arr[i][j]<min)
                   { min=arr[i][j];
                    u=i;
                    v=j;
                   }
                }
            }
        }
        if(elec[v]!=1)
        {
            cout<<"\n"<<char(65+u)<<" --->"<<char(65+v)<<"="<<min<<endl;
           elec[v]=1;
           ne=ne+1;
           mincost=mincost+min;
        }
        arr[u][v]=arr[v][u]=9999;
        res[u][v]=res[v][u]=min;
    }

    cout<<endl<<"Resultant MST:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<res[i][j]<<" ";
        cout<<endl;
    }
    cout<<"\n\nminimum cost: "<<mincost<<endl;
}