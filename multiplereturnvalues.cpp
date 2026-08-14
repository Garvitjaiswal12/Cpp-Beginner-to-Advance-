#include <iostream>
using namespace std;
bool check(int);
int age;

int main(){
    cout<<"enter your age";
cin>>age;
    if(check(age))
        cout<<"kid";
    else
       cout<<"young";
    
return 0;
}
bool check(int age){
    if(age<=18)
       return true;
    else
       return false;
}
