#include <bits/stdc++.h>
using namespace std;

double eps=1e-2;

int main(){
	long long n;
	cin>>n;

	double lo=1,hi=n,mid;
	while(hi-lo>eps){
		mid=(hi+lo)/2;
		if (mid*mid<n)
		{
			lo=mid;
		}
		else{
			hi=mid;

		}
	}
	cout<<lo<<endl;
}