# abbaslab3
// q 38


#include <iostream>
using namespace std;

int main() {
	int n,num,r,rev;
	cout<<"enter a number "<<endl;
	cin>>n;
	num=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(num==rev)
	    cout<<"the number is pallindromic"<<endl;
	else
	    cout<<"the number is not pallindromic"<<endl;
	return 0;
}
