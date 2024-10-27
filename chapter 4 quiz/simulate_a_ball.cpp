#include <iostream>


int main()
{
    double initial_height{};
    const double earth_gravity {9.8};
    //ask the user about the height in meters
    std::cout<<"Enter the height of the tower in meters: ";
    std::cin>> initial_height;
    double height_in_cals {initial_height};
    for (int i = 0; i <5;i++)    {
        height_in_cals -= earth_gravity * i *i /2;
        if (height_in_cals < 0){
            std::cout<<"At"<<i<<" seconds ball on ground\n";
            break;
        }
        else {
            std::cout<<"At  "<<i<<" seconds, the ball is at height: "<<height_in_cals<<" meters\n";
        }
    }
    
}