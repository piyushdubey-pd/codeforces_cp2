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
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int r=n-1;
    int z=0;
    int sol[n];

    while(true)
    {
        int max=0,zip=-1;
        int prevr=r;
        for(int i=0;i<=r;i++){
            if(arr[i]>max)
            {    
                max=arr[i];
                zip=i;
            }
        }
        r=zip;
        if(prevr==r){
            for(int i=r;i>=0;i--)
            sol[z++]=arr[i];
            break;
        }

        else
        {
            int tmp=r;
            while(tmp<=prevr){
                sol[z++]=arr[tmp++];
            }
            r=r-1;
            prevr=r-1;
        }    
    }
    for(int i=0;i<n;i++)
    cout<<sol[i]<<" ";
    cout<<endl;
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