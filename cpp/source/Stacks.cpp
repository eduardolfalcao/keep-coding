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