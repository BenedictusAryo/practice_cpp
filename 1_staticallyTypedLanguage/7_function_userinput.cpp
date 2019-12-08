#include <iostream>

float distance(int velocity, int time_elapse)
{
    return velocity * time_elapse;
}

int main()
{
    std::cout << "Distance Calculator" << std::endl;
    std::cout << "Insert Velocity: ";
    int velocity >> std::cin.get() << std::endl;
    std::cout << "Insert Time elapse: ";
    int time_elapse = std::cin.get();
    // std::endl;
    std::cout << "Distance is " << distance(velocity, time_elapse) << std::endl;
    std::cin.get();
    return 0;
}