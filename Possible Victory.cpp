#include <bits/stdc++.h>
using namespace std;

int main() {
    int r,o,c,score,max;
    cin>>r>>o>>c;
    score=r-c+1;
    max=(20-o)*36;
    if(max<score)
        cout<<"NO"<<"\n";
    else
        cout<<"YES"<<"\n";
	return 0;
}
