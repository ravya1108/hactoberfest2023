#include<bits/stdc++.h>
using namespace std;
int occ(int arr[],int n,int target){
	int startf=0;
	int endf=n-1;
	int resf=0;
	while(startf<endf){
		int mid=startf+(endf-startf)/2;
		if(target==arr[mid]){
			resf=mid;
			endf=mid-1;
		}
		else if(target<arr[mid]){
			endf=mid-1;
		}
		else{
			startf=mid+1;
		}
	}
	int startl=0;
	int endl=n-1;
	int resl=0;
	while(startl<endl){
		int mid=startl+(endl-startl)/2;
		if(target==arr[mid]){
			resl=mid;
			startl=mid+1;
		}
		else if(target<arr[mid]){
			endl=mid-1;
			
		}
		else{
			startl=mid+1;
		}
	}
	return (resl-resf)+1;
}
int main(){
	int arr[]={1,2,3,4,6,8,10,10,10,10,6,2};
	int n=sizeof(arr)/sizeof(int);
	int target;
	cin>>target;
	cout<<occ(arr,n,target);
}
