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

    tt
    {
        ll n,m,j,i;
        cin>>n>>m;

        ll sum=0;

        for(j=1;j<=m;j++)
        {
            sum=sum+j;
        }

        for(i=2;i<=n;i++)
        {
            sum=sum+((i-1)*m+m);
        }


        cout<<sum<<"\n";

    }
}
