#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[15][3]={
        {4,8,32},
        {4,15,60},
        {4,16,64},
        {4,23,92},
        {4,42,168},
        {8,15,120},
        {8,16,128},
        {8,23,184},
        {8,42,336},
        {15,16,240},
        {15,23,345},
        {15,42,630},
        {16,23,368},
        {16,42,672},
        {23,42,966}};
        
        int sol[4];
        for(int i=0;i<4;i++)
        {
            cout<<"? "<<(i+1)<<" "<<(i+2)<<endl;
            cout.flush();
            cin>>sol[i];
        }
        int arr2[6];
        int a,b,c,d;
        int z=0;
        for(int j=0;j<15;j++){
            if(sol[0]==arr[j][2])
                {
                    a=arr[j][0];
                    b=arr[j][1];
                }
                if(sol[1]==arr[j][2])
                {
                    c=arr[j][0];
                    d=arr[j][1];
                }
        }
            int sum=108;
                if(a==c)
                {
                    arr2[0]=b;
                    arr2[1]=a;
                    arr2[2]=d;
                    sum=sum-(b+a+d);
                }
                else if(a==d)
                {
                    arr2[0]=b;
                    arr2[1]=a;
                    arr2[2]=c;
                    sum=sum-(b+a+c);
                }
                else if(b==c){
                    arr2[0]=a;
                    arr2[1]=b;
                    arr2[2]=d;
                    sum=sum-(a+b+d);
                }
                else
                {
                    arr2[0]=a;
                    arr2[1]=b;
                    arr2[2]=c;
                    sum=sum-(a+b+c);
                }
        for(int i=2;i<4;i++){
            arr2[i+1]=sol[i]/arr2[i];
            sum-=arr2[i+1];
        }
        arr2[5]=sum;
        cout<<"! ";
        for(int i=0;i<6;i++)
        cout<<arr2[i]<<" ";
        cout<<endl;
        }