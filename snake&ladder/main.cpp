

#include<iostream>

#include"game.h"

using namespace std ;




int main()
{

    srand(time(0));

    game* new_game= new game();


    new_game->set_game();


    new_game->play();


    return 0;
}


