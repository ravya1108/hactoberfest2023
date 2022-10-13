#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int i;
    srand(time(0));
    for(i=0; i<10; i++)
        cout<<rand()<<endl;
    cout<<endl;
    return 0;
}
