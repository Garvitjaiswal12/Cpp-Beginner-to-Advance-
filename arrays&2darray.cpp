// arrays : collection of similar type of elements to store elements at contionous memory location
#include <iostream>
using namespace std;
int main(){
    int marks[6] = {45,55,65,75,85,95};
    cout<<marks[1];
return 0;
}

// we can directly write without specifying the length of array 
#include <iostream>
using namespace std;
int main(){
    int marks[] {45,55,65,75,85,95};
    cout<<marks[4];
return 0;
}
// we can also indvidually asssign values 
#include <iostream>
using namespace std;
int main(){
    int marks[3];
    marks[0]=55;
    marks[1]=45;
    marks[2]=65;
    cout<<marks; //does not print all the elements of the array. marks decays to a pointer to the first element, so you'll typically see a memory address.
return 0;
}
// output
// 0x7fff73f11f64

#include <iostream>
using namespace std;
int main(){
    int marks[3];
    marks[0]=55;
    marks[1]=45;
    marks[2]=65;
    int i =0;
    while(i<3){
        cout<<marks[i]<<" ";
        i++;
    }
return 0;
}


/* array[row] [columns] ={
                     {    },
                     {    }
} 
*/
#include <iostream>
using namespace std;
int main(){
    int marks[2][6]= {
                      {35,45,85,95,75,25},
                      {78,98,62,41,36,64}
    };
    cout<<marks[0][2];
return 0;
}




