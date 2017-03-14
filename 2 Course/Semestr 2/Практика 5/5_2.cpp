#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{int a[10],i,max,n,min;
	cout<<"n= ";cin>>n;
	for(i=1;i<n;i++)
	{a[i]=rand()%20-7;
		cout<<" "<<a[i]<<"\n";
	}
    max=a[1];
    min=a[2]-a[1];
for(i=1;i<n;i++)
	if (a[i+1]>max)
		max=a[i+1];
	if (a[i]<min)
		min=a[i];
	cout<<"\nmax= "<<max;
	cout<<"\nmin= "<<min;
	cout<<"\nmax-min= "<<max-min;
}
