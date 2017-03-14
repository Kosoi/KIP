//
//  main.cpp
//  Тема 1_1(Уч.Пр)
//
//  Created by Yan Kosinskiy on 15.02.17.
//  Copyright © 2017 Yan Kosinskiy. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
int main()
{float  v,s,t,u,g;
    cout<<"Введите скорость V = "; cin>>v;
    cout<<"Введите скорость течение реки U = "; cin>>u;
    cout<<"Введите время движения лодки по озеру t1 = "; cin>>t;
    cout<<"Введите время движения лодки против течения t2 = "; cin>>g;
    s=t*v+g*(v-u);
    cout<<"Путь пройденной лодки S = "<<s<<"\n";
}
