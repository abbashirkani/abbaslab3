# abbaslab3
// q 35


#include <iostream>
using namespace std;

int main() {
	int n,f,s;
	cout<<"enter a number "<<endl;
	cin>>n;
	
	while(n>0)
	{
		f=n%10;
		n=n/10;
		s=s+f;
	            
	}
	cout<<"Sum of the digits is "<<s<<endl;
 return 0;
}	
