#include<bits/stdc++.h>
using namespace std;
int srchnsrt(int arr[],int n,int target){
	for(int i=0;i<n;i++){
		if(arr[i]==target) return i;
	}
	return -1;
}
int main(){
	int arr[]={5,10,30,20,40};
	int n=sizeof(arr)/sizeof(int);
	int target;
	cin>>target;
	cout<<srchnsrt(arr,n,target);
}
