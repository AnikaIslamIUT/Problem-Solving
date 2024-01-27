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
int main() {
    long long cases;
    cin>>cases;
    for (long long caseno = 1; caseno <= cases; ++caseno) {
        ll m,n;
        cin>>m>>n;
    if(m==1 || n==1)
    {
         cout<<"Case"<<" "<<caseno<<":"<<" "<<max(m,n)<<"\n";
    }
    else if(m==2 || n==2)
    {
       cout<<"Case"<<" "<<caseno<<":"<<" "<<((m*n)/8)*4 + (((m*n)%8)>=4?4:(m*n)%8)<<"\n";
    }
    else{

        ll q=(m*n);
        if(q%2!=0)
       {
           ll p=(q/2)+1;
       cout<<"Case"<<" "<<caseno<<":"<<" "<<p<<"\n";
       }
       else
       {
           cout<<"Case"<<" "<<caseno<<":"<<" "<<q/2<<"\n";
       }

    }

    }
    return 0;
}

