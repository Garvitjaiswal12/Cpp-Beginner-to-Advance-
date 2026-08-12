// ++ a or a++ increment operator  increase the value by 1 and -- b or b--is decrement operator becreses the value by 1
 #include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter a and b by giving a space ";
    cin >> a>> b;
    a++;
    b--;
    cout<<a<<endl<<b;
    return 0;
}

/*note: if we apply ++ or -- operator after variable first variable will be printed 
and then incrementedor decremrnted value will be printed */
 #include <iostream>
using namespace std;
int main() {
    int a=10;
    cout<<a--<<endl;
    cout<<a<<endl;
    return 0;
}

 #include <iostream>
using namespace std;
int main() {
    int a=10;
    cout<<a<<endl;
    cout<<--a<<endl;
    return 0;
}
