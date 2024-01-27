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
        ll N,X,i;
        cin>>N>>X;
        ll a[N];
        ll sum=0;
        Afor(i,0,N)
        {

            cin>>a[i];
            ll p= a[i]/X;
            if(a[i]%X!=0)
            {

                sum=sum+p+1;
            }
            else{
                sum=sum+p;
            }

        }
        //cout<<sum<<"\n";
        sort(a,a+N);
        cout<<min(a[N-1],sum)<<"\n";
    }
}
