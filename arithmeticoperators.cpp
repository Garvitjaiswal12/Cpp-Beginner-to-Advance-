// this is use for single line comment
/* this 
is used for multiline 
comment
*/
 #include <iostream>
using namespace std;
int main() {
    int a,int b; // this will give an error as in c++ we cant use declaration twice
    cout<<"enter a and b by giving a space ";
    cin >> a>> b;
    cout<<a<<"+"<<b<<"="<<a+b;
    return 0;
}

 #include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter a and b by giving a space ";
    cin >> a>> b;
    cout<<a<<"+"<<b<<"="<<a+b;
    return 0;
}
// simlarly we can perform other arithmetic operations like +,-,*,/
