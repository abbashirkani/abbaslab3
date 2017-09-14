# abbaslab3
// question 2

#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter any three numbers \n";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    { 
      cout<<"the maximum of three numbers is-"<<a<<endl;
    }
    else if(b>c&&b>a)
    {
      cout<<"the maximum of three numbers is-"<<b<<endl;
    }
    else
    {
      cout<<"the maximum of three numbers is-"<<c<<endl;
    }
    return 0;
}
