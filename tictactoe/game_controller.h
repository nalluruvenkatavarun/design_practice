

#include<iostream>


#include"board.h"

#include"player.h"

#include<queue>

using namespace std;




class game_controller{


    public :


    board* b;
    int players;


    queue<player*> players_queue;




    void initialize_game(int n,int m)
    {

     b = new board(n);
     players=m;


     for(int i=0;i<m;i++)
     {
      
      string name;
      char symbol;


      cout<< "enter your name"<<endl;

      cin>>name;

      cout<<"enter your symbol"<<endl;

      cin>>symbol;



      players_queue.push(new player(name,symbol));

    
     }



    }




void play_game()
{


 bool game_completed=false;




 while(!game_completed)
 {



  player* player_to_play= players_queue.front();



  players_queue.pop();


  cout<<"enter positions"<<endl;

  int x;
  int y;

  cin>>x>>y;


  char symbol=player_to_play->symbol;


  b->place_coin(x,y,symbol);


  b->display_board();


  if(b->check_for_win(symbol))
  {
   cout<<"player "<<player_to_play->name<<" won"<<endl;
   game_completed=true;

  }


else 
{
    players_queue.push(player_to_play);
}


 }



}











};