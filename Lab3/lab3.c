#include <stdio.h>

int main() {
    int num1;
    scanf("%i", &num1);
    int num1p0 = num1; // for loop will count up to num1p0 from a 1 i variable.
    int num1p1 = 1; // while loop will use a 0 variable and count up to num1.
    int num1p2 = 1; // do-while loop will use a 0 variable and count up to num1.

    for(int i = 1; i <= num1p0; i++) {
        printf("For %i\n", i);
    }

    while(num1p1 <= num1) {
        printf("While %i\n", num1p1);
        num1p1++;
    }

    do {
        printf("Do-while %i\n", num1p2);
        num1p2++;
    } while(num1p2 <= num1);
    
    return 0;
}