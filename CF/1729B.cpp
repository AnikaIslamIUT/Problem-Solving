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
       ll i,n;
       cin>>n;
       string T;
       cin>>T;
       string s ="";
       for(i=0;i<n;i++)
       {
           if(i==n-1 || T[i+2]!='0')
           {

               ll a = T[i]-'0';
               a+=96;
               s+=char(a);

           }
           else
           {
               if(T[i+3]=='0')
                  {

                    ll a =T[i]-'0';
                    a+=96;
                    s+=char(a);

                  }
            else{
               string temp ="";
               temp+=T[i];
               temp+=T[i+1];
               ll a = stoi(temp)+96;
               s+=char(a);
               i=i+2;
            }
           }
       }
       cout<<s<<"\n";

    }
}
