#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{int *a,*b,i,k,sum=0,sumn=0,n;
    cout<<"n= ";cin>>n;
cout<<"\na[i]= ";
    a=new int[n];
    b=new int[n];
for(i=0;i<n;i++)
{
	a[i]=rand()%10+1;
	cout<<" "<<a[i];
	sum=sum+a[i];
}
cout<<"\nb[i]= ";
for(i=0;i<n;i++)
{
	b[i]=a[i]*a[i]-a[i];
	cout<<" "<<b[i];
	sumn=sumn+b[i];
}
cout<<"\nсумма 1= "<<sum;
cout<<"\nсумма 2= "<<sumn;
cout<<"\nсумма 1 - сумма 2 = "<<sum-sumn<<"\n";
}
