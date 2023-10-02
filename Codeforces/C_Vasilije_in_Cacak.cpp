#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{

    int t;
    cin>> t;
    while(t--)
    {
        ll n, k, x;
        cin>> n >> x >> k;

        if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

}