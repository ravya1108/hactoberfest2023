#include <iostream>
using namespace std;
int main()
{
    int row;
    char c;

    cout<<"Enter no. of rows : ";
    cin>>row;

    cout<<"Enter first character : ";
    cin>>c;

    char original=c;

    for (int i=1;i<=row;i++)
    {
        for (int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for (int j=1;j<=i;j++)
        {
            cout<<c;
            c++;
        }

        c=original;

        cout<<endl;
    }
    return 0;
}

// Sample Output

// Enter no. of rows : 5
// Enter first character : A
//     A
//    AB
//   ABC
//  ABCD
// ABCDE