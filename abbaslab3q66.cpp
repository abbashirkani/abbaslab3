# abbaslab3
// q 66


#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int dec,bin=0,a,i=1;
    cout<<"Enter the decimal number "<<endl;
    cin>>dec;
    while(dec!=0)
    {
    	a=dec%2;
    	dec=dec/2;
    	bin=bin+a*i;
    	i=i*10;
    }
    cout<<" The binary equivalent is "<<bin;
    
	return 0;
}
