#include<iostream>

using namespace std;
 class stack
{
public:
int stackarr[100];
int top;
int size;
void push(int x);
int pop();
void display();
};

void stack::push(int x)
{
 
if(top==99)
{cout<<"stack is full\n";}
else
{stackarr[++top]=x;size++;}
}

int stack::pop()
{
if(top==-1)
{cout<<"stack is empty\n";}
else
{size--;return stackarr[top--];}

}

void stack::display()
{
for(int i=top;i>=0;i--)
{
cout<<stackarr[i]<<"  ";
}
cout<<"\n";
}


