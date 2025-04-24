

#include<iostream>
#include"vechicle.h"
#include"parkingspace.h"
using namespace std ;

class ticket{



public:

vechicle* v1;
parkingspace* p;
string time ;

ticket(vechicle* v2,parkingspace* p1)
{
    v1=v2;
    time="";    
    p=p1;
}

};