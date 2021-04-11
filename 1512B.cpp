#include <bits/stdc++.h>
#include<cmath>
#include<vector>
#define pb push_back
#define pob pop_back
#define mp make_pair
#define ll long long
#define ld long double
#define ft first
#define sd second
#define pie acos(-1)
#define in(b,a) ( (b).find(a) != (b).end()) 
#define fill(a,v) memset(a, v, a.size())
#define INDEX(arr,ind) (lower_bound(arr.begin(),arr.end(),ind)-arr.begin())

using namespace std;
ll lcm(ll a,ll b){ return (a*b)/__gcd(a,b); }


ll checkprime(ll a){ ll i,b=0; for(i=2;i*i<=a;i++){ if(a%i==0) return 0; } return 1; }
ll sum_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a+=(i%10);} return a; }
ll num_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a++;} return a; }
ll first_digit(ll n){ ll a=0,i; for(i=n;i>0;i=i/10){ a=i%10;} return a; }

ll get(ll a[],ll i){ ll x=0,j; for(j=i;j>0;j-=j&-j) x+=a[j]; return x; }
ll flip(ll k){ if(k==0) return 1; return 0; }
bool checksum(vector<ll> a,ll sum){ ll i,j,n=a.size(); bool b[n+1][sum+1];  for(i=0;i<=n;i++) b[i][0]=true;  for(i=1;i<=sum;i++) b[0][i]=false;  for(i=1;i<=n;i++){  for(j=1;j<=sum;j++){  if(j<a[i-1]) b[i][j]=b[i-1][j];  else b[i][j]=b[i-1][j] || b[i-1][j-a[i-1]]; } }  return b[n][sum]; } 
 
void solve(){
    int n;
    cin>>n;
    int x1=-1,x2,y1,y2;
    string ch;
    for(int i=0;i<n;i++){
        cin>>ch;
        for(int j=0;j<n;j++)
        {
            if(ch[j]=='*')
            {
                if(x1==-1)
                {
                    x1=i;
                    y1=j;
                }
                else
                {
                    x2=i;
                    y2=j;
                }
            }
        }
    }
    int x3,y3,x4,y4;
    if(y1==y2)   
    {
    x3=x1;x4=x2;
     if(y1==n-1)
    {y3=y1-1;y4=y1-1;}
     else
    {y3=y1+1;y4=y1+1;}
    }

    else if(x1==x2)
    {
    y3=y1;y4=y2;
     if(x1==n-1)
    {x3=x1-1;x4=x1-1;}
    else
    {x3=x1+1;x4=x1+1;}

    }   
    else{
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
    }
    // cout<<x1<<" "<<y1<<endl;
    // cout<<x2<<" "<<y2<<endl;
    // cout<<x3<<" "<<y3<<endl;
    // cout<<x4<<" "<<y4<<endl;;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( (i==x1 && j==y1) || (i==x2 && j==y2) || (i==x3 && j==y3) || (i==x4 && j==y4))
            cout<<'*';
            else
            cout<<'.';
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }	
}