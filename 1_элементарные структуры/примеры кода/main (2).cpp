#include <iostream>

int main() {

    //  Считываем массив
    int  N = 7;
    int massive[N];
    int max;
    FILE *file;
    int i=0;

    // Считываем из ФАЙЛА
    file = fopen("/Users/user/Desktop/Algo2022-23/task3/numbers.txt", "r");
    while (!feof ( file ) ) {
        fscanf(file,"%d", &massive[i]);
        i++;
    }
    fclose(file);
    max = massive [0];

    for  (i = 1; i < N;  i++) {
        if (massive [i] > max) {
            max = massive [i];
            }
        }

    //  Выводим массив

    for  (i = 0; i<N; i++)
        printf("elemen[%d]  %d\n", i, massive[i]);

    printf("max  %d\n", max);


    return 0;
}
