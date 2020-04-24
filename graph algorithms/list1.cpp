#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
public:
int u;
int v;
int weight;
node* nptr;
};
class list1
{
public:
node* list1;
int length;
void push(int u,int v,int weight);
void display();
void swap(node* a,node* b);
void ascsort();
void descsort();
};


void list1::push(int u,int v,int weight)
{
node *temp=(node*)malloc(sizeof(node));
if(temp==NULL)
{cout<<"memory is full\n";}
else
{
temp->u=u;
temp->v=v;
temp->weight=weight;
temp->nptr=NULL;
if(length==0)
{
list1=temp;
length++;
}
else
{
temp->nptr=list1;
list1=temp;
length++;
}
}
}

void list1::swap(node* a,node* b)
{
 int x,y,z;
  x=a->u;y=a->v;z=a->weight;
  a->u=b->u;
  a->v=b->v;
  a->weight=b->weight;
  b->u=x;
  b->v=y;
  b->weight=z;
 }

void list1::display()
{
node* temp=list1;
while(temp!=NULL)
{
cout<<"( "<<temp->u<<" , "<<temp->v<<" , "<<temp->weight<<" )\n ";
temp=temp->nptr;
}
}

void list1::ascsort()
{
for(int i=0;i<length;i++)
{
 node* k=list1;
for(int i=0;i<length;i++)
{
if(k->nptr!=NULL)
{
if((k->weight)>((k->nptr)->weight))
{swap(k,k->nptr);}
}
k=k->nptr;
}

}
}

void list1::descsort()
{
for(int i=0;i<length;i++)
{
 node* k=list1;
for(int i=0;i<length;i++)
{
if(k->nptr!=NULL)
{
if((k->weight)<((k->nptr)->weight))
{swap(k,k->nptr);}
}
k=k->nptr;
}

}
}

/*
int main()
{

 list1*  l=(list1*)malloc(sizeof(list1));
 l->length=0;
 l->push(2,3,4);
 l->push(2,3,7);
l->push(2,3,6);
l->push(2,3,-15);
l->push(2,3,15);
l->push(2,3,12);
l->display();
cout<<"length : "<<l->length<<"\n";
l->ascsort();
l->display();
l->descsort();
l->display();

}

*/


