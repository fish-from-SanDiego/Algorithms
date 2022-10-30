#include <iostream>

int main() {

    int  N = 3;
    char string1 [N] ;
    char string2 [N] ;
    char string3 [N] ;

    printf("Введите стоку из %d символов: " , N);
    fgets(string1, N+1, stdin);
    fflush(stdin);

    printf("Введите стоку из %d символов: " , N);
    for  (int i = 0; i<N; i++)
        scanf("%c", &string2[i]);

    printf("Введите стоку из %d символов: " , N);
    scanf ("%s", &string3);



    //вывести строку
    printf ("%s\n", string1);
    //вывести строку
    printf ("%s\n", string2);
    //вывести строку
    puts (string3);

}
