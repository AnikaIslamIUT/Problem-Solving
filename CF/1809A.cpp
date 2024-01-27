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
        char a,b,c,d;
        cin>>a>>b>>c>>d;
        ll cnt=0;
        if(a==b) cnt++;
        if(a==c) cnt++;
        if(a==d) cnt++;

        if(cnt==0)
        {
            if(b==c && b==d)
            {
                cout<<"6"<<Go;
            }
            else
            {
                cout<<"4"<<Go;
            }

        }
        else if(cnt==1)
        {
            cout<<"4"<<Go;
        }
        else if(cnt==2)
        {
            cout<<"6"<<Go;
        }
        else
        {
            cout<<"-1"<<Go;
        }
    }
}
