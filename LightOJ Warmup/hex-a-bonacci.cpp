#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, e, f;
long long dp[10005];
long long fn(int n) {
    if(dp[n]!=-1)
    {
        return dp[n];
        // cout<<n<<"\n";
    }
     //cout<<n<<"\n";
    if (n == 0) return a;
    if (n == 1) return b;
    if (n == 2) return c;
    if (n == 3) return d;
    if (n == 4) return e;
    if (n == 5) return f;
  //cout<<n<<"\n";
    dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
     // cout<<n<<"\n";
    return dp[n];
}
int main() {
    long long n, cases;
    cin>>cases;
    for (long long caseno = 1; caseno <= cases; ++caseno) {
            memset(dp, -1, sizeof(dp));

     cin>>a>>b>>c>>d>>e>>f>>n;


        cout<<"Case"<<" "<<caseno<<":"<<" "<<fn(n) % 10000007<<"\n";
    }
    return 0;
}
