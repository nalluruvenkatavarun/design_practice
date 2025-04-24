



#include<iostream>
using namespace std ;

#include<cstdlib>



class dice{


public : 

int n ;


dice(int number_of_dice)
{
n=number_of_dice;
}



int roll()
{



int val=0;
for(int i=0;i<n;i++)
{

    val+=  rand()%6+1;


}
return val;

}


};