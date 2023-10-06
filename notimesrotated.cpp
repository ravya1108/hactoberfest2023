#include<bits/stdc++.h>
using namespace std;
int rot(int arr[],int n){
	int start=0;
	int end=n-1;
	int smallest=-1;
	while(start<=end){
		int mid=start+(end-start)/2;
		int next=(mid+1)%n;
		int prev=(mid-1+n)%n;
		if(arr[mid]<=arr[next] && arr[mid]<=arr[prev]){
			smallest= arr[mid];
		}
		else if(arr[mid]<=arr[end]){
			end=mid-1;
		}
		else if(arr[mid]>=arr[start]){
			start=mid+1;
		}
	}
	while()
}
int main(){
	int arr[]={22,18,12,1,3,6,8,10};
	int n=sizeof(arr)/sizeof(int);
	cout<<rot(arr,n);
}
