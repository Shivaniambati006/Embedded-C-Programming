//2. Search
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
	
	void print_list(){
		Node* curr = head;
		while(curr != 0){
			cout << curr->data <<"->";
			curr = curr->next;
		}
		cout <<"Null" <<endl;
	}
	
	bool Search(int key){
		Node* temp = head;
		while(temp != 0){
			if(temp->data == key){
				return true;
			}
			temp = temp->next;
		}
		return false;
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
	
	l.print_list();
	
	bool result = l.Search(4);
	cout << (result ? "True" : "False");
	
}
