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
double memorize[1000005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    memorize[0]=0;

    for(int k=1;k<=1000000;k++)
    {
        memorize[k]= memorize[k-1]+log(k);

    }
    ll T;
    cin>>T;
    ll j=1;

    while(j<=T)
    {
        int N,b;
        cin>>N>>b;

        ll d= memorize[N]/log(b)+1;

        cout<<"Case "<<j++<<": "<<d<<"\n";


    }



}

