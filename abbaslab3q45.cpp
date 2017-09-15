# abbaslab3
// q 45


#include<iostream>
using namespace std;
int main()
{
     int a,b,i,h;
     cout<<"Enter two numbers : ";
     cin>>a>>b;
     for(i=a;i>0;i--)
     {
       if(a%i==0 && b%i==0)
       {  
          h=i;
          cout<<"hcf of two numbers is "<<h;
          break;
       }
      }
      return 0; 
}          
