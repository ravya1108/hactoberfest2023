#include<stdio.h>
#include<windows.h>

int main()
{
    int h,m,s;
    
    printf("set time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12||m>60||s>60)
    {
        printf("error! \n");
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("Clock :");
        printf("%02d:%02d:%02d",h,m,s);
        Sleep(1000);
        system("cls");
        
    }
    return 0;
}
