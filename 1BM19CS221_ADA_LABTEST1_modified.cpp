#include <bits/stdc++.h>
#include<time.h>
#include<unistd.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of array elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements "<<endl;
    for(int &i:arr)
    cin>>i;
    clock_t c1,c2;
    c1=clock();
    for(int i=0;i<100;i++)
    usleep(1000);

    for(int i=n-1;i>=0;i--)
    {
        int k=arr[i];
        int j=i+1;
        while(j<n && arr[j]>k)
        {
            arr[j-1]=arr[j];
            j++;
        }
        arr[j-1]=k;
    }
    c2=clock();
    for(int i:arr)
    cout<<i<<" ";
    cout<<endl;
    cout<<"Time elapsed: "<<float(c2-c1)/float(CLK_TCK);
    return 0;
}