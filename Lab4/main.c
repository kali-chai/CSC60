#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Running %1s with arguments %2s.\n", argv[0], argv[1]);

    while (1) {
        int value;
        printf("Enter an integer:");

        if (scanf("%d", &value) != 1) {
            int ch;
            printf("That doesn't look like an integer. Please try again.\n");
            while ((ch = getchar()) != '\n' && ch != EOF) {
            }
            continue;
        }

        if (value == 0) {
            break;
        }

        printf("The square of %1d is %2d\nThe next num of %1d is %3d\nThe half of %1d is %4.2f\n", value, fun1(value), fun2(value), fun3(value));
    }

    return 0;
}
