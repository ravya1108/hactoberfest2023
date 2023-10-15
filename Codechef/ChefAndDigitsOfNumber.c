//https://www.codechef.com/problems/LONGSEQ

#include <stdio.h>
int main(void) {
    int T;
    scanf("%d",&T);
    for(int j=0;j<T;j++)
    {
        char digits[1000000];
        scanf("%s",digits);
        int count=0;
        int count2=0;
        for(int i=0;digits[i]!=0;i++)
        {
            if(digits[i]=='1')
            {
                count++;
            }
            if(digits[i]=='0')
            {
                count2++;
            }
        }
        if(count==1 || count2==1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
	return 0;
}

