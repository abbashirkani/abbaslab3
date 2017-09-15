# abbaslab3
// q 21


#include <iostream>
using namespace std;

int main() {
    int unit=0,am=0,surch=0,to=0;
    cout<<"enter the units of electricity consumed"<<endl;
    cin>>unit;
    if(unit<=50)
        am=unit*0.50;
    else if(unit<=150)
        am=25+((unit-50)*0.75);
    else if(unit<=250)
        am=100+((unit-150)*1.2);
    else
        am=220+((unit-2500)*1.5);
    surch=amt*0.2;
    to=am+surch;
    cout<<"electricity bill is "<<to<<endl;
    return 0;
}
