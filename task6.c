#include<stdio.h> #include<stdlib.h> Struct tree
{
int data;
Struct tree*l;
Struct tree*r;
};
void insert(struct tree**h,int n1)
{
Struct tree*n; If(*h==NULL)
{
 

n=(struct tree*)malloc(sizeof(struct tree)); n->data=n1;
n->l=NULL; n->r=NULL;
*h=n;
}
Else
{
If((*h )->data<n1) Insert(&((*h)->r),n1); Else
Insert(&((*h)->l),n1);
}
}
int height(struct tree *h)
{
int p=0,p1=0; if(h==NULL)
return 0; else
{
p=height(h->l); p1=height(h->r); if(p>p1)
return p+1; else
return p1+1;
}
 

}
int main()
{
struct tree *head=NULL; int n,i,m,x; scanf("%d",&n); for(i=0;i<n;i++)
{
scanf("%d",&x); insert(&head,x);
}
m=height(head); printf("%d",m); return 0;
}





