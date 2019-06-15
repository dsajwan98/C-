#include<iostream>
using namespace std;
int main()
{
 int a[8],i,j,k,l,s;
 for(i=0;i<8;i++)
cin>>a[i];
 s=0;
 l=s;
 i=0;
 k=0;
     if(k<8)
     {
         s=0;
         for(j=i;j<8-k;j++)
            s+=a[j];
         if(s>l)
            l=s;
            k++;
         if(i<8  && k==8)
         {
             k=0;
             i++;
         }
     }

cout<<l;
}
