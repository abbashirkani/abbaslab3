# abbaslab3
// question 10


#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"enter an alphabet\n";
   cin>>c;
   if(c>='a'&&c<='z')
   {
     cout<<c<<" is in lowecase"<<endl;
   }
   else
   { 
     cout<<c<<" is in uppercase"<<endl;
   }
   return 0;
}
