


#include<iostream>

#include"vechicle.h"

using namespace std ;


class parkingspace{


public:

int type;

vechicle* v;

bool is_empty;


parkingspace(int t) 
{
    type=t;
    v=NULL;
    is_empty=true;
}



void park(vechicle* v1)
{
    v=v1;

    is_empty=true;
}


void unpark()
{
    v=NULL;
    is_empty=false;
}   


};