# abbaslab3
// q 44


#include<iostream>
using namespace std;
int main()
{
 int a,n,f;
 f=1;
 cout<<"Enter a number : "<<endl;
 cin>>n;
 for(a=1;a<=n;a++)
 {
   f=f*a;
 }
 cout<<"Factorial of "<<n<<"="<<f<<endl;
 return 0;
}
