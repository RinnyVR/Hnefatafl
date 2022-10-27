#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <dos.h>

using namespace std;


//STRUCTURE OF THE BOARD
struct Matrice
{
    int n;
    int elem[11][11];
};



//BEGINING OF THE PROGRAM SUBPROGRAMS CATEGORY

void BoardGameInitiallise(Matrice& a) //CREATE THE BOARD GAME //DONE
{
    int i,j;
    for (i = 1; i <= a.n; i++)
        for (j = 1; j <= a.n; j++)
            a.elem[i][j] = 0;
}

void InitializeBoardPeices(Matrice& a)//
{
//...    
}

void LoadingDisplay() //ANIMATION LOADINg SCREEN //DONE
{
    system("CLS");
    system("Color A");
    cout<<"Dimention Confirmed";
    _sleep(2000);
    system("CLS");
    cout<<"Initializing Board.";
    _sleep(3000);
    system("CLS");
    cout<<"Initializing Board..";
    _sleep(3000);
    system("CLS");
    cout<<"Initializing Board...";
    _sleep(3000);
    system("CLS");
    cout<<"Initializing Pieces.";
    _sleep(2000);
    system("CLS");
    cout<<"Initializing Pieces..";
    _sleep(2000);
    system("CLS");
    cout<<"Initializing Pieces...";
    _sleep(2000);
    system("CLS");
    cout<<"Process Completed!";
    _sleep(1000);
    system("CLS");
}


//REPETITIVE FUNCTIONS SUBPROGRAMS IN GAME

void Display(Matrice& a) //DISPLAY GAME BOARD //DONE
{   
    int i,j;
    for(i = 1; i <= a.n; i++)
    {
        for (j = 1; j <= a.n; j++)
            cout<<a.elem[i][j]<<' ';
        cout<<endl;
    }
}

//RULE BOOK

void RecallMenu() //HELPING GUIDE ON REPRESENTING PEICES/RULES  
{
    cout<<"Welcome to the guide!"<<endl<<"Introduce 1 to see the Representetive numbers on phone"<<"And for the rules press 2"<<endl;
}

void FirstPage()
{

}

void SecondPage()
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
    system("Color F");
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
