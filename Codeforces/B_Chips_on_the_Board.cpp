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
        int n;
        cin>> n;
        vector<ll> a(n), b(n);
        for(int i=0;i<n;i++)
        {
            cin>> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>> b[i];
        }
        
        ll asum = 0, bsum = 0;
        ll amin = *min_element(a.begin(), a.end());
        ll bmin = *min_element(b.begin(), b.end());
        for(int i=0;i<n;i++)
        {
            asum += (a[i] + bmin);
            bsum += (b[i] + amin);
        }

        if(asum>bsum) cout<< bsum << endl;
        else cout<< asum << endl;

    }
}