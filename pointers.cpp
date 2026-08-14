// pointer is avriabel used to store memory addresof particular variable
#include <iostream>
using namespace std;
int main(){
    int age =24;
    bool human =true;
    int *ageptr;  //* is use to create pointer
    bool *humanptr;
    ageptr=&age;  //adrress of varible is syored at ptr
    humanptr=&human;
    cout<<age<<"-->"<<ageptr<<endl;  // if call ptr meory address is prited
    cout<<human<<"-->"<<humanptr<<endl;
    cout<<age<<"-->"<<*ageptr<<endl;   //if we write *name of ptr then we get value stored at that ptr
    cout<<human<<"-->"<<*humanptr<<endl;
    return 0;
}
// output
// 24-->0xfffff3e4636c
// 1-->0xfffff3e4636b
// 24-->24
// 1-->1


