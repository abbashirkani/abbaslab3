# abbaslab3
// q 54


#include<iostream>
using namespace std;
int main()
{ 
  int a,b,n,c,pr;
  cout<<"Enter nth term : ";
  cin>>n;
  cout<<"perfect number between 1 and "<<n<<" = ";
  for(a=1;a<=n;a++)
   { 
     c=a;
     pr=0;
     for(b=1;b<=c/2;b++)
     {
       if(c%b==0)
       pr=pr+b;
     }
     if(c==pr)
      cout<<c<<"	";
     
   }     
  return 0;
} 
