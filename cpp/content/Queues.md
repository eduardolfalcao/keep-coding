# Queues

Queues are data structures that follow the **First In First Out (FIFO)** principle. The first element that is added to the queue is the first one to be removed.

## Example

![alt text](https://he-s3.s3.amazonaws.com/media/uploads/cf1e1c1.png)

## Include stack library

```cpp
#include <queue>
```

## Operations

**push():** Insert element at the last of a queue.  
**pop():** Removes an element from the front of a queue.  
**front():** Access the front element of a queue.
**back():** Access the last element of a queue.  
**empty():** Check whether a queue is empty.  
**size():** Determines the current size of a queue.

#### C++11

**swap():** Exchanges the contents of queue with contents of another queue.  
**emplace():** Constructs and inserts new element at the last of queue.

## Sample code

```cpp
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
```

#### Output

```
The front element of the queue is 1.
The last element of the queue is 3.
The queue size is 3.
The front element of the queue is 2.
The last element of the queue is 3.
The queue size is 2.
The front element of the queue is 3.
The last element of the queue is 3.
The queue size is 1.
The queue is empty? False.
The queue is empty? True.

Contents of queue q2 after swap operation:
7 8 9 
Contents of queue q3 after swap operation:
4 5 6 

Testing operator emplace():
10 11 12 
```