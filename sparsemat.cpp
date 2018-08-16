#include<iostream>
using namespace std;
struct node
{
	int row;
	int col;
	int data;
	node* next;
	node* down;
	
};
class trans
{
	node* h;
	public:
		trans(int x, int y){
			h->row=x;
			h->col=y;
			h->next=h;
			h->down=h;
		}
		void createhnode(int r,int c)
		{
			for(int i=0;i<r;i++)
			{
				node* temp1=h;
				node* temp2=new node;
				while(temp1->down!=h)
				temp1=temp1->down;
				temp2->row=i;
				temp2->col=-1;
				temp1->down=temp2;
				temp2->down=h;
			}
			for(int j=0;j<c;j++)
			{
				node* temp1=h;
				node* temp2=new node;
				while(temp1->next!=h)
				temp1=temp1->next;
				temp2->row=-1;
				temp2->col=j;
				temp1->down=temp2;
				temp2->down=h;
			}
		}
		void insnode(int r1, int c1, int val)
		{
			node* tr=h;node* tc=h;
			int a=0,b=0;
			while(a<=r1)
				{
					
					tr=tr->down;
					a++;
				}
			while(b<=c1)
			{
					tc=tc->next;
					b++;
			}
			node* newn=new node;
			newn->col=c1;
			newn->row=r1;
			newn->data=val;
			node* tr1=tr;
			node* tc1=tc;
			while(tr1->next!=tr)
				tr1=tr1->next;
			while(tc1->down!=tc)
				tc1=tc1->down;
			tr1->next=newn;
			newn->next=tr;
			tc1->down=newn;
			newn->down=tc;
			return;	
		}
		void display()
		{
			
			node* tc=h->next;
			node* tr=h->down;
			cout<<"";
			for(int i=1;i<=h->row;i++)
			{
			while(tr->next!=h)
				{
					cout<<tr->data;
				tr=tr->next;
				}
			}
		}
};
