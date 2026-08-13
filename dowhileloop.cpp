// do while loop the messsage writen inside do runs atleast once

#include <iostream>
using namespace std;
int main(){
   char input;
  do{
    cout<<"welcome "<<endl;
    cout<<"garvits code"<<endl;
    cout<<"enter x to exit or any other key to see thismessage again";
    cin>>input;
  }
  while(input!='x');
    return 0;
}

/*
output
welcome 
garvits code
enter x to exit or any other key to see thismessage again

k
welcome 
garvits code
enter x to exit or any other key to see thismessage again
x
=== Code Execution Successful ===
*/
