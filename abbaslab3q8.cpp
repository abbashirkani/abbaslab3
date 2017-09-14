# abbaslab3
// question


#include<iostream>
using namespace std;
int main()
{
   char c;
   cout<<"enter an alphabet\n";
   cin>>c;
   if((c=='a'||c=='A')||(c=='e'||c=='E')||(c=='i'||c=='I')||(c=='o'||c=='O')||(c      =='u'||c=='U'))
   {
     cout<<c<<" is a vowel"<<endl;
   }
   else
   {
     cout<<c<<" is a consonant"<<endl;
   }
   return 0;
}
