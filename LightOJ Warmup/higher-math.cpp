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
    ll t,j=1;
    cin>>t;
    while(j<=t)
    {

        ll a,b,c, result;
        cin>>a>>b>>c;
        ll h,s1,s2;
        if(a>b&&a>c)
        {
            h=a;
            s1=b;
            s2=c;

        }
        else if(b>a&&b>c)
        {
            h=b;
            s1=a;
            s2=c;
        }
        else{
            h=c;
            s1=b;
            s2=a;
        }

        if((s1*s1)+(s2*s2)==h*h)
        {
            cout<<"Case "<<j++<<": "<<"yes"<<"\n";
        }
        else{
            cout<<"Case "<<j++<<": "<<"no"<<"\n";
        }


    }


}



