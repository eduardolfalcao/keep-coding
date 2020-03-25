# Operators

Operator precedence Specifies the order of operations in expressions that contain more than one operator. Associativity operator Specifies whether, in an expression that contains multiple operators with the same precedence, an operand is grouped with the one on its left or the one on its right.

# Assignment Operators

* **=** Assigns value to variable <br />
* **+=** Sum the left operand with the right value and assign it to the left operand <br />
* **-=** Subtracts the left operand with the right value and assigns it to the left operand <br />
* ***=** Multiplies the left operand with the right value and assigns it to the left operand <br />
* **/=** Divide the left operand with the right value and assign it to the left operand <br />
* **%=** Extrai o modulo do operando da esquerda com o resultado do valor da direita e atribui ao operando da esquerda <br />


# Arithmetic Operators

* **+** Sum two operands <br />
* **-** Subtracts two operands <br />
* **'*'** Multiply two operands <br />
* **/** Divide two operands <br />

# Relational Operators

* **==** Compare the equality of the left operand with the right operand. Returns true if equal, and false if different <br />
* **!=** Compare the difference between the left and the right operands. Returns true if different, and false if equal <br/>
* **<** Compare the size of the left operand with the size of the right (less than) <br />
* **>** Compare the size of the left operand with the size of the right operand (greater than) <br />
* **>=** Compare the size of the left operand with the size of the right operand (greater than or equal to) <br />
* **<=** Compare the size of the left operand with the size of the right (less than or equal to) <br />


# Operadores Logicos

* **&&** Logical operator that compares the value on the left with the value on the right (E) (Conjunction) <br />
* **||** Logical operator that compares the value on the left with the value on the right (OU) (DISJUNCTION) <br />
* **!** Logical operator that inverts the logical value of the logical operation. If the operation is false it inverts to true <br />


## Sample code

```cpp

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
    if(a>b && b>=c || b<=c){
        cout<< "a is greater than and is greater than or equal to c or b is less than or equal to c" << "\n";
    }
    if(!(a==c)){
        cout<< "a não é igual a c " << "\n"
    }

    return 0;
}