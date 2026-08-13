// function the type of data returning to the function must be specified before the function char,int,float,void(nothing is returned)
// function is only executed if it is called, if we dont call a function it will not be executed and we can call a function as many times as you want 
#include <iostream>
int main(){
    display();
    return 0;
}
void display(){
    cout<<"welcome to function";
}
// ERROR
// Because display() is called earlier in code and written in the later part of the code to avoid such kind of error we do function prototyping
// in which we specify the retuen type of function ,name of function , its parameter at the starting of the code
#include <iostream>
void display();   //function prototyping 
int main(){
    display();    // function calling
    return 0;
}
void display(){
    cout<<"welcome to function";
}


// function parameters
#include <iostream>
using namespace std;
int display(int,int);
int main(){
  int result;
  result = display(20,30);
  cout<<"result is "<<result;
  return 0;
}
int display(int a,int b){
    cout<<a<<endl;
    cout<<b<<endl;
    return a+b ;
}

// default functon parameters
Claude finished the response
#include <iostream>
using namespace std;
void display(int,int,int);
int main(){
    display(20,30);
    return 0;
}
void display(int x,int y,int z =10){
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;
    cout<<"z "<<z<<endl;
       }
// error The error is because the default value z=10 is set in the definition, not in the declaration (prototype).
// When main() calls display(20,30), the compiler only looks at the prototype (void display(int,int,int);) to check the call — and at that point, it doesn't know there's
// a default value for the third argument. So it complains something like:

// error: too few arguments to function 'void display(int, int, int)'
#include <iostream>
using namespace std;
void display(int,int,int=10);
int main(){
    display(20,30);
    return 0;
}
void display(int x,int y,int z){
    cout<<"x "<<x<<endl;
    cout<<"y "<<y<<endl;
    cout<<"z "<<z<<endl;
}




