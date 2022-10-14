#include<iostream>
using namespace std;
int main()
{
    int first, last, temp, noOfDigit, num, res=0, rem, pow, i;
    first = 1;
    last = 500;
    cout<<"Armstrong Numbers Between 1 and 500\n";
    while(first<=last)
    {
        temp = first;
        noOfDigit = 0;
        while(temp>0)
        {
            temp = temp/10;
            noOfDigit++;
        }
        num = first;
        while(num>0)
        {
            rem = num%10;
            pow = 1;
            i = 0;
            while(i<noOfDigit)
            {
                pow = pow*rem;
                i++;
            }
            res = res + pow;
            num = num/10;
        }
        if(res==first)
            cout<<res<<endl;
        first++;
        res = 0;
    }
    cout<<endl;
    return 0;
}
