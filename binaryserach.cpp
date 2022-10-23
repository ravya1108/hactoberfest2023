#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int first=0;
    int last=n;
    while(first<=last)
    {
        int mid=(first+last)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
        last=mid-1;
        }
        else{
        first=mid-1;
        }
    }
    return -1;
    

}
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"Enter the value of key";
    cin>>key;
    cout<<binarySearch( arr, n, key)<<endl;
    return 0;



}