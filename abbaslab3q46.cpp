# abbaslab3
// q 46


#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int a,b,lm,c,i;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    for(i=1;i<=a && i<=b;i++)
    {
  	if((a%i==0) && (b%i==0))
        c=i;
    }
    lm=(a*b)/c;
    cout<<"lcm of two numbers is "<<lm<<endl;
    return 0;        
}           
