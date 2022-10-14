#include<iostream>
using namespace std;
void print_pascal(int );
int combi(int , int );
int factorial(int );
int main()
{
    int a;
    cout<<"enter a number of lines of pascal triangle : ";
    cin>>a;
    print_pascal(a);
    return 0;
     
}
void print_pascal(int n)
{
    int i,j,k,l;
    for(i=1;i<=n;i++)
    {
        k=1,l=0;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=(n+1)-i&&j<=(n-1)+i&&k)
            {
                cout<<" "<<combi(i-1,l)<<" ";
                k=0,l++;
                
            }
            else
            {
                cout<<"  ";
                k=1;
                
            }
        }
        cout<<endl;
    }

}
int factorial(int a)
{   int c=1;
    while(a!=0)
    {
        c=c*a;
        a--;
    }
    return c;
}
int combi(int a, int b)
{
    return factorial(a)/factorial(b)/factorial(a-b);
}
