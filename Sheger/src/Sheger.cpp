#include "Sheger.h"
#include <iostream>
#include "Sheger.h"
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;



int id;//global variable

Sheger::Sheger()
{
    next_d=NULL;
    node=NULL;
    head=NULL;
    tail=NULL;
}

void Sheger::create()//to create a node
{



    node=new Sheger;
    accept(node);//calling of accept function
    node->next_d=NULL;

    if(head==NULL)//only to assign the first node
    {

        head=node;
        tail=node;
        node=NULL;
    }

    else//to create sequence of nodes after the head
    {

        tail->next_d=node;
        tail=node;

    }
}

void Sheger::accept(Sheger *temp)//a function to accept  driver info
{

system("cls");
			cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
			cout<<"\t\t\t@      ACCEPT   @\n";
			cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n\n";

cout<<"\n\n\tEnter Driver's Details:\n";


    cout<<"Enter Driver's Name: ";
    cin.ignore();
    cin.getline(temp->d_name,20);
    cout<<"Enter Driver's Phone:-# ";
    cin>>temp->phone;
    cout<<"Enter Driver's Address:- ";
    cin.ignore();
    cin.getline(temp->address,15);
    cout<<"Enter Driver's ID: #";
    cin>>temp->id;
    cout<<"Enter Truck Model:- ";
    cin.ignore();
    cin.getline(temp->truckmodel,15);
    cout<<"Enter Truck Number:- ";
    cin.ignore();
    cin.getline(temp->truckno,15);
    cout<<"From:- ";
    cin.ignore();
    cin.getline(temp->from,15);
    cout<<"To:- ";
    cin.ignore();
    cin.getline(temp->to,15);

    cout<<endl;

}


void Sheger::search()// search function
{
    	system("cls");

	cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t@      SEARCH       @\n";
	cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n\n";

    node=new Sheger;

    int flag=0;
    cout<<"Enter ID number to Search"<<endl;
    cin>>id;

    for(node=head; node!=NULL; node=node->next_d)
    {

        if(node->id==id)
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        cout<<"***********************************************************************************************************************";
        cout<<"\nSearch found"<<endl;
        cout<<"\n\tDriver's Name- "<<node->d_name<<"\tDriver's Phone-# "<<node->phone<<"\tDriver's Address- "<<node->address;
        cout<<"\n\n\t\t truck Model:- "<<node->truckmodel<<"\t\t truck Number:-# "<<node->truckno<<"\t\tDriver's ID-# "<<node->id;
        cout<<"\n\n\t\t\tFrom:- "<<node->from<<"\t\t\tTo- "<<node->to<<endl;
        cout<<"***********************************************************************************************************************\n\n";
    }
    else
    {
        cout<<"\nsearch not found!!"<<endl;
    }


}

void Sheger::update() // update function
{

    	cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t@        UPDATE       @\n";
	cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n\n";


    int m;
    node=new Sheger;
    node=head;

    cout<<"Enter Drivers' ID to Update\n";
    cin>>id;

    while(node->id!=id)
    {
        node=node->next_d;
    }
    cout<<"\nDrivers' Info\n"<<endl;
     cout<<"\n\tDriver's Name- "<<node->d_name<<"\tDriver's Phone-# "<<node->phone<<"\tDriver's Address- "<<node->address;
        cout<<"\n\n\t\t truck Model:- "<<node->truckmodel<<"\t\t truck Number:-# "<<node->truckno<<"\t\tDriver's ID-# "<<node->id;
        cout<<"\n\n\t\t\tFrom:- "<<node->from<<"\t\t\tTo- "<<node->to<<endl;

    cout<<"\n\n\t\t->Modify Options:-Which Data do you want to Modify?\n\n"
			 		"\t1,Name\n"
			 		"\t2,Phone Number\n"
			 		"\t3,Address\n"
			 		"\t4,ID\n"
			 		"\t5,Truck model\n"
			 		"\t6,Truck Number\n"
			 		"\t7,From & To\n"
			 		"\t8,The Whole Data\n"
			 		"\t\t\tSelect Your Option:-";

			 		cin>>m;

            if(m==1)
			{

             cout<<"Enter Driver's Name: ";
    cin.ignore();
    cin.getline(node->d_name,20);

			}

            else if(m==2)
			{
            	cout<<"Enter Driver's Phone:-# ";
    cin>>node->phone;
			}

			else if(m==3)
			{
            	 cout<<"Enter Driver's Address:- ";
    cin.ignore();
    cin.getline(node->address,15);
			}

			else if(m==4)
			{
             	cout<<"\nEnter Driver's ID: #";
    cin>>node->id;
			 }

			else if(m==5)
			{
             	cout<<"Enter Truck Model:- ";
    cin.ignore();
    cin.getline(node->truckmodel,15);
			 }

			else if(m==6)
			{
            	cout<<"\nEnter Truck Number:- ";
    cin.ignore();
    cin.getline(node->truckno,15);
			}

			else if(m==7)
			{
            	 cout<<"\nFrom:- ";
    cin.ignore();
    cin.getline(node->from,15);
    cout<<"\nTo:- ";
    cin.ignore();
    cin.getline(node->to,15);
			}

			else if(m==8)
			{
			system("cls");


    cout<<"Enter Driver's Name: ";
    cin.ignore();
    cin.getline(node->d_name,20);
    cout<<"Enter Driver's Phone:-# ";
    cin>>node->phone;
    cout<<"Enter Driver's Address:- ";
    cin.ignore();
    cin.getline(node->address,15);
    cout<<"Enter Driver's ID: #";
    cin>>node->id;
    cout<<"Enter Truck Model:- ";
    cin.ignore();
    cin.getline(node->truckmodel,15);
    cout<<"Enter Truck Number:- ";
    cin.ignore();
    cin.getline(node->truckno,15);
    cout<<"From:- ";
    cin.ignore();
    cin.getline(node->from,15);
    cout<<"To:- ";
    cin.ignore();
    cin.getline(node->to,15);
			}



    writeToFile();


}

void Sheger::del()//delete function
{

    cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n";
	cout<<"\t\t\t@        DELETE       @\n";
	cout<<"\t\t\t@@@@@@@@@@@@@@@@@@@@@\n\n";
    Sheger *prev=new Sheger;//declaration of a new node
    node=new Sheger;


    cout<<"Enter ID Number to Delete:"<<endl;
    cin>>id;
    prev=head;
    node=head;
    int flag=1;

    while(node->id!=id)
    {
        prev=node;
        node=node->next_d;
        flag++;
    }

    if(flag==1) //if the first node deleted
    {
        head=head->next_d;
        delete node;
    }
    prev->next_d = node->next_d;//connect the previous and the next node
    node->next_d=NULL;//make it null
    delete node;//then delete the node
    cout<<endl<<"Recored Deleted";
    writeToFile();//update the file


}

void Sheger::writeToFile()
{
    ofstream fin("Record.txt");//create record file
    int i=1;
    for (node =head; node !=NULL; node=node->next_d) //store each data in the file till the end of the node
    {
        fin<<"Driver-"<<i++<<endl;
        fin<<"\n\tDriver's Name- "<<node->d_name<<"\tDriver's Phone-# "<<node->phone<<"\tDriver's Address- "<<node->address;
        fin<<"\n\n\t\t truck Model:- "<<node->truckmodel<<"\t\t truck Number:-# "<<node->truckno<<"\t\tDriver's ID-# "<<node->id;
        fin<<"\n\n\t\t\tFrom:- "<<node->from<<"\t\t\tTo- "<<node->to<<endl;
    }
    fin.close();

}

void Sheger::displayFromFile()
{
    ifstream fout("Record.txt");//opening record file

    string line;
    while (getline (fout,line))
    {
        cout << line << endl;//dispalying data
    }
    fout.close();
}
