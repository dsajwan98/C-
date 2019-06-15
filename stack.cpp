#include<iostream>
#define m 10
using namespace std;
int stack[m];
int t=-1;
void push()
{
	int n;

	cout<<"Enter a number";
	cin>>n;
	if(t==m-1)
	{
		cout<<"overflow";
	}
	else
        t++;
	stack[t]=n;
}
void pop()
{
	if(t==-1)
	cout<<"underflow";
	else
	{
	cout<<"The deleted element is:"<<stack[t];
    t--;
    }
}
void display()
{
	int i;
	for(i=t;i>=0;i--)
	{cout<<stack[i]<<endl;
	}
}
int main()
{
	int o;
	do
	{
		cout<<"Enter your choice:\n";
		cin>>o;
		switch(o)
		{
			case 1: push();
			        break;
		    case 2: pop();
		            break;
		    case 3: display();
		            break;
		}
	}while(o!=0);
	return 0;
}
