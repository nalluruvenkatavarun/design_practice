
#include"parkingspace.h"

class parking_system{


    vector<parkingspace*>parkingspaces;



    parking_system()
    {
       
       parkingspaces.push_back(new parkingspace(1));
        
    }



    parkingspace* get_space(int t)
    {
        return new parkingspace(t);
    } 



};