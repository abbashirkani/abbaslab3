# abbaslab3
// q 18


include<iostream>
using namespace std;
int main()
{
  float c,s,p,l;
  cout<<"enter the cost price and selling price of a commodity\n";
  cin>>c>>s;
  if(c>s)
  { 
    l=c-s;
    cout<<"loss is "<<l<<endl;
  }
  else if(c<s)
  {
    p=s-c;
    cout<<"profit is "<<p<<endl;
  }
  return 0;
}
