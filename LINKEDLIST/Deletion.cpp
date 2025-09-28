//4. Deletion :- a) At beginning  b) In Middle   c) at End 
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
	    		cout << curr->data <<" -> ";
	    		curr = curr->next;
			}
			cout << "Null" << endl;
		}
		
		void Delete_at_Begin(){
			
			if(head == 0){
            cout << "List is empty, nothing to delete" << endl;
            return;
		    }
		
			Node* temp = head;
			head = head->next;
			delete temp;
	    }
	    
	    void Delete_at_End(){
			
			if(head == 0){
            cout << "List is empty, nothing to delete" << endl;
            return;
		    }
		
			if(head->next == 0){
				delete head;
				head = 0;
				return;
			}
			
			Node* curr = head;
			while(curr->next->next != 0){
				curr = curr->next;
			}
			delete curr->next;
			curr->next = 0;
	    }
	    
	    void Delete_at_Position(int pos){
			
			if(head == 0){
            cout << "List is empty, nothing to delete" << endl;
            return;
		    }
		
			if(pos == 1){
				Node* temp = head;
				head = head->next;
				delete temp;
				return;
			}
			
			Node* curr = head;
			for(int i = 1; i < pos - 1 && curr != 0; i++){
				curr = curr->next;
			}
			
			if(curr == 0 || curr->next == 0){
				cout << "Position out of range" << endl;
				return;
			}
			Node* temp = curr->next;
			curr->next = temp->next;
			delete temp;
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
	l.add(7);
	l.add(8);
	l.add(9);
	
	cout << "Original list: ";
    l.print_list();
    cout << endl;
	
	cout << "Befor the Deletion in the Begin"<< endl;
	l.print_list();
	
	cout << "After the Deletion in the Begin"<< endl;
	l.Delete_at_Begin();
	l.print_list();
	cout << endl;
	
	cout << "Befor the Deletion at the End"<< endl;
	l.print_list();
	
	cout << "After the Deletion at the End"<< endl;
	l.Delete_at_End();
	l.print_list();
	cout <<endl;
	
	cout << "Befor the Deletion at a given Position"<< endl;
	l.print_list();
	
	
	cout << "After the Deletion at a given Position"<< endl;
	l.Delete_at_Position(3);
	l.print_list();
	
}
