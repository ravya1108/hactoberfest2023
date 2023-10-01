#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
// Using a first to last approach ‘for’ loop
void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

// 2 pointer approach
void reverseStr(string& str, int n, int i)
{

  if(n<=i){return;}
//  Swapping the character
  swap(str[i],str[n]);
  reverseStr(str,n-1,i+1);

}
int main()
{
    string str = "geeksforgeeks";
    reverseStr(str);
    cout << str;
    return 0;
}
// using stack data structure
int main()
{
    string s = "GeeksforGeeks";
    stack<char> st;
    for (char x : s)
        st.push(x);
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    return 0;
}
