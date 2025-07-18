#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
struct LINKEDLIST{
	Node* head=NULL;
	// Insert at the end
	void insert(int val){
		Node* newNode=new Node{val,NULL};
		if(!head){
			head=newNode;
			return;
		}
		Node* temp=head;
		while(temp->next)
			temp=temp->next;
		temp->next=newNode;
	}
	// Insert at the beginning
	void insertAtBeginning(int val){
		Node* newNode=new Node{val,head};
		head=newNode;
	}
	// Delete first occurrence of a value
	void remove(int val){
		if(!head){
			cout<<"List is empty\n";
			return;
		}
		if(head->data==val) {
			Node* temp=head;
			head=head->next;
			delete temp;
			return;
		}
		Node* curr=head;
		while(curr->next && curr->next->data!=val)
			curr=curr->next;
		if(curr->next){
			Node* temp=curr->next;
			curr->next=temp->next;
			delete temp;
		} 
		else{
			cout<<"Value not found\n";
		}
	}
	// Display the list
	void display(){
		if (!head){
			cout<<"List is empty\n";
			return;
		}
		Node* temp=head;
		while (temp){
			cout<<temp->data <<" ";
			temp=temp->next;
		}
		cout<<"\n";
	}
	// Search for a value
	bool search(int val){
		Node* temp=head;
		while(temp){
			if(temp->data==val)
				return true;
			temp=temp->next;
		}
		return false;
	}
};
#endif
