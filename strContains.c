#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* This program tests for the occurrance of string 2 in
   string 1
*/

int main(void) {

    string str1 = get_string("Enter first string: ");
    string str2 = get_string("Enter second string: ");
    char *pointer;
    pointer = strstr(str1, str2);

    if (pointer == 0) {
        printf("The string does not exist\n");
        return 0;
    } else {
        printf("The string exists\n");
        return 1;
    }
}
