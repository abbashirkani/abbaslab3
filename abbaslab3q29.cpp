# abbaslab3
// q 29


#include <iostream>
using namespace std;

int main() {
	int n,sum=0,i;
	cout<<"enter n natural number\n";
	cin>>n;
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<"the sum of all odd numbers is ="<<sum<<endl;
	return 0;
}
