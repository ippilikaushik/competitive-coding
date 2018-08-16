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

void insnode(head h,int r,int c,int val)
{	
	node* newn=new node;
	newn->row=r;newn->col=c;
	newn->data=val;
	node* ctemp=h->next;
	node* rtemp=h->down;
	while(ctemp->cid!=c)
		ctemp=ctemp->next;
	ctemp->
	while(rtemp->rid!=r)
		rtemp=rtemp->down;
	
}
int main()
{
	int n,r,c,val,row,col;
	node* h= new node;
	while(rep=='y')
	{
		cin>>r>>c>>n;
		for(int i=0;i<n;i++)
		{
		cin>>row>>col>>val;
		insnode(h,r,c,val);
		}
	
	
		cout<<"please give number of rows,columns";
		cin>>r>>c;
		h->row=r;
		r->col=c;
		h*next=h*down=NULL;
		for(int k=0;k<r;k++)
		{
			rheadnode* rh= new rheadnode;
			rh->rid=k;
			rheadnode* temp=h->down;
			rheadnode* t ;
			while(temp!=NULL)
				t=temp;
				temp=temp->down;
			t->down=rh;
			rh->down=h->down;
		}
		for(int k1=0;k1<c;k1++)
		{
			cheadnode* ch= new cheadnode;
			ch->cid=k1;
			head*temp=h;
			while(temp->next!=NULL)
				temp=temp->next;
			temp->next=ch;
			ch->next=h->next;
		}
		for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
		cin>>mat[i][j];
		if(a[i][j]!=0)
		{	
			insnode(h,i,j,a[i][j]);}
		}
	}
}
