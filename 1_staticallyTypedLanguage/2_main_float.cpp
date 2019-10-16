#include <iostream>

int main()
{

    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the
    // second floating point number.
    float first_float = 12.07;
    float second_float = 65.102;
    std::cout << "First Float variables: " << first_float << std::endl;
    std::cout << "Second Float variables: " << second_float << "\n"
              << std::endl;

    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.
    float float_sum;
    float_sum = first_float + second_float;
    std::cout << "Sum of variables: " << float_sum << std::endl;

    // TODO: Calculate difference between the second and first number
    // output the results to cout.
    float float_dif;
    float_dif = second_float - first_float;
    std::cout << "Difference between second and first var: " << float_dif << std::endl;

    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float float_div;
    float_div = second_float / first_float;
    std::cout << "Second variables divided by First variables: " << float_div << std::endl;

    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float float_product;
    float_product = first_float * second_float;
    std::cout << "Product of two numbers : " << float_product << std::endl;

    return 0;
}