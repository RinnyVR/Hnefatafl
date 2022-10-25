#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <dos.h>


using namespace std;

struct Matrice
{
    int n;
    int elem[11][11];
};

void BoardGameInitiallise(Matrice& a)
{
    int i,j;
    for (i = 1; i <= a.n; i++)
        for (j = 1; j <= a.n; j++)
            a.elem[i][j] = 0;
}

void Display(Matrice& a)
{   
    int i,j;
    for(i = 1; i <= a.n; i++)
    {
        for (j = 1; j <= a.n; j++)
            cout<<a.elem[i][j]<<' ';
        cout<<endl;
    }
}

void LoadingDisplay()
{
    int ok=0;
    system("CLS");
    system("Color A");
    cout<<"Dimention Confirmed"<<endl;
    _sleep(4000);
    system("CLS");
    _sleep(4000);
    cout<<"Initializing Board."<<endl;
    system("CLS");
    _sleep(4000);
    cout<<"Initializing Board.."<<endl;
    system("CLS");
    _sleep(4000);
    cout<<"Initializing Board..."<<endl;
    system("CLS");
    _sleep(4000);
}

void 

void InitializeBoardPeices(Matrice& a)
{
    
}

int main()
{
    //int EndGame=0;
    Matrice a{};
    cout<<"Write Down Board Dimention! Option are 11 or 9 squares board."<<endl;
    cin>>a.n;
    while (a.n !=11 && a.n !=9 )
    {    
        system("Color C");
         cout<<"Dimention Not Valid"<<endl;
         cout<<"Please Write Down Board Dimention Either 11 or 9"<<endl;
         cin>>a.n;
    }
    LoadingDisplay();
    BoardGameInitiallise(a);
    Display(a);
    /*system("Color C");
    cout<<"LET THE GAME BEGIN"<<endl;
    do
    {
        EndGame=1;
        cout<<"test";
    }while(EndGame==0);*/
    return 0;
}
