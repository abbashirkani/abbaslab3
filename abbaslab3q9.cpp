# abbaslab3
// question 9


#include<iostream>
using namespace std;
int main()
{
  char c;
  cout<<"enter a character\n";
  cin>>c;

  if(c>='0'&&c<='9')
  {
     cout<<c<<" is a digit";
  }
  else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
  {
     cout<<c<<" is an alphabet";
  }
  else
  {
     cout<<c<<" is a special character";
  }
  return 0;
}
