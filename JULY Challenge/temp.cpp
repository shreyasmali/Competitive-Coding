#include<bits/stdc++.h>
using namespace std;
int n;

struct ListNode 
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* myfun(ListNode* head)
{
	if(head->next->next==NULL)
	{
		if(n%2==0)
			return head;
		else
		{
			ListNode* temp = head->next;
			head->next = NULL;
			return temp;
		}
	}
	ListNode* temp = head->next;
	head->next = head->next->next;
	return myfun(temp);

}

int main()
{
	ListNode *head = new ListNode(); // head for odd chain
	
	ListNode *temp = head;		
	
	cin>>n; // Input n for number of nodes in the linked list
	int x;

	// Taking input for n values 
	for(int i=0; i<n; i++)  
	{
		cin>>x;
		if(i==0)
			head->val = x;
		else
		{
			ListNode* newnode = new ListNode(x);
			temp->next = newnode;
			temp = temp->next;
		}		
	}

	ListNode *head2 = head->next; // head2 for even chain

	ListNode *end = myfun(head);  // returns end of the odd chain 
	end->next = head2;			  // end of the odd chain is attached to the head of the even chain


	// Displaying the odd-even chain
	ListNode* t = head;
	while(t->next!=NULL)
	{
		cout<<t->val<<"->";
		t = t->next;
	}	 
	cout<<t->val<<endl;
	
	return 0;

}



