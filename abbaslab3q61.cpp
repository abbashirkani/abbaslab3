# abbaslab3
// q 61


#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
   int bin,dig,de=0,i=0;
   cout<<" Enter the binary number :  ";
   cin>>bin;
   while(bin!=0)
   {
     dig=bin%10;
     bin=bin/10;
     de=de+pow(2,i)*dig;
     i++;
   }
   cout<<" \n The decimal equivalent is :  "<<de;
   return 0;
}
