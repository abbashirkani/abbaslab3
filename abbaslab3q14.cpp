# abbaslab3
// question 14


#include<iostream>
using namespace std;
int main()
{
  float a,b,c,s;
  cout<<"enter three angles of a triangle\n";
  cin>>a>>b>>c;
  s=a+b+c;
  if(s==180)
  { 
    cout<<"the given triangle is valid"<<endl;
  }
  else
  {
    cout<<"not a triangle"<<endl;
  }
  return 0;
}
