
#include <bits/stdc++.h>
#include<vector>
#include<unordered_map>
using namespace std;
int distinctIds(int arr[], int n, int mi)
{
    unordered_map<int, int> m;
    priority_queue<pair<int,int>,vector<pair<int,int > >, greater<pair<int,int > > > minh;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
 
    // Store into the vector second as first and vice-versa
    for (auto it = m.begin(); it != m.end(); it++)
        minh.push(make_pair(it->second, it->first));
 
    // // Sort the vector
    // sort(v.begin(), v.end());
     
     while(!minh.empty() && mi>0)
     {
         auto t=minh.top();
            minh.pop();
          t.first--;
          mi--;
          if(t.first>0)
          {
              minh.push(t);
          }
     }
     return minh.size();
    // int size = v.size();
 
    // // Start removing elements from the beginning
    // for (int i = 0; i < size; i++) {
 
    //     // Remove if current value is less than
    //     // or equal to mi
    //     if (v[i].first <= mi) {
    //         mi -= v[i].first;
    //         count++;
    //     }
 
    //     // Return the remaining size
    //     else
    //         return size - count;
    // }
    // return size - count;
}
 
// Driver code
int main()
{
    int arr[] = { 2, 4, 1, 5, 3, 5, 1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    int m = 2;
 
    cout << distinctIds(arr, n, m);
    return 0;
}