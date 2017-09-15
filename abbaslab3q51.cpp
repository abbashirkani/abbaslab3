# abbaslab3
// q 51


#include<iostream>
using namespace std;
int main()
{
 int a,n,dig,arm;
 arm=0;
 cout<<"Enter a number : ";
 cin>>a;
 n=a;
 while(a!=0)
 {
  dig=a%10;
  arm=arm+dig*dig*dig;
  a=a/10;
 }
 if(n==arm)
  cout<<"The number is Armstrong.";
 else
  cout<<"The number is not Armstrong.";
 return 0;
}
