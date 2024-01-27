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
string findDiff(string a, string b){
    ll carry =0;
    ll len_a = a.size();
    string ans=" ";
    for(int i=0;i<len_a;i++){
            ll p;
            if((b[i]-'0')<((a[i]-'0')+carry))
            {
                p=(10+(b[i]-'0'))-(a[i]-'0')-carry;
                carry=1;
            }
            else{
                p=(b[i]-'0')-(a[i]-'0')-carry;
                carry=0;
            }
            string q = to_string(p);

        ans.insert(i, q);
        //cout<<ans<<"\n";
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());

    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    tt
    {
        ll n,i;
        cin>>n;
        string a;
        cin>>a;
        ll len = a.size();

        string x="1";
        string o= "1";
        string z="0";
        if(a[0]=='9')
        {
            for(i=1; i<len+1; i++)
            {
                x.insert(i, o);
            }

        }
        else
        {
            for(i=1; i<n+1; i++)
            {
                if(i==n)
                {
                     x.insert(i, o);
                }
                else x.insert(i, z);
            }

        }

        reverse(a.begin(),a.end());

        cout<<findDiff(a,x)<<"\n";



    }
}
