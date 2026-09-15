/* 
Lium Powers, Computer Science Lab 2, 09/15/2026.
This program finds the volume and surface area of a cylinder.
*/

#include <iostream>

// Funtion Prototypes (Enables subfunctions)
// The findVolume function uses themeters set by the user to find the volume of a cylinder.
float findVolume(float height, float radius);
// The findSurfaceArea function uses the parameters set by the user to find the surface area of a cylinder.
float findSurfaceArea(float height, float radius);

/*
Main Function uses subfunctions to calculate volume and surface area.
Tells user the volume and surface area of the cylinder with a height of 3 and raduis of 4.
*/
int main()
{
    std::cout << "Lets make a cylinder!" << std::endl;
    float height = 3;
    float radius = 4;
    std::cout << "A cylinder with a Height of " << height << " and a Radius of " << radius << " has a Volume of " << findVolume(height, radius) << " and a Surface Area of " << findSurfaceArea(height, radius) <<std::endl;
    return 0;
}

//Function Definitions
//Defines findVolume
float findVolume(float height, float radius)
{
    return 3.14 * radius * radius * height;
}

//Defines findSurfaceArea
float findSurfaceArea(float height, float radius)
{
    return (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
}