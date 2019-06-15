#include<iostream>
#define m 10
using namespace std;
int queue[m];
int f=-1;
int r=-1;
void push()
{
	int n;

	cout<<"Enter a number";
	cin>>n;
	if(r==m-1)
	{
		cout<<"overflow";
	}
	else
	{
     if(f==-1&&r==-1)
     {
     	f=0;
     	r=0;
     	queue[r]=n;
	 }
	else
	{
        r++;
	queue[r]=n;
    }
   }
}
void pop()
{
	if(f==-1 && r==-1)
	cout<<"underflow";
	else
	{
		if(f==r)
		{
			f=-1;
			r=-1;
		}
	else
	{
	cout<<"The deleted element is:"<<queue[f];
    f++;
    }
}
}
void display()
{
	int i;
	for(i=f;i<=r;i++)
	{cout<<queue[i]<<endl;
	}
}
int main()
{
	int o;
	do
	{
		cout<<queue[-1];
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
