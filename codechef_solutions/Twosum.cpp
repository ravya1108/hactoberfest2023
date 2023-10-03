#include <iostream>

using namespace std;

int main()
{
    int a=0, b=0, i, j, nums[1000], target, num;
    cin>>num;
    for(i=0; i<num; i++)
    {
        cin>>nums[i];
    }
    cin>>target;

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                a = i;
                b = j;
                break;
            }
        }
        
        if(b!=0)
        {
            break;
        }
    }

    if((a == 0) && (b == 0))
    {
        cout<<"[]";
    }
    else
    {
        cout<<"["<<a<<","<<b<<"]";
    }

    return 0;
}

