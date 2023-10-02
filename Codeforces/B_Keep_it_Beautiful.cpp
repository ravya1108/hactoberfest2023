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
        int q;
        cin>> q;
        vector<ll> query(n), temp;

        for(int i=0;i<q;i++)
        {
            cin>> query[i];
        }

        string ans = "";
        ll cnt = 0;
        for(int i=0;i<q;i++)
        {
            temp.push_back(query[i]);
            if(temp.size() == 1) continue;
            //else
            
            if(temp[0] <= query[i]) && query[i] >= 
        }
    }
}