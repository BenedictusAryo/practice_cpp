/*
*  Using Double vs Float in CPP
*/

#include <stdio.h>

int main()
{

    // define floating point numbers
    float float_num;
    float float_sum = 0;

    double double_num;
    double double_sum = 0;

    int divisions = 100000;

    printf("Result should be close to: 11.0\n\n");

    // divide the floating point numbers by divisions
    float_num = 11.0 / divisions;
    double_num = 11.0 / divisions;

    // sum the number by the number of divisions to see
    // how close the result get to 11.0
    for (int i = 0; i < divisions; i++)
    {
        float_sum = float_sum + float_num;
        double_sum = double_sum + double_num;
    }

    // print the result
    printf("Floating point sum: %.15g\n", float_sum);
    printf("Double sum: %.15g\n", double_sum);
}