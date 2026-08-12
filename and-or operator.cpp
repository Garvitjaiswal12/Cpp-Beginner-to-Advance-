// && = AND operator
// || = OR operator

#include <iostream>
using namespace std;
int main(){
    int date;
    cout<<"enter date ";
    cin>>date;
    if (date>=1 && date <=31){
        cout<<"date is valid"<<endl;
        if (date==6 || date ==8){
            cout<<"today is special day";
        }
    return 0;
}
}




#include <iostream>
using namespace std;
int main(){
   bool human =true;
   cout<<"press 1 if you are human"<<endl;
   cin>>human;
   if (!human){
    cout<<"you are not human ";
   }
   else{
    cout<<"you are  human ";
   }
    return 0;
}
