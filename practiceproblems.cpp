// Q1 find the largest no. in the array .
#include <iostream>
using namespace std;
void largestno(int num[],int length);
int main(){
    int number[]={10,25,7,42,18};
    int len=5;
    
    largestno(number,len);
    return 0;
} 
void largestno(int array[],int length){
    int largest=0;
    
    for(int counter=0;counter<length;counter++){
        if (array[counter]>largest){
            largest =array[counter];
        }
    }  
    cout<<largest<<endl;
}
// Q2  
