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

string decimalToBinary(int N)
{
    int i;
    string binary="";
    for(i=31; i>=0; i--)
    {
        int k = 1<<i;
        binary+=(N&k)?'1':'0';

     //cout<<binary<<"\n";
    }
    return binary;
}
int binaryToDecimal(string binary)
{
    int decimal = 0;
    for (int i = 0; i < 32; i++){
        decimal = (2*decimal) + binary[i] - '0';
        //cout<<decimal<<"\n";
    }
    return decimal;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    int j=1;
    while(j<=T)
    {
        int N;
        cin>>N;
        string binary = decimalToBinary(N);
        next_permutation(binary.begin(), binary.end());
        cout<<"Case "<<j++<<": "<<binaryToDecimal(binary)<<"\n";
    }



}
