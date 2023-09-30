#include <iostream>
using namespace std;

int length(char a[], int len){
    if(a[0] == '\0')
        return len;
    
    return length(a+1, len+1);
}

void remove(char a[],char c1,char c2){
    if (a[0]=='\0'){
        return;
    }

    int n = length(a, 0);

    if(a[0]!='\0'){
        for (int i = 0; i < n; i++){
            if(a[i] == c1){
                a[i] = c2;
            }
        }   
    }
}

int main(){
    char c1,c2;
    char a[100];
    cin>>a;
    cin>>c1>>c2;
    
    remove(a,c1,c2);
    cout << a << "\n";
}