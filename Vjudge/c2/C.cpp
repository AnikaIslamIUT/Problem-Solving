#define ll long long
#define pi acos(-1.0)
#define Go "\n"
#define Afor(i,a,b) for( i=a;i<b;i++)
#define GCD __gcd
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tt  int t ; cin >> t ; while(t--)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ,j;
     cin >> t ;
    for(j=1;j<=t;j++)
    {
        ll n,i;
        cin>>n;
        ll a[n];
        ll o=0;
        ll e=0;
        Afor(i,0,n)
        {
           cin>>a[i];
           if(i%2==0)
           {
               e=e+a[i];
           }
           else
           {
               o=o+a[i];
           }
        }
        cout<<"Case"<<" "<<j<<":"<<" "<<max(e,o)<<"\n";
    }
}
