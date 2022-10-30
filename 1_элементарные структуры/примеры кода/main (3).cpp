#include <iostream>

int main() {
    char string1 [6] = {'H', 'e', 'l', 'l', 'o', '!'};
    char string2 [7] = "Hello!";

    //вывести массив символов
    for  (int i = 0; i < 6;  i++)
         printf ("%c\n", string1 [i]);

    //вывести строку
    printf ("%s", string2 );

    return 0;
}
