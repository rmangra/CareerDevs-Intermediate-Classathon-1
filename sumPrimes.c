#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

/* This program checks for all the prime numbers up to
   and including the integer provided as a command-line argument
   and sums them.
*/

int checkPrime(int num);
int sumPrimes(int num);

int main(int argc, string argv[]) {

    if (argc != 2) {
        printf("Missing command-line argument\n");
        printf("Usage: ./sumPrimes #\n");
        return 1;
    }

    int num = atoi(argv[1]);

    printf("%i\n", sumPrimes(num));
    return 0;
}

int checkPrime(int num) {
  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int sumPrimes(int num) {
  int sum = 0;
  for (int i = 2; i <= num; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}