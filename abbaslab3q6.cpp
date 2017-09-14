# abbaslab3
// question 6


#include<iostream>
using namespace std;
int main()
{
  int y;
  cout<<"enter a year\n";
  cin>>y;
  if(y%4==0&&y%100!=0)
  { 
    cout<<y<<" is a leap year"<<endl;
  }
  else if(y%400==0)
  {
    cout<<y<<" is a leap year"<<endl;
  }
  else if(y%100==0)
  {
    cout<<y<<" is not a leap year"<<endl;
  }
  else
  {
    cout<<y<<" is not aleap year"<<endl;
  }
  return 0;
} 
 
