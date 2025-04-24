



#include<iostream>

#include"board.h"

#include"dice.h"

#include"player.h"


#include<queue>


using namespace std;





class game
{

   public:

   board* b;


   dice* d;



   deque<player*> players;

  void  set_game()
   {

    
     b= new board(5,5,100);
     d= new dice(1);
     b->set_snakes();
     b->set_ladders();


     for(int i=0;i<2;i++)
     {
        cout<<"enter name" <<endl;

        string name;
        cin>>name;


        cout<<"enter symbol"<<endl;


        char symbol;
        cin>> symbol ;



        players.push_back(new player(name,0,symbol));
     }



   }




   void play()
   {


    bool is_win=false;


     while(!is_win)
     {


     player* player_to_play= players.front();


     players.pop_front();



     cout<<"player "<<player_to_play->name<<" turn"<<endl;

    int value ;
     cin>>value;

   
    value = d->roll();



    cout<<value<<" "<<"value"<<endl;
     
     player_to_play->position+= value ;

    
     cout<<player_to_play->position<<endl;


     player_to_play->position= b->check_snakes_and_ladders(player_to_play->position);
    //  player_to_play->position= b->check_win(player_to_play->position);

     cout<<player_to_play->position<<endl;


     if(player_to_play->position>=b->board_size)
     {
        cout<<"player "<<player_to_play->name<<" won the game"<<endl;
        is_win=true;
     }
     else
     {
        players.push_back(player_to_play);
        
        
        }


     }



   }


};