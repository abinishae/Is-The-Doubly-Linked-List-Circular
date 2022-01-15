#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}



 
class Solution{
    public:
    bool isCircular(Node * h)
    {
       Node* g= h;
       h = h->next;
       while(h!=g){
           if(! h) return 0;
           h = h->next;
           
       }
       return 1;
    }};
void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    
    temp->next=head;
    head->prev=temp;
}




int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    
	    
	    int y;
	    cin>>y;
	    
	    if(y==1)
	    {
	        makeCircular(head);
	    }
	    Solution ob;
	    cout<<ob.isCircular(head);
 
	    cout<<endl;
	}
	return 0;
}

  
