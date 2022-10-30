#include <iostream>

int  main() {
    int massive[10] = {1, 2, 5, 3, 9, 6, 7, 7, 2, 4};
    int i;
    int max;

    max = massive[0];
    for (i = 1; i<10; i++) {
        if (massive[i] > max) {
            max = massive[i];
        }
    }
    printf("max element is %d", max);

    return 0;
}
