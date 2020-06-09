#include "plansza.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string pl[8][8]={{" ","|","A","|","B","|","C","|"},
                   {"1","|","-","|","-","|","-","|"},
                   {"2","|","-","|","-","|","-","|"},
                   {"3","|","-","|","-","|","-","|"}};
string wyborPola;


void Plansza::init()
{

        test = "W clasie Plansza";
        cout<<test<<endl;
        rysujPlansze();
        ruchy();

}

 void Plansza::ruchy()
{
    for (int i =1;i<=9;i++)
        {

        pierwszyGracz();
        rysujPlansze();
        drugiGracz();
        rysujPlansze();
        }
}

string Plansza::postawZnak()
{

    cin>>wyborPola;
    return wyborPola;
}


void Plansza::pierwszyGracz()
{cout<<"Gracz 1 wybierz pole do postawienia X :"<<endl;
    wyborPola = postawZnak();

        if(wyborPola=="a1")
        {
            pl[1][2] = "X";
        }
        else if(wyborPola=="a2")
        {
            pl[2][2] = "X";
        }
        else if(wyborPola=="a3")
        {
            pl[3][2] = "X";
        }
        else if(wyborPola=="b1")
        {
            pl[1][4] = "X";
        }
        else if(wyborPola=="b2")// tutuaj
        {
            pl[2][4] = "X";
        }
        else if (wyborPola=="b3")
        {
            pl[3][4] = "X";
        }
        else if(wyborPola=="c1")
        {
            pl[1][6] = "X";
        }
        else if(wyborPola=="c2")
        {
            pl[2][6] = "X";
        }
        else if(wyborPola=="c3")
        {
            pl[3][6] = "X";
        }

}

void Plansza::drugiGracz()
{cout<<"Gracz 2 wybierz pole do postawienia O :"<<endl;
wyborPola = postawZnak();
    if(wyborPola=="a1")
    {
        pl[1][2] = "O";
    }
    else if(wyborPola=="a2")
    {
        pl[2][2] = "O";
    }
    else if(wyborPola=="a3")
    {
        pl[3][2] = "O";
    }
    else if(wyborPola=="b1")
    {
        pl[1][4] = "O";
    }
    else if(wyborPola=="b2")// tutuaj
    {
        pl[2][4] = "O";
    }
    else if (wyborPola=="b3")
    {
        pl[3][4] = "O";
    }// tutuaj
    else if(wyborPola=="c1")
    {
        pl[1][6] = "O";
    }
    else if(wyborPola=="c2")
    {
        pl[2][6] = "O";
    }
    else if(wyborPola=="c3")
    {
        pl[3][6] = "O";
    }

}


    void Plansza::rysujPlansze()
    {
        cout<<"rysuj Plansze"<<endl;


//        cout<<pl[0][0];cout<<pl[0][1];cout<<pl[0][2];cout<<pl[0][3];cout<<pl[0][4];cout<<pl[0][5];cout<<pl[0][6];cout<<pl[0][7]<<endl;
//        cout<<pl[1][0];cout<<pl[1][1];cout<<pl[1][2];cout<<pl[1][3];cout<<pl[1][4];cout<<pl[1][5];cout<<pl[1][6];cout<<pl[1][7]<<endl;
//        cout<<pl[2][0];cout<<pl[2][1];cout<<pl[2][2];cout<<pl[2][3];cout<<pl[2][4];cout<<pl[2][5];cout<<pl[2][6];cout<<pl[2][7]<<endl;
//        cout<<pl[3][0];cout<<pl[3][1];cout<<pl[3][2];cout<<pl[3][3];cout<<pl[3][4];cout<<pl[3][5];cout<<pl[3][6];cout<<pl[3][7]<<endl;
//        cout<<endl<<endl<<endl;
        for (int i =0;i<=7;i++)
        {
            for (int j=0;j<=7;j++)
            {
                 cout<<pl[i][j];
            }
           cout<<endl;
        }


//        for(int i=0;i<=2;i++)
//        {
//            for(int j=0;j<=2;j++)
//                //cout<<" " <<j;
//            {
//                cout<<"|"<<pl[i][j];//<<"|";//plansza1[i+1][j+1]<<"|"<<plansza1[i+2][j+2]<<"|"<<endl;
//            }
//            cout<<endl;
//        }
        //cout<<plansza1[0][1]<<endl;
    }





