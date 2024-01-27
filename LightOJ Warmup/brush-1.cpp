#define ll long long
#define pi acos(-1.0)
#define Go "\n"
#define Afor(i,a,b) for( i=a;i<b;i++)
#define GCD __gcd
#define ff first
#define ss second
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pi 2*acos(0.0);
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n, cases;
    cin>>cases;
    for (long long caseno = 1; caseno <= cases; ++caseno)
    {
       ll n,i,sum=0;;
       cin>>n;
       ll a[n];
       Afor(i,0,n)
       {
           cin>>a[i];
           if(a[i]>=0)
           {
               sum=sum+a[i];
           }

       }

        cout<<"Case"<<" "<<caseno<<":"<<" "<<sum<<"\n";

    }
    return 0;
}
