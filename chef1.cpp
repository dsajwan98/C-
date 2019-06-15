#include<iostream>
#define T 10
#define N 10
#define S 10
using namespace std;
int main()
{
 int j,p,i,n,t,q;
 int Q[T],d[S],x[S],s[T][S];
  cin>>t;
  p=t;
  while(t!=0)
  {
  	cin>>n;
  	cin>>q;
  	Q[p-t]=q;
  	for(i=0;i<n;i++)
  		cin>>d[i];
	for(i=0;i<q;i++)
		cin>>x[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<q;j++)
		{
			x[j]=x[j]/d[i];
			s[p-t][j]=x[j];
		}
	}

	  t--;
  }
  	for(i=0;i<p;i++)
	{
		for(j=0;j<Q[i];j++)
		{
		cout<<s[i][j]<<" ";
	    }
		cout<<endl;
	}
  return 1;
}
