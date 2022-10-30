#include <iostream>

int main() {

    //  ПЕРЕВОРОТ МАССИВА
    int N = 10;
    int massive[N];
    int max;
    FILE *file;
    int i = 0;

    // Считываем из ФАЙЛА
    file = fopen("/Users/user/Desktop/Algo2022-23/task6/numbers.txt", "r");
    while (!feof(file)) {
        fscanf(file, "%d", &massive[i]);
        i++;
    }
    fclose(file);


    // Показываем массив
    printf("Массив: \n");
    for (i = 0; i < N; i++)
        printf("[%d]: %d ", i, massive[i]);


    printf("\nРазвернем методом 1\n");
    int reverse[N];
    for (i = 0; i < N; i++)
        reverse[i] = massive[N - i - 1];

    for (i = 0; i < N; i++)
        printf("[%d]: %d ", i, reverse[i]);


    printf("\nРазвернем методом 2\n");
    int temp;
    for (i = 0; i < N / 2; i++){
        temp = massive[i];
        massive[i] = massive[N - i - 1];
        massive[N - i - 1] = temp;
    }

    for  (i = 0; i<N; i++)
        printf("[%d]: %d ", i, massive[i]);




    return 0;
}
