#include <cs50.h>
#include <ctype.h>
#include <stdio.h>


/* This program returns the sum of all odd Fibonacci numbers
   that are less than or equal an integer entered as a command-line argument
*/

int sumFibs(int num);

int main(int argc, string argv[]) {

    if (argc != 2) {
        printf("Missing command-line argument\n");
        printf("Usage: ./sumFibs #\n");
        return 1;
    }

    int num = atoi(argv[1]);

    printf("%i\n", sumFibs(num));
    return 0;
}

int sumFibs(num) {

    int result = 0;
    int previousNum = 0;
    int currentNum = 1;

    while (currentNum <= num) {
        if ((currentNum % 2) != 0) {
            result = result + currentNum;
        }

        currentNum = currentNum + previousNum;
        previousNum = currentNum - previousNum;
    }

    return result;
}