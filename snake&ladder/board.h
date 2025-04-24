


#include<iostream>

#include<cstdlib>

using namespace std;




class board
{


public:    

int number_of_snakes ;
int number_of_ladders ;
int board_size ;

unordered_map<int,int >snakes;
unordered_map<int,int>ladders;



board(int game_number_of_snakes,int game_number_of_ladders,int game_board_size)
{

number_of_ladders=game_number_of_ladders;

number_of_snakes=game_number_of_snakes;

board_size=game_board_size;

}





void set_snakes()
{
  

 int count=0;

 while(count<number_of_snakes  )
 {
    int start= rand()%10+1;
    int end= rand()%10+1;

   if(start>end)
     {snakes[start]=end;
     count++;}


 } 


}

unordered_map<int,int> get_snakes()
{

return snakes;
}




void set_ladders()
{

 int count=0;

 while(count<number_of_ladders  )
 {
    int start= rand()%10+1;
    int end= rand()%10+1;


    

   if(start<end)
     {ladders[start]=end;
     count++;}


 } 

}


int check_snakes_and_ladders(int a)
{


  if(snakes.find(a)!=snakes.end())
  {
    return snakes[a];
  }
  else if(ladders.find(a)!=ladders.end())
  {
    return ladders[a];
  }
 
    return a;
  

}



bool check_win(int a)
{

    if(a>=board_size)   
      return true;
    return false;  
}

unordered_map<int,int> get_ladders(){


return ladders ;

}















};