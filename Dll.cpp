#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node * next;
		Node(int data)
		{
			this->data=data;
			this->next=this->prev=NULL;
			
		}
};

class LinkedList{
	public:
		Node * head;
		LinkedList()
		{
			head=NULL;
			
		}
		void insertAtStart(int data)
		{
			Node * newNode= new Node(data);
			if(head==NULL)
			{
				head= newNode;
			}
			else
			{
				head->prev=newNode;
				newNode->next=head;
				head=newNode;
			}
		}
		void insertAtEnd(int data)
		{
			Node * newNode=new Node(data);
			if(head==NULL)
			{
				head=newNode;
			}
			else{
				Node * ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				newNode->prev=ptr;
				ptr->next=newNode;
			}
			
		}
		void insert(int data,int pos)
		{
			Node * newNode=new Node(data);
			if(head==NULL||pos<=0)
			{
				newNode->next=head;
				if(head!=NULL)
				head->prev=newNode;
				head=newNode;
				return;
			}
			Node * ptr=head;
		//	Node *qtr=head;
			int count=0;
			while(ptr->next!=NULL && count<pos-1)
			{
				count++;
				//qtr=ptr;
				ptr=ptr->next;
			}
			newNode->prev=ptr;
			//if(ptr!=NULL)
			
				//ptr->prev=newNode;
				//qtr->next=newNode;
			
			ptr->next=newNode;
		}
		bool serach(int data)
		{
			Node * ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->data==data)
				{
					return true;
				}
				ptr=ptr->next;
			}
			return false;
		}
		void traverse()
		{
			Node * ptr=head;
			while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
			cout<<endl;
		}
};
int main()
{
	LinkedList ll;
	ll.insertAtStart(1);
	ll.insertAtStart(2);
	ll.insertAtStart(3);
	ll.insert(5,2);
	ll.traverse();
	cout<<ll.serach(5)<<" "<<ll.serach(1)<<endl;
	
}
