#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <ctime>
using namespace std;
int main()
{int n,m,j,i,kl;
	float kol=0,sred=0,sum=0;
	int a[20][20];
	srand(time(0));
    cout<<"\nВведите n= ";cin>>n;
    cout<<"\nВведите m= ";cin>>m;
cout<<"Исходная матрица"<<endl;
cout<<"\n";
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
{
	a[i][j]=rand()%20;
	cout<<" "<<setw(6)<<a[i][j];
}
cout<<"\n";
}
for(i=0;i<n;i++)
	for(j=0;j<m;j++)
		if (a[i][j]>0)
		{
			kol=kol+1;
			sum=sum+a[i][j];
			sred=sum/kol;
		}
		cout<<"\n kol= "<<kol;
		cout<<"\n sum= "<<sum;
		cout<<"\n sred= "<<sred<<"\n";
}
