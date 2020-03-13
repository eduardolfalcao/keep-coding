# Stacks

Stacks are dynamic data structures that follow the **Last In First Out (LIFO)** principle. The last item to be inserted into a stack is the first one to be deleted from it.

## Example

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/9a74c87.png)

## Include stack library

```cpp
#include <stack>
```

## Operations

**push():** Insert element at the top of a stack.
**pop():** Removes an element from the top of a stack.
**top():** Access the top element of a stack.
**empty():** Check whether a stack is empty.
**size():** Determines the current size of a stack.

#### C++11
**swap():** Exchanges the contents of stack with contents of another stack.
**emplace():** Constructs and inserts new element at the top of stack.

## Sample code

```cpp
#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> s; // declaring a stack
	
	// inserting elements into the stack.
	s.push(1);
	s.push(2);
	s.push(3);
	
	cout << "The top element of the stack is " << s.top() << ".\n";
	cout << "The stack size is " << s.size() << ".\n";
	cout << "The stack is empty? " << (s.empty() ? "True" : "False") << ".\n";
	
	s.pop(); // removing element from the top of the stack.
	
	cout << "The top element of the stack is " << s.top() << ".\n";
	cout << "The stack size is " << s.size() << ".\n";
	
	s.pop();
	
	cout << "The top element of the stack is " << s.top() << ".\n";
	cout << "The stack size is " << s.size() << ".\n";
	
	s.pop();
	
	cout << "The stack is empty? " << (s.empty() ? "True" : "False") << ".\n";
	
	stack<int> s2;
	stack<int> s3;

	s2.push(4);
	s2.push(5);
	s2.push(6);
	
	s3.push(7);
	s3.push(8);
	s3.push(9);
	
	// exchanging the elements of one stack with the elements of the other stack.
	s2.swap(s3);
	
	cout << "\nContents of stack s2 after swap operation:\n";
	
	for(int i = (int)s2.size(); i > 0 ; i--)
	{
		cout << s2.top() << " ";
		s2.pop();
	}
	
	cout << "\nContents of stack s3 after swap operation:\n";
	
	for(int i = (int)s3.size(); i > 0; i--)
	{
		cout << s3.top() << " ";
		s3.pop();
	}
	
	cout << "\n\nTesting operator emplace():\n";
	stack<int> s4;
	
	s4.emplace(10);
	s4.emplace(11);
	s4.emplace(12);
	
	for(int i = (int)s4.size(); i > 0; i--)
	{
		cout << s4.top() << " ";
		s4.pop();
	}
	
	return 0;
}
```

#### Output

```
The top element of the stack is 3.
The stack size is 3.
The stack is empty? False.
The top element of the stack is 2.
The stack size is 2.
The top element of the stack is 1.
The stack size is 1.
The stack is empty? True.

Contents of stack s2 after swap operation:
9 8 7 
Contents of stack s3 after swap operation:
6 5 4 

Testing operator emplace():
12 11 10 
```