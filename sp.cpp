#include<iostream>
using namespace std;
int count(int);
int main()
{
	int N,c;
	std::cin>>N;
    c=count(N);
    std::cout<<c;
    return 0;
}

int count(int N)
{
	int i,j,s=0;
	for(i=5;i<N;i*5)
	{
		j=N/i;
		s=s+j;
	}
	return s;
}
