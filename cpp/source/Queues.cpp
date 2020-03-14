#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q1; // declaring a queue.
	
	// inserting elements in the queue.
	q1.push(1);
	q1.push(2);
	q1.push(3);
	
	cout << "The front element of the queue is " << q1.front() << ".\n";
	cout << "The last element of the queue is " << q1.back() << ".\n";
	cout << "The queue size is " << q1.size() << ".\n";
	
	q1.pop();
	
	cout << "The front element of the queue is " << q1.front() << ".\n";
	cout << "The last element of the queue is " << q1.back() << ".\n";
	cout << "The queue size is " << q1.size() << ".\n";
	
	q1.pop();
	
	cout << "The front element of the queue is " << q1.front() << ".\n";
	cout << "The last element of the queue is " << q1.back() << ".\n";
	cout << "The queue size is " << q1.size() << ".\n";
	cout << "The queue is empty? " << (q1.empty() ? "True.\n" : "False.\n"); 
	
	q1.pop();
	
	cout << "The queue is empty? " << (q1.empty() ? "True.\n" : "False.\n"); 
	
	queue<int> q2, q3;
	
	q2.push(4);
	q2.push(5);
	q2.push(6);
	
	q3.push(7);
	q3.push(8);
	q3.push(9);
	
	// Exchanging the elements of one queue with the elements of the other queue.
	q2.swap(q3);
	
	cout << "\nContents of queue q2 after swap operation:\n";
	
	for(int i = (int)q2.size(); i > 0 ; i--)
	{
		cout << q2.front() << " ";
		q2.pop();
	}
	
	cout << "\nContents of queue q3 after swap operation:\n";
	
	for(int i = (int)q3.size(); i > 0 ; i--)
	{
		cout << q3.front() << " ";
		q3.pop();
	}
	
	cout << "\n\nTesting operator emplace():\n";
	queue<int> q4;
	
	q4.emplace(10);
	q4.emplace(11);
	q4.emplace(12);
	
	for(int i = (int)q4.size(); i > 0; i--)
	{
		cout << q4.front() << " ";
		q4.pop();
	}
	
	return 0;
}