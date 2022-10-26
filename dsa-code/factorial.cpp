#include <iostream>
using namespace std;

int factorial(int ni){
   

    if( ni == 1){ return 1;}
    return ni * factorial(ni-1);
}

void main(){
    int n =2;
    int fact = factorial(n);
    cout<<fact;
}