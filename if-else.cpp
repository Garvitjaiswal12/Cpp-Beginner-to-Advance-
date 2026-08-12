// ==,>=,<=,!=,! these are comparision operators used in if else conditions


1)
  #include <iostream>

using namespace std;
int main() {
    int age;
    cout<<"enter your age ";
    cin>>age;
    if(age>=17){
        cout<<"applicale to vote";
    }
    else{
        cout<<"not eligible";
    }
       
    return 0;
}





2)
   #include <iostream>

using namespace std;
int main() {
    int age;
    cout<<"enter your age ";
    cin>>age;
    if(age<=20){
        cout<<"young";
    }
    else if (age<=40){
        cout<<"middle age ";
    }
    else{
        cout<<"old guy ";
    }
    return 0;
}



