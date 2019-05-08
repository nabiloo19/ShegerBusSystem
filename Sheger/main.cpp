#include <iostream>
#include "Sheger.h"
#include "monitor.h"
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    Sheger Driver;
    monitor m;
    int choice,how_many,pass;
    char retry, CHOICES;;

    do
    {
        home:
        system("cls");

        cout<<"\n\nYou Are:-\n";
        cout<<"\n1,Registrar";
        cout<<"\n2,Monitor";
        cout<<"\n3,Exit\n";
        cout<<"\nSelect: #";
        cin>>choice;


        if(choice==1)
        {        system("cls");
             cout<<"Enter the Password: #";cin>>pass;
             if(pass==1234){
            do
            {
                menu:
                system("cls");

                cout<<"*Menu*";
                cout<<"\n\n 1,Register";
                cout<<"\n 2,Display";
                cout<<"\n 3,Search ";
                cout<<"\n 4,Update ";
                cout<<"\n 5,Delete \n";
                cout<<"\nSelect Your Choice: #";
                cin>>choice;

                switch(choice)
                {

                case 1:
system("cls");
                    cout<<"How many Drivers You Want to Register: #";
                    cin>>how_many;
                    for( int i=1; i<=how_many; i++)
                    {

                        Driver.create();

                    }
                    Driver.writeToFile();

                    break;

                case 2:
                    system("cls");
                    Driver.displayFromFile();
                    break;

                case 3:
                    system("cls");
                    Driver.search();
                    break;

                case 4:
                    system("cls");
                    Driver.update();
                    break;

                case 5:
                    system("cls");
                    Driver.del();
                    break;


                default:

                    cout<<"\n!Invalid entry!\n";
                    cout<<"\n!Wanna the main menu, press 'm' !";
                    cout<<"\n!Wanna go back a step, press 'n' !\n\n";
                    cin>>CHOICES;
                    if(CHOICES=='M'|| CHOICES=='m')
                    {

                        goto home;
                    }

                    else if(CHOICES=='n'|| CHOICES=='N')
                    {

                        goto menu;
                    }

                    else{
                        exit(0);
                    }
                    break;
                }

                cout<<"\nPress 1 to go back:#";
                cin>>retry;
            }while(retry=='1');
             }else{
             cout<<"\nIncorrect password\n";}
        }

        else if(choice==2)
        {
            system("cls");
            cout<<"1,Display Driver Info\n";
            cout<<"2,Search Driver\n";
            cout<<"\tSelect Your Choice:";
            cin>>choice;

            switch(choice)
            {

            case 1:
                cout<<"Under Building\n";
            case 2:
                //next time
                cout<<"Under Building\n";

            break;

                default:

                    cout<<"\n!Invalid entry!\n";
                    cout<<"\n!Wanna the main menu, press 'm' !";
                    cout<<"\n!Wanna go back a step, press 'n' !\n\n";
                    cin>>CHOICES;
                    if(CHOICES=='M'|| CHOICES=='m')
                    {

                        goto home;
                    }

                    else if(CHOICES=='n'|| CHOICES=='N')
                    {

                        goto menu;
                    }

                    else{
                        exit(0);
                    }
            }
        }

        else if(choice==3)
        {
            exit(0);
        }

        cout<<"\nPress H to go back to home\n";
        cin>>retry;
    }
    while(retry=='h' || retry=='H');


}
