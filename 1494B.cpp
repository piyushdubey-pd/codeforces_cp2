#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
        int t; cin >> t;
    while(t--){
        int n,u,r,l,d; cin >> n >> u >> r >> d >> l;
        int ut=0,rt=0,lt=0,dt=0; bool f=true;
        if (u>n || r>n || l>n || d>n)
            f=false;
        else {
            if (u==n){
                ut=n;
                rt+=1; lt+=1;
            }
            else if (u==(n-1)){
                ut=n-1;
                if (r>=l)
                    rt++;
                else  
                lt++; 
            }
            if (d==n){
                dt=n;
                rt++; lt++;
            }
            else if (d==(n-1)){
                dt=n-1;
                if (l>=r)
                    lt++;
                else { rt++; }
            }
            if ((rt>r) || (lt>l)){
                f=false;
            }
            else {
                ut=0;rt=0;lt=0;dt=0;
                if (l==n){
                lt=n;
                ut++; dt++;
                }
                else if (l==(n-1)){
                    lt=n-1;
                    if (u>=d){
                        ut++;
                    }
                    else { dt++; }
                }
                if (r==n){
                    rt=n;
                    ut++; dt++;
                }
                else if (r==(n-1)){
                    rt=n-1;
                    if (d>=u)
                        dt++;
                    else 
                    ut++; 
                }
                if (ut>u || dt>d){
                    f=false;
                }
            }
        }
        if ((u<(n-1))&&(l<(n-1))&&(d<(n-1))&&(r<(n-1)))
            f=true;
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}