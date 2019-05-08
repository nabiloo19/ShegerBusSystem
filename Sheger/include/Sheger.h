#ifndef SHEGER_H
#define SHEGER_H


class Sheger
{
protected:
    char d_name[20],address[15],from[15],to[15],truckmodel[15],truckno[15];
    int phone,id;
    Sheger *next_d;//to point the next node
    Sheger *node;// to create a node
    Sheger *head;// the first node
    Sheger *tail;//the first node

public:
    Sheger();
    void create();
    void accept(Sheger *temp);
    void search();
    void update();
    void del();
    void writeToFile();
    void displayFromFile();


};

#endif // SHEGER_H
