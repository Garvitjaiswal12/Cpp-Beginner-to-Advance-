#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter value of x to check its range";
    cin>>x;
    switch(x){
        case 1 ... 100:{
            cout<<"value lies bw 1 to100";
            break;
        }
        case 101 ... 1000:{
            cout<<"value lies bw 100 to 1000";
            break;
        }
        default:{
            cout<<"value grater than 1000";
        }
    }
return 0;
}
