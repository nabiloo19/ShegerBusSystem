#include <iostream>
#include "Sheger.h"//parent class
#include "monitor.h"//child class
#include <cstdlib>// for clearing the screen
#include <conio.h>// used to freeze the screen

using namespace std;

int main()
{
    Sheger Driver;//parent class object
    monitor m;//child class object

    int how_many,pass,a=0;// -> how_many to loop the function of howMany to accept
                          //->pass for password acceptance
                          //->a variable to keep registering people event after we have registered people
    char choice;          //-> for Menu and Inner Menu

    do
    {
          home:
        system("cls");
        system("color f0");
        cout<<"\n\n\t******************************";
        cout<<"\n\t*SHEGER REGISTRATION PLATFORM*";
        cout<<"\n\t******************************";
        cout<<"\n\n\t\tYou Are:-\n";
        cout<<"\n\t\t1,Registrar";
        cout<<"\n\t\t2,Monitor";
        cout<<"\n\t\t3,Manager";
        cout<<"\n\t\t3,Exit";
        cout<<"\n\t\t\tSelect: #";
        cin>>choice;


        if(choice=='1')
        {
            system("cls");
            cout<<"\n\tEnter the Password: #";
            cin>>pass;
            if(pass==1234)
            {
                do
                {
                        menu:
                    system("cls");

                    cout<<"\n\t*Menu*";
                    cout<<"\n\n\t 1,Register";
                    cout<<"\n\t 2,Display";
                    cout<<"\n\t 3,Search ";
                    cout<<"\n\t 4,Update ";
                    cout<<"\n\t 5,Delete ";
                    cout<<"\n\t\tSelect Your Choice: #";
                    cin>>choice;

                    switch(choice)
                    {

                    case '1':

                        system("cls");

                        cout<<"\n\tHow many Drivers You Want to Register: #";
                        cin>>how_many;
                        a+=how_many; // we assign its value to 'a'

                        for(int i=a-how_many ; i<a; i++)
                        {

                            Driver.create();

                        }
                        Driver.writeToFile(); //after finishing accepting, it is immediately written to a file

                        break;

                    case '2':
                        system("cls");
                        Driver.displayFromFile();//extract from a file and display
                        break;

                    case '3':
                        system("cls");
                        Driver.search();
                        break;

                    case '4':
                        system("cls");
                        Driver.update();
                        break;

                    case '5':
                        system("cls");
                        Driver.del();
                        break;


                    default:

                        cout<<"\n!Invalid entry!\n";
                        cout<<"\n!Wanna the main menu, press 'm' !";
                        cout<<"\n!Wanna go back a step, press 'n' !\n\n";
                        cin>>choice;
                        if(choice=='M'|| choice=='m')
                        {

                            goto home;// the Menu
                        }

                        else if(choice=='n'|| choice=='N')
                        {

                            goto menu;//the Inner Menu
                        }

                        else
                        {
                            exit(0);
                        }
                        break;
                    }

                    cout<<"\nPress 1 to go back:#";
                    cin>>choice;
                }
                while(choice=='1');
            }
            else
            {
                cout<<"\nIncorrect password\n";
            }
        }

        else if(choice=='2')
        {
                D_menu:// for the monitor menu
            system("cls");

            cout<<"\n\t*MENU*\n";
            cout<<"\t1,Display Driver Info\n";
            cout<<"\t2,Search Driver\n";
            cout<<"\t\tSelect Your Choice:";
            cin>>choice;

            switch(choice)
            {

            case '1':
                m.display();
                break;
            case '2':
                Driver.search();

                break;

            default:
                cout<<"\nINVALID ENTRY!\n";
                break;
            }
            cout<<"\n!Wanna the main menu, press 'h' !";
                cout<<"\n!Wanna go back a step, press 'n' !\n\n";
                cin>>choice;
                if(choice=='H'|| choice=='h')
                {

                    goto home;
                }

                else if(choice=='n'|| choice=='N')
                {

                    goto D_menu;
                }

       }

        else if(choice=='3')
        {
            exit(0);
        }

        cout<<"\nPress H to go back to home\n";
        cin>>choice;
    }
    while(choice=='h' || choice=='H');


}
