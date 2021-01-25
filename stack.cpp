#include<iostream>
<<<<<<< HEAD
//Line is being deleted successfully
=======

>>>>>>> 3b75625 (bugfix comment)
#include<cstdlib>
using namespace std;
#define SIZE 10
class stack
{
	int *arr;
	int top;
	int capacity;
	public:
		stack(int size=SIZE);
		void push(int);
		int pop();
		int peek();
		int size();
		bool isEmpty();
		bool isFull();
		
};
stack::stack(int size)
{
	arr=new int[size];
	capacity=size;
	top=-1;
}
void stack::push(int x)
{
	if(isFull())
	{
		cout<<"overflow\nProgram Terminate";
		exit(EXIT_FAILURE);
		
	}
	cout<<"Inserting"<<x<<endl;
	arr[++top]=x;
}
int stack::pop()
{
	if(isEmpty())
	{
		cout<<"Underflow\nprogram Terminate";
		exit(EXIT_FAILURE);
	}
	cout<<"Removing"<<peek() <<endl;
	return arr[top--];
}
int stack::peek()
{
	if(!isEmpty())
		return arr[top];
	else
		exit(EXIT_FAILURE);
	
}
	
int stack::size()
{
	return top+1;
}
bool stack::isEmpty()
{
	return top==-1;
}
bool stack::isFull()
{
	return top==capacity-1;
}
int main()
{
	stack pt(3);
	pt.push(1);
	pt.push(2);
	pt.push(3);
	
	pt.pop();
	pt.pop();
	pt.push(4);
	cout<<"Top element is:"<<pt.peek()<<endl;
	cout<<"Stack size is:"<<pt.size()<<endl;
	pt.pop();
	
	if(pt.isEmpty())
		cout<<"Stack is empty";
	else
		cout<<"Stack is not empty";
	return 0;
}
<<<<<<< HEAD
//Main comment
=======



//Bugfix comment
>>>>>>> a4e8939 (bugfix comment)
