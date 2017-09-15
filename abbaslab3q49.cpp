# abbaslab3
// q 49


#include<iostream>
using namespace std;
int main()
{
  int i,n,x,pr,s=0;
  cout<<"Enter nth term : ";
  cin>>n;
  for(int a=1;a<=n;a++)
  { 
    pr=1;
    x=a;
    if(x==1)
    {
      pr=0;
    }
    else
    for(int b=2;b<=x/2;b++)
    {
      if(x%b==0)
      {
        pr=0;
        break;
      }
    }
    if(pr==1)
     s=s+x;
  }
  cout<<"Sum of prime numbers between 1 and "<<n<<" are "<<s<<endl;
  return 0;
} 
