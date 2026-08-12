// % modulous operator is for finding remainder only for integers
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    cout << a % b;
    return 0;
}
// if we have float datatype then use fmod() of cmath library
#include <iostream>
 # include <cmath>
using namespace std;
int main() {
    int a=10;
    float b=3;
    cout<<fmod(a,b);
    return 0;
}
// short hand operator : +=,-=,*=,/=,%=
 #include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter a and b ";
    cin>> a>> b;
    a+=b;
    cout<<a;
    return 0;
}

