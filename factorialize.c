#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

/* This program returns the factorial of an integer
   provided as a command-line argument*/

long long factorialize(int num);

int main(int argc, string argv[]) {

    if (argc != 2) {
        printf("Missing command-line argument\n");
        printf("Usage: ./factorialize #\n");
        return 1;
    }

    int num = atoi(argv[1]);

    printf("%lli\n", factorialize(num));
    return 0;
}

long long factorialize(int num) {

  if (num == 0) {
    return 1;
  } else {
    return (num * factorialize(num - 1));
  }
}
