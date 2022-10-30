#include <iostream>

int main() {

    //  Считываем массив
    int  N = 5;
    int massive[N];
    int i;
    for  (i = 0; i<N; i++) {
        printf("%d  ", i);
        scanf("%d", &massive[i]);
    }

    //  Выводим массив
    for  (i = 0; i<N; i++) {
        printf("elemen[%d]  %d\n", i, massive[i]);
        }

    return 0;
}
