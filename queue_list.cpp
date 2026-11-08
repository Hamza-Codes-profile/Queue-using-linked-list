#include <iostream>
using namespace std;

class Node{
	private:
		int obj;
		Node *next;
	public:
		Node():obj(0),next(nullptr){
		}
		void set(int val){
			obj = val;
		}
		void setNext(Node* _next){
			next = _next;
		}
		Node* getNext(){
			return next;
		}
		int get(){
			return obj;
		}
};

class queue{
	private:
		Node *front;
		Node *rear;
		int size;
	public:
		queue():front(nullptr),rear(nullptr),size(0){
		}
		void enqueue(int val){
			Node *newNode = new Node();
			newNode->set(val);
			if(size==0){
				front = newNode;
				rear = newNode;
			}
			else{
				rear->setNext(newNode);
				rear = newNode;
			}
			size++;
		}
		int dequeue(){
			if(size==1){
				int x = front->get();
				rear = nullptr;
				delete front;
				front = nullptr;
				size--;
				return x;
			}
			else if(size==0){
				return -1;
			}
			else{
				Node *temp = front;
				int x = temp->get();
				front = temp->getNext();
				delete temp;
				size--;
				return x;
			}
		}
		bool isEmpty(){
			return size==0;
		}
		int length(){
			return size;
		}
		void display(){
			Node *current = front;
			while(current!=nullptr){
				cout<<(current->get())<<"  ";
				current = current->getNext();
			}
			cout<<"\n";
		}
		~queue(){
			Node *temp = front;
			while(front!=nullptr){
				front = front->getNext();
				delete temp;
				temp = front;
			}
			rear = nullptr;
		}
};

int main(){
	queue MyQueue;
	cout<<"Enqueue: ";
	MyQueue.enqueue(10);
	MyQueue.display();
	cout<<"Enqueue: ";
	MyQueue.enqueue(20);
	MyQueue.display();
	cout<<"Enqueue: ";
	MyQueue.enqueue(30);
	MyQueue.display();
	cout<<"Dequeue: ";
	MyQueue.dequeue();
	MyQueue.display();
	cout<<"Enqueue: ";
	MyQueue.enqueue(40);
	MyQueue.display();
	cout<<"Dequeue: ";
	MyQueue.dequeue();
	MyQueue.display();
	cout<<"Dequeue: ";
	MyQueue.dequeue();
	MyQueue.display();
	cout<<"Dequeue: ";
	MyQueue.dequeue();
	return 0;
}

