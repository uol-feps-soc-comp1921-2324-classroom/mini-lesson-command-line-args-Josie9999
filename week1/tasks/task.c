#include <stdio.h>
#include <stdlib.h>

/**
* Adds two numbers together
* argv[0] - what user has called file after -o in gcc
* argv[1] - first number
* argv[2] - second number
*/

int main(int argc, char *argv[]) {

    if (argc != 3){
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 0;
    }

    // Calculate and print the sum
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
