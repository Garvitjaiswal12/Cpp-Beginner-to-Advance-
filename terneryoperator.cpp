// condition ? stament1 : statement2
// if condition is satisfied statemnt 1 is executed else statement 2 is executed

 #include <iostream>
using namespace std;
int main(){
   int mark;
   cout<<"enter your marks"<<endl;
   cin>>mark;
   mark>=35 ? cout<< "pass" :cout<<"fail";
    return 0;
}
