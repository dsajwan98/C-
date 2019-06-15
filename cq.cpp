#include<iostream>
#define m 3
using namespace std;
int queue[m];
int f=-1;
int r=-1;
void push()
{
	int n;

	cout<<"Enter a number";
	cin>>n;
	if(f==(r+1)%m)
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
        r=(r+1)%m;
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
	cout<<"The deleted element is:"<<queue[f]<<endl;
    f=(f+1)%m;
    }
}
}
void display()
{
	int i;
	if(f==-1)
        cout<<"queue is empty";
    else if(r>f)
    {
	for(i=f;i<=r;i++)
	{cout<<queue[i]<<endl;
	}
    }
    else {
       for(i=f;i<m;i++)
            cout<<queue[i];
       for(i=0;i<=r;i++)
            cout<<queue[i];
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
