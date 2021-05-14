// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int o=0,z=0;
//     for(int &i:arr)
//     {
//         cin>>i;
//         if(i==1)
//         o++;
//         else
//         z++;
//     }
//     int score=0,ma=0;
//     for(int i=0;i<n;i++)
//     {
//         score=o;
//         for(int j=i;j<n;j++)
//         {
//             if(arr[j]==0)
//             score+=1;
//             else
//             score-=1;
//             ma=max(ma,score);
//         }
//     }
//     cout<<ma<<endl;
// }    


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int ones=0;
    for(int &i:arr)
    {
        cin>>i;
        ones+=i;
        if(i)
        i=-1;
        else
        i=1;
    }
    if(ones==n)
    cout<<n-1;
    else
    {
        int ans=0,x=0;
    for(int i=0;i<n;i++)
    {
        x+=arr[i];
        ans=max(x,ans);
        if(x<0)
        x=0;
    }
    cout<<ans+ones;
    }
}