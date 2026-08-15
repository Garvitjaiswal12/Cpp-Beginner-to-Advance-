#include <iostream>
using namespace std;
int main(){
    // int numbers[5] ={29,31,12,55,25};
    const float pi =3.14;
    // pi=5;
    cout<<pi<<endl;
}


#include <iostream>
using namespace std;
void display(const int num[],int limit);
int main(){
    int number[]={22,11,44,55,66};
    display(number,5);
    number[0]=13;
    return 0;
}
void display(const int num[],int limit){
    for(int counter=0;counter<limit;counter++){
        cout<<num[counter]<<endl;
    }
}

#include <iostream>
using namespace std;
void display(int *start,int *end);
int main(){
    int number[]={11,12,1,3,15,16};
    display(number,number+6);
    return 0;
}
void display(int *start,int *end){
    const int *ptr;
    for (ptr=start;ptr!=end;ptr++){
        cout<<*ptr<<endl;
    }

}















