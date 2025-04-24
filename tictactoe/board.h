#include<iostream>


using namespace std;



class board{

public:

int n;

vector< vector<char> >b ;


board(int size)
{

n=size;
for(int i=0;i<n;i++)
{
    vector<char>temp;
    for(int j=0;j<n;j++)
    {
        temp.push_back('-');
    }
    b.push_back(temp);
}
}



void place_coin(int x,int y,char symbol)
{

if(x<0 || x>=n || y<0 || y>=n || b[x][y]!='-')
   cout<<"invalid move"<<endl;
else    
  b[x][y]=symbol;

}


bool check_for_win(char symbol)
{

// check for rows check for column check for diagonal check for antidiagonal



return false;


}


void display_board ()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }

        cout<<endl;
    }
}



};