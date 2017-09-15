# abbaslab3
// q 60
#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
   int x,di,i=0,de=0,oct=0;
   cout<<" Enter the binary number : "<<endl;
   cin>>x;
   while(x!=0)
   {
     di=x%10;
     x=x/10;
     de=de+pow(2,i)*di;
     i++;
   }
   i=1;
   while(de!=0)
   {
    	di=de%8;
    	de=de/8;
    	oct=oct+di*i;
    	i=i*10;
   } 
  cout<<" The octal equivalent is :  "<<oct;
	return 0;
}
