// C++ code can only output 1 value
// Can also define without declaring first before main function
// Note: Note the best practice

#include <iostream>

float distance(float velocity, float time_elapsed)
{
    return velocity * time_elapsed;
}

int main()
{

    std::cout << distance(5, 4) << std::endl;
    std::cout << distance(12.1, 7.9) << std::endl;

    return 0;
}