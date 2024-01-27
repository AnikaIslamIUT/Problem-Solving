#define ll long long
#define pi acos(-1.0)
#define Go "\n"
#define Afor(i,a,b) for( i=a;i<b;i++)
#define GCD __gcd
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#include<bits/stdc++.h>
const long long int MOD = 1000000007; // 998244353
const ll INF = 1e18;
const ll inf = 0xFFFFFFFFFFFFFFFL;
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //ll t;
    //cin>>t;
    //while(t--)
    ll n,m,i,sum=0;
    cin>>n>>m;
    map<ll,ll>lo;
    map<ll,ll>hi;
    map<ll,ll>total;

    map<ll,ll>::iterator itr

    Afor(i,0,m)
    {
        ll x,y;
        cin>>x>>y;
        lo[x]=i;
        hi[y]=i;
        sum=sum+y;
    }

    if(sum>=n)
    {
for (itr = lo.begin(); itr != lo.end(); ++itr)
        {
            if(itr->first<=n)
            {

            }
        }
        if(i<n)
        {
            cout<<"Yes"<<"\n";
        }

    }
    else
    {
        cout<<"-1"<<"\n";
    }

}
