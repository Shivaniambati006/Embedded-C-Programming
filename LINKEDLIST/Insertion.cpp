//3. Insertion :- a) At begeaning  b) In Middle   c) at End 
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
                
