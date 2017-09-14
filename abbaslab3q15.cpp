  # abbaslab3
  
 //question 15
 
 
 
 #include<iostream>
using namespace std;
int main()
{
   float a,b,c,s;
   cout<<"enter three sides";
   cin>>a>>b>>c;
   if((a+b>c)&&(b+c>a)&&(a+c>b))
   {
    cout<<"the triangle is valid for sides "<<"\n"<<a<<"\n"<<b<<"\n"<<c<<endl;
   }
   else
   {
    cout<<"the triangle is not valid"<<endl;
   }
   return 0;
}
