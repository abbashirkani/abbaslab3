# abbaslab3
// q 19


#include<iostream>
using namespace std;
int main()
{
   int p,c,b,m,c;
   float per;
   cout<<"Enter marks of five subjects-physics,chemistry,biology,mathematics,computer\n";
   cin>>p>>c>>b>>m>>c;
   per=((p+c+b+m+c)*100)/500;
   if(per>=90)
     cout<<"GRADE A"<<endl;
   else if(per>=80)
     cout<<"GRADE B"<<endl;
   else if(per>=70)
     cout<<"GRADE C"<<endl;
   else if(per>=60)
     cout<<"GRADE D"<<endl;
   else if(per>=40)
     cout<<"GRADE E"<<endl;
   else
     cout<<"GRADE F"<<endl;
   return 0;
} 
