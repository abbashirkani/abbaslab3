# abbaslab3
// q 47


#include<iostream>
using namespace std;
int main()
{
 int a,b,pr=1;
 cout<<"Enter a number : ";
 cin>>a;
 if(a==1)
 {
  pr=0;

 }
 else
 {
  for(b=2;b<=a/2;b++)
  {
     if(a%b==0)
     {
       pr=0;
       break;

     }
   }
  }


   if(pr==1)
    cout<<"Number is  prime";
   else
    cout<<"Number is not prime";

 return 0;
}
