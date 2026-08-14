#include <iostream>
using namespace std;

inline void display(int a){
    cout<<a<<endl;
}
int main(){
    display(10);
    return 0;
}
// for short function we use 
// inline keyword jo ki func ke andar ke statement ko func calling ki jagah rakh deta hai jis se execution time reduce ho jata ahai 


// global variable scope
#include <iostream>
using namespace std;
void display();
int x =100;
int main(){
    display();
    cout<<a<<" "<<b<<endl; //local variable so cant be accessed
}
    return 0;
}
void display(){
    int a =10,int b=20;
    cout<<a<<" "<<b<<endl;
    cout<<x;  //global variable so it can be accessed
}{
    cout<<a; //local variable so cant be accessed
}




#include <iostream>
using namespace std;
void display();
int x;
int main(){
    display();
    return 0;
}
void display(){
    cout<<x;
}
// global variable will by default contain 0 for int ,float and'0'for char datatype variable.

#include <iostream>
using namespace std;
void display();

int main(){
    display();
    return 0;
}
void display(){
    int x;
    cout<<x;
}

// Since x is a local variable that's never assigned a value, it contains whatever garbage value
// happened to be sitting in that memory location. This is called undefined behavior (UB).
// It might print 0
// It might print some random large number like 32766 or -858993460
// It might print a different value every time you run it
// On rare occasions with certain compilers/optimizations, it could even cause a crash (though unlikely for something this simple)
