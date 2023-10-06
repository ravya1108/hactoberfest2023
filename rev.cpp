#include<bits/stdc++.h>
using namespace std;
int findmin(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		int next=(mid+1)%n;
		int prev=(mid+n-1)%n;
		if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
			return arr[mid];
		}
		else if(arr[mid]<=arr[end]){
			end=mid-1;
		}
		else if(arr[mid]>=arr[start]){
			start=mid+1;
		}
	}
	return 0;
}
int main(){
	int arr[]={11,12,15,18,2,5,6,8};
	int n= sizeof(arr)/sizeof(int);
	cout<<findmin(arr,n);
}
