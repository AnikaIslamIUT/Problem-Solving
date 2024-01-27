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
        ll N,i;
        cin>>N;
        ll sum=0;
        ll b[N];
        Afor(i,0,N)
        {

            cin>>b[i];
            sum=sum+b[i];
        }
        ll sum2=sum/(N+1);
        Afor(i,0,N-1){
            cout<<b[i]-sum2<<" ";
        }
        cout<<b[N-1]-sum2<<"\n";
    }
}
