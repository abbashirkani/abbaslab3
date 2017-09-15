# abbaslab3
// q 55


#include<iostream>
using namespace std;
int main()
{
 int sum=0,num,di,fact,cp;
 cout<<"Enter a number : ";
 cin>>num;
 cp=num;
 while(num!=0)
 {
  fact=1;
  di=num%10;
  for(int x=1;x<di+1;x++)
  {
   fact=fact*x;
  }
  sum=sum+fact;
  num=num/10;
 }
 if(cp==sum)
 {
  cout<<"Strong number."<<endl;
 }
 else
 {
  cout<<"Not Strong number.";
 }
 return 0;
}
