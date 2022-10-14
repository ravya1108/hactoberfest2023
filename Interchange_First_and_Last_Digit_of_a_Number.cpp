#include<iostream>
using namespace std;
int main()
{
    int num, rem, temp, rev=0, noOfDigit=0;
    int noOfDigitTemp, revNum, remTemp;
    cout<<"Enter the Number: ";
    cin>>num;
    temp = num;
    while(temp>0)
    {
        temp = temp/10;
        noOfDigit++;
    }
    if(noOfDigit<2)
    {
        cout<<"\nIt is a Single-digit Number!";
        cout<<"\nTry again with a Number with Two or More Digits!";
    }
    else if(noOfDigit==2)
    {
        temp = num;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        cout<<"\nFirst and Last Digit Interchanged Successfully!";
        cout<<"\n\nNew Number = "<<rev;
    }
    else
    {
        temp = num;
        while(temp>0)
        {
            rem = temp%10;
            rev = (rev*10)+rem;
            temp = temp/10;
        }
        revNum = rev;
        rev = 0;
        temp = num;
        noOfDigitTemp = noOfDigit;
        while(temp>0)
        {
            remTemp = revNum%10;
            if(noOfDigitTemp==noOfDigit)
            {
                rem = temp%10;
                rev = (rev*10)+rem;
            }
            else if(noOfDigitTemp==1)
            {
                rem = temp%10;
                rev = (rev*10)+rem;
            }
            else
            {
                rev = (rev*10)+remTemp;
            }
            temp = temp/10;
            revNum = revNum/10;
            noOfDigitTemp--;
        }
        cout<<"\nFirst and Last Digit Interchanged Successfully!";
        cout<<"\n\nNew Number = "<<rev;
    }
    cout<<endl;
    return 0;
}
