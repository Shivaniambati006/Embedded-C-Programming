//3. Insertion :- a) At beginning  b) In Middle   c) at End 
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
		
        void add(int val){         // Normal add funtion to add element 
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
		
		void insertion_at_begin(int val){
			Node* newnode = new Node(val);
			newnode->next = head;
			head = newnode;
		}
		
		void insertion_at_end(int val){      //Same Function as add just writing again
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
		
		void insert_at_position(int val, int pos){
			Node* newnode = new Node(val);
			
			if(pos == 1){
				newnode->next = head;
				head = newnode;
				return;
			}

//Move forward until you reach the node just before the insertion point,but don’t go past the end of the list.			
			Node* curr = head;
			for(int i = 1; i < pos - 1 && curr != 0; i++){      
			        curr = curr->next;                         
			}
			
			if(curr == 0){
				cout << "Position out of range" << endl;
				delete newnode;
				return;
			}
			
			newnode->next = curr->next;
			curr->next = newnode;	
	    }
		
		void print_list(){
			
			Node* curr = head;
			while(curr != 0){
				cout << curr->data <<" -> ";
				curr = curr->next;
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
	
	cout << "Original list: ";
    l.print_list();
    cout << endl;
	
	cout << "Befor the Insertion in the Begin"<< endl;
	l.print_list();
	
	
	cout << "After the Insertion in the Begin"<< endl;
	l.insertion_at_begin(0);
	l.print_list();
	cout <<endl;
	
	cout << "Befor the Insertion at the End"<< endl;
	l.print_list();
	
	
	cout << "After the Insertion at the End"<< endl;
	l.insertion_at_end(0);
	l.print_list();
	cout <<endl;
	
	cout << "Befor the Insertion at a given Position"<< endl;
	l.print_list();
	
	
	cout << "After the Insertion at a given Position"<< endl;
	l.insert_at_position(0 , 4);
	l.print_list();
}
                
