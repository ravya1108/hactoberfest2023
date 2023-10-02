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
        ll n, k, q;
        cin>> n >> k >> q;
        
        vector<ll> v(n);
        for(ll &i: v) cin>> i;

        ll ans = 0, length = 0;
        for(ll &i: v) {
            if(i<=q) {
                length++;
            }
            else {
                if(length >= k) {
                    ans += (length - k + 1) * (length - k + 2) / 2;
                }
                length = 0;
            }
        }
        if (length >= k)
        {
            ans += (length - k + 1) * (length - k + 2) / 2;
        }

        cout<< ans <<endl;
    }
}