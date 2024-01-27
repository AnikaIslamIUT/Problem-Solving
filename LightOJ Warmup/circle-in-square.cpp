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
    long long n, cases;
    cin>>cases;
    for (long long caseno = 1; caseno <= cases; ++caseno)
    {

        double r;
        cin>>r;
        double diameter = 2*r;
        double squareArea= diameter*diameter;
        double circleArea = pi*r*r;
        double shadedArea = (squareArea-circleArea)+ pow(10,-9);


        cout<<"Case"<<" "<<caseno<<":"<<" "<<fixed<<setprecision(2)<<shadedArea<<"\n";
    }
    return 0;
}



