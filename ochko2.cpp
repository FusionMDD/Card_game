#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<ctime>

using namespace std;


int main()
{

bool al=true;
int a=0,b,d=0,l=0,v=0,j;
int c[36]={2,2,2,2,3,3,3,3,4,4,4,4,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11};


system("cls");
cout<<endl<<endl<<"Press enter for human game"<<endl;
system("pause");
system("cls");

while(al==true)
{

    ++l;
    srand(time(0));
   b=rand()%35;
   if (c[b]==0)
        while(c[b]==0){
            srand(time(0));
        b=rand()%35;}

        d=d+c[b];
        if(l=2 && d==22)
            {
                cout<<endl<<"You have gold you win"<<endl;
                return 0;
            }
        c[b]=0;
    if(d>21)
        {
        cout<<endl<<"You have more than 21"<<endl;
        cout<<"You lose"<<endl;
        system("pause");
    return 0;
        }
        if(d==21)
        {
        cout<<endl<<"You have  21"<<endl;
        system("pause");
        system("cls");
    goto m1;
        }
    cout<<endl<<"You have "<<d<<" points"<<endl;
    cout<<endl<<"Input 1 for card,0 for game ending"<<endl;
    cin>>al;

system("cls");


}
m1:
cout<<endl<<"Human play end..."<<endl;
system("pause");
system("cls");
cout<<endl<<"Press enter for comp game"<<endl;
system("pause");
system("cls");
while(a<=14)
    {
        ++v;
        srand(time(0));
        b=rand()%35;
        if (c[b]==0)
        while(c[b]==0){
            srand(time(0));
        b=rand()%35;}
        a=a+c[b];
        if(v=2 && a==22)
            {
                cout<<endl<<"Comp have gold you lose"<<endl;
                return 0;
            }
            if(a>21)
                {


                cout<<endl<<"Computer have "<<a<<" points"<<endl;
                cout<<"You have "<<d<<" points"<<endl;
                cout<<"You win"<<endl;

                }
        c[b]=0;
    }

cout<<endl<<"Computer have "<<a<<" points"<<endl;
cout<<"You have "<<d<<" points"<<endl;

if(d<=a&&a<22)
    cout<<endl<<"You lose"<<endl;
else
    cout<<endl<<"You win"<<endl;

}
