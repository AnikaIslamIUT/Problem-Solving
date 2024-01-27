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
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,flag=0;
        cin>>n;
        ll cnt[100];
        Afor(i,0,100)
        {
            cnt[i]=0;
        }
        ll arr[n];
        Afor(i,0,n)
        {
            cin>>arr[i];
            if(arr[i]>=n)
            {
                flag=1;
            }

        }
        if(n==1&& arr[n-1]!=0)
        {
            flag=1;
        }



            sort(arr,arr+n);
            //cout<<"\n";

            //cnt[arr[0]]++;
            for(i=0; i<n; i++)
            {
                cnt[arr[i]]++;
                //cout<<arr[i]<<"\n";
                //cout<<arr[i]<<" "<< cnt[arr[i]]<<"\n";

            }

            for(i=1;i<n;i++)
            {
                if(cnt[i]>cnt[i-1])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
            {
                cout<<"NO"<<"\n";
            }
            else
            {
                cout<<"YES"<<"\n";
            }


    }
}
