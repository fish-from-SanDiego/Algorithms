#include <iostream>

int main() {
    // структура для описания студента
    struct student {
        char name[50]={};
        int course;
        char group[6]={};
        int age;
        int code_isu;
    };

    int N = 7;
    int i,j;
    struct student students [N] ;
    FILE *file;

    // Считываем из ФАЙЛА
    file = fopen("/Users/user/Desktop/Algo2022-23/task7/students.txt", "r");
    i=0;
    while (!feof(file)) {
         fscanf (file,"%s", &students[i].name);
         fscanf (file,"%d", &students [i].course);
         fscanf (file,"%d", &students [i].age);
         fscanf (file,"%s", &students [i].group);
         fscanf (file,"%d", &students [i].code_isu);
         i++;
    }
    fclose(file);


    // найдем длины имен
    for (i = 0; i<N; i++) {
         j=0;
         while (students[i].name[j] !='\0' ) j++;
         printf ("длина %d имени %s студента с кодом %d \n",j, students[i].name , students[i].code_isu);
    }

    // найдем самого старшего студента по возрасту
    int max = students[0].age;
    int save_old_student=0;
    for (i = 1; i < N; i++) {
        if (students[i].age > max) {
            max = students[i].age;
            save_old_student=i;
            }
        }
    printf ("максимальный возраст %d студента по имени %s",max,students[save_old_student].name);

    return 0;
}
