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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        ll a,b,c,d,i;
        cin>>a>>b>>c>>d;

        cout<<(b>a)+(c>a)+(d>a)<<"\n";

       /* v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);


        sort(v.begin(),v.end());*/

        /*ll cn=0;
        for(i=3;i>=0;i--){
            if(a>=v[i]){          //approach 1
                break;
            }
            else{
                cn++;
            }
        }
        cout<<cn<<"\n";*/



    }
}
