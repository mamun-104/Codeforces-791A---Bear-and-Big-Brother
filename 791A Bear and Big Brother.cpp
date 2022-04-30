#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int year=0;
    while(1)
    {
        a=a*3;
        b=b*2;
        year++;
        if(a>b){break;}
    }

    cout<<year<<endl;





    return 0;
}


