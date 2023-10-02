#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int> a(n),b(m);
        int sa=0,sb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sa+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            sb+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(k%2)
        cout<<max(sa,sa-a[0]+b[m-1])<<"\n";
        else {
            if(a[0]<b[m-1]){
                sa-=a[0];
                sa+=b[m-1];
                swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
            }
            if(b[0]<a[n-1]){
                sa-=a[n-1];
                sa+=b[0];
            }
            cout<<sa<<"\n";
        }
    }

    return 0;
}
