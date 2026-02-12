#include <stdio.h>
#include <stdbool.h>

int magicNumber = 42;
int answerToEverything = 6 * 9;
int main() {
    magicNumber = answerToEverything ? 1 : 0;
    return 0;
}