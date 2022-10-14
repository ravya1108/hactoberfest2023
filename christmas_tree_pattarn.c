#include <stdio.h>
int main(){
  int n=10;//properly works for 7 to 12 only
  
  //first head of tree
  
  for(int row=1;row<=n;row++){
     for(int column=row;column<=n;column++){
       printf("  ");     
     }
     for(int column=1;column<=row;column++){
         printf(" *");
     }
         for(int column=1;column<=row;column++){
         printf(" *");
     }
   printf("\n");
  }
  
  //second part
  
  
  for(int row=1;row<=n/2;row++){
     for(int column=row;column<=n-4;column++){
       printf("  ");     
     }
     for(int column=1;column<=row+4;column++){
         printf(" *");
     }
         for(int column=1;column<=row+4;column++){
         printf(" *");
     }
   printf("\n");
  }
  
  //for third part
  
    for(int row=1;row<=n/2;row++){
     for(int column=row;column<=n-4;column++){
       printf("  ");     
     }
     for(int column=1;column<=row+4;column++){
         printf(" *");
     }
         for(int column=1;column<=row+4;column++){
         printf(" *");
     }
   printf("\n");
  }
  
  //fourth part
  for(int row=1;row<=n;row++){
     for(int column=1;column<=n/2+3;column++){
       printf("  ");     
     }
     for(int column=1;column<=n/3;column++){
         printf(" *");
     }
         for(int column=1;column<=n/3;column++){
         printf(" *");
     }
   printf("\n");
  }
  //fifth part
  
  for(int row=1;row<=1;row++){
     for(int column=1;column<=n*2;column++){
       printf(" *");     
     }}
  
  
  return 0;
  
}
