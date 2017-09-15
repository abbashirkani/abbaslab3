# abbaslab3
// q 56


#include<iostream>
using namespace std;
int main()
{
 int n,a,x,cp,sum,di,fact;
 cout<<"Enter nth term : ";
 cin>>n;
 cout<<"strong number between 1 to "<<n<<" : ";
 for(a=1;a<=n;a++)
 {
   x=a;
   cp=a;
   sum=0;
   while(x!=0)
   {
     fact=1;
     di=x%10;
     for(int i=1;i<di+1;i++)
  {
      fact=fact*i;
  }
     sum=sum+fact;
     x=x/10;
  }
  if(cp==sum)
    cout<<cp<<"		";;
 }
 return 0;
}
