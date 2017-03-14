//
//  main.cpp
//  Пр_14(3)
//
//  Created by Yan Kosinskiy on 26.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
void qs(float* d, int n);
void read(float* d,const int n);
float task_one (float* d,const int n);
float task_two (float* d,const int n);
int main()
{
    int n;
    cin >> n;
    float *a = new float[n];
    read (a,n);
    cout << task_one(a,n)<< " " << task_two(a,n) << endl;
    qs(a,n);
    for (int i=0; i<n; i++) cout << a[i] << " ";
    system("pause");
    return 0;
}
void qs(float* d, int n)
{
    int i=0, n2=0;
    float a,b,c;
    cin >> a >> b;
    while (i<n)
    {
        if (fabs(d[i])>=a && fabs(d[i])<=b && i!=n2)
        {
            for (int j=i; j>n2; j--)
            {
                c = d[j]; d[j] = d[j-1]; d[j-1] = c;
            }
            n2++;
        }
        else i++;
    }
}
void read(float* d,const int n)
{
    for (int i = 0; i<n; i++)
    {
        cin >> d[i];
    }
}
float task_one (float* d,const int n)
{
    int max_i=0;
    for (int i=0; i<n; i++)
    {
        if (fabs(d[i])>fabs(d[max_i])) max_i=i;
    }
    return max_i+1;
}
float task_two (float* d,const int n)
{int i;
    int OnePositive=n;
    float sum=0;
    for (int i=0; i<n; i++)
    {
        if (d[i]>0 && OnePositive == n)  OnePositive=i;
    }
    for (i=OnePositive+1;i<n;i++)
        sum+=d[i];
    return sum;
}
