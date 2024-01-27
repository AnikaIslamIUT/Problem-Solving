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
        ll S,X,Y,Z;
        cin>>S>>X>>Y>>Z;
        if(S-(X+Y)>=Z)
        {
            cout<<"0"<<"\n";
        }
        else if(S-X>=Z||S-Y>=Z){
            cout<<"1"<<"\n";
        }
        else{
            cout<<"2"<<"\n";
        }

    }
}

