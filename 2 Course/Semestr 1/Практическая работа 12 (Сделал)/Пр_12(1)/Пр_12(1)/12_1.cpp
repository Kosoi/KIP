//
//  main.cpp
//  Пр_12(1)
//
//  Created by Yan Kosinskiy on 21.12.16.
//  Copyright © 2016 Yan Kosinskiy. All rights reserved.
//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    
    int vozr;
    cout<<"Введите возраст от 1 до 99: "<<endl;
    cin>>vozr;
    if(vozr>=1 && vozr<=99){
        
        if(vozr==1) {cout<<"Мне "<<vozr<<" год"<<endl;}
        for(int i=2; i<5; i++)
        {if(vozr==i) cout<<"Мне "<<vozr<<" года"<<endl;}
        
        for(int i=5; i<21; i++)
        {if(vozr==i) cout<<"Мне "<<vozr<<" лет"<<endl;}
        
        if(vozr>=21){ switch(vozr%10){
            case 1: cout<<"Мне "<<vozr<<" год"<<endl; break;
            case 2: cout<<"Мне "<<vozr<<" года"<<endl; break;
            case 3: cout<<"Мне "<<vozr<<" года"<<endl; break;
            case 4: cout<<"Мне "<<vozr<<" года"<<endl; break;
            default: cout<<"Мне "<<vozr<<" лет"<<endl;}}
        
    }
    else cout<<"Данный возраст не подходит!"<<endl;
    
    
    system("pause");
    return 0;   
}
