#include <iostream>

using namespace std;

int main() {

    int a = 3; //variavel a recebe o valor 3
    int b = 5; //variavel b recebe o valor 5

    cout<< "The value that is in a is " << a << "\n";
    cout<< "The value that is in b is " << b << "\n";

    a += 5; //the variable "a" adds up to 5 and puts in a
    cout<< "New value of a is " << a << "\n";
    b -= 2; // the variable "b" subtracts 5 and puts in b
    cout<< "New value of b is " << b << "\n";
    a *= 2; //the variable "a" multiplies by 2 and puts it in a
    cout<< "New value of a is " << a << "\n";
    b /= 2; // the variable "a" divide by 2 and put it in "b"
    cout<< "New value of b is " << b << "\n";

    //adding elements
    cout<< "the sum of a and b is " << a+b << "\n";
    //subtracting elements
    cout<< "the subtraction of a and b is " << a-b << "\n";
    //dividing elements
    cout<< "the division of a and b is " << a/b << "\n";
    //multiply elements
    cout<< "the multplication of a and b is " << a*b << "\n";

    int c = 5;
    //Using relational and logical operators
    if(a==b && b==c){
        cout<< "the values ​​are all the same" << "\n";
    }
    if(a!=b || b!=c){
        cout<< "a and b are different, or b and c are different" << "\n";
    }
    if(a>b && (b>=c || b<=c)){
        cout<< "a is greater than and is greater than or equal to c or b is less than or equal to c" << "\n";
    }
    if(!(a==c)){
        cout<< "a não é igual a c " << "\n";
    }

    return 0;
}