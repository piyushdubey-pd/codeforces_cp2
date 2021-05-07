#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int c=0,tmp;
    string s;
    for(int i=0;i<15;i++){
        cout<<arr[i]<<endl;
        cin>>s;
        if(s=="yes")
        {
            c++;
            tmp=arr[i];
        }
        if(c==2)
        break;
    }
    if(c==2)
    cout<<"composite"<<endl;
    else
    {
        if(c==1)
        {
            if(tmp<10)
            {
                cout<<tmp*tmp<<endl;
                cin>>s;
            if(s=="yes")
            cout<<"composite"<<endl;
            else
            cout<<"prime"<<endl;
            }
            else
            cout<<"prime"<<endl;
        }
        else    
        cout<<"prime"<<endl;
    }
}