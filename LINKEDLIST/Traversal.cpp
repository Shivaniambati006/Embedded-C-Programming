// There are 7 Basic operations we can do it on linkedlist 
// 1. Traversal
#include<iostream>
using namespace std;

class Node{
public:	
	int data;
	Node* next;
	
	Node(int val){
		this->data = val;
		next = 0;
	}
};

class Linkedlist{
	public:
		Node* head;
	
		Linkedlist(){
			head = 0;
		}
		
		void add(int val){
			Node* newnode = new Node(val);
			
			if(head == 0){
				head = newnode;
				return;
			}
			Node* temp = head;
			while(temp->next != 0){
				temp = temp->next;
			}
			temp->next = newnode;
		}
		
		void Traversal(){
			Node* current = head;
			while(current != 0){
				cout << current->data <<" -> ";
				current = current->next;
			}
			cout << "Null" << endl;
		}
};

int main(){
	
	Linkedlist l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.add(4);
	l.add(5);
	l.add(6);
	
	cout<< "The list of elemnets in the LinkedList"<< endl;
	l.Traversal();
	
}
