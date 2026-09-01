#include <iostream>

float findVolume(int height, int radius);
float findSurfaceArea(int height, int radius);

int main()
{
    std::cout << "Lets make a cylinder!" << std::endl;
    std::cout << "Enter a Height: " << std::endl;
    float height;
    std::cin >> height;
    std::cout << "Enter a Radius: " << std::endl;
    float radius;
    std::cin >> radius;
    std::cout << "A cylinder with a Height of " << height << " and a Radius of " << radius << " has a Volume of " << findVolume(height, radius) << " and a Surface Area of " << findSurfaceArea(height, radius) <<std::endl;
    return 0;
}

float findVolume(int height, int radius)
{
    return 3.14 * radius * radius * height;
}

float findSurfaceArea(int height, int radius)
{
    return (2 * 3.14 * radius * height) + (2 * 3.14 * radius * radius);
}