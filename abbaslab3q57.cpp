# abbaslab3
// q 57


#include <iostream>
using namespace std;
int main() 
{
   int x=0,y=1,c,n,i;
   cout<<"Enter a positive number : ";
   cin>>n;
   cout<<"the fibonacii series is \n";  
   cout<<y<<"   ";
   for(i=1;i<=n;i++)
   {          
    c=x+y;
      cout<<c<<"   ";
     x=y;
      y=c;	
   }
            
 return 0;
}
