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


// passing array to a function:
#include <iostream>
using namespace std;
void show(int[],int);
int main(){
    int numbers[]={10,20,30,40,50};
    int length=5;
    show(numbers,length);
    return 0;
}
void show(int array[],int length){
    for(int counter=0;counter<length;counter++){
        cout<<array[counter]<<endl;
    }
}
// pass by refrence -- we are passing a memory address to a function
#include <iostream>
using namespace std;
void display(int *ptr);
int main(){
    int age=24;
    display(&age);
    cout<<age<<endl;
    return 0;
}

void display(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    *ptr=100;
}


// ARRay,pointer relationship
#include <iostream>
using namespace std;
void display(int *ptr);
int main(){
    int numbers[5] ={29,31,12,55,25};
    cout<<numbers[2]<<endl;
    cout<<numbers<<endl;
    cout<<*numbers<<endl;
    cout<<*(numbers+2)<<endl;
    return 0;
}


#include <iostream>
using namespace std;
void display(int *ptr);
int main(){
    int numbers[5] ={29,31,12,55,25};
    cout<<numbers[2]<<endl;
    cout<<numbers<<endl;
    cout<<*numbers<<endl;
    cout<<*(numbers+2)<<endl;
    return 0;
}

// 12
// 0xffffe49d0b68
// 29
// 12

