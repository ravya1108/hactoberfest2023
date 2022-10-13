#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
   char filename[20], str[500];
   fstream fp;
   cout<<"Enter File's Name: ";
   gets(filename);
   fp.open(filename, fstream::app);
   if(!fp)
   {
      cout<<"\nFile doesn't exist or Access denied!";
      return 0;
   }
   cout<<"Enter the Data: ";
   gets(str);
   while(strlen(str)>0)
   {
      fp<<"\n";
      fp<<str;
      gets(str);
   }
   fp.close();
   cout<<endl;
   return 0;
}
