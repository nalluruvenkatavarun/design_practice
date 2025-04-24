

#include<iostream>
using namespace std;

#include"game_controller.h"






int main()
{


game_controller* game = new game_controller();


game->initialize_game(3,2);


game->play_game();


    return 0;
}