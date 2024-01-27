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
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;

        ll lif1 = a-1;
        ll lif2 = abs(b-c)+(c-1);
        if(lif1<lif2)
        {
            cout<<"1"<<"\n";
        }
        else if (lif1>lif2)
        {
            cout<<"2"<<"\n";
        }
        else
        {
            cout<<"3"<<"\n";
        }

    }

}

