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
        ll a, b, n;
        cin>> a >> b >> n;
        ll ans = b;
        ll x;
        for(int i=0;i<n;i++) {
            cin>> x;
            ans += min(a-1, x);
        }

        cout << ans << endl;


    }
}