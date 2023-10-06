#include<bits/stdc++.h>
using namespace std;
int binsrch(int arr[],int n,int target){
	int start=0;
	int end=n-1;
	while(start<end){
		int mid=start+(start+end)/2;
		if(target==arr[mid]){
			return mid;
		}
		else if(target<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
}
int main(){
	int arr[]={1,2,3,4,8,9,10,36,45};
	int n,target;
	n=sizeof(arr)/sizeof(int);
	cin>>target;
	cout<<binsrch(arr,n,target);
}
