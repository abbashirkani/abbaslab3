# abbaslab3
// question 7


#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"enter a character\n";
   cin>>c;
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
   {
     cout<<c<<" is an alaphabet"<<endl;
   }
   else
   {
     cout<<c<<" is not an alphabet"<<endl;
   }
   return 0;
