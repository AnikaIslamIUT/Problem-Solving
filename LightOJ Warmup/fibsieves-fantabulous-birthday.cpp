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
    long long n, cases;
    cin>>cases;
    for (long long caseno = 1; caseno <= cases; ++caseno)
    {
        long long s,x,y;
        cin>>s;
        ll a = ceil(sqrt(s*1.0));
        ll p=a*a;
        if(a%2==0)
        {
            x=a;
            y=1+p-s;
            if(y>a)
            {
                x=x-(y-a);
                y=a;
            }

        }
        else
        {
            y=a;
            x=1+p-s;
            //cout<<x<<y<<a<<"\n";
            if(x>a)
            {
                y=y-(x-a);
                x=a;

            }
        }

        cout<<"Case"<<" "<<caseno<<":"<<" "<<x<<" "<<y<<"\n";
    }
    return 0;
}
