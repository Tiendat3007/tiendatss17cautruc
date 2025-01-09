#include <stdio.h>
#include <string.h>
#define MAX_SIZE 5

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;
void sapXepTenSV(Student students[], int currentLength) {
    Student temp;
    for (int i = 0; i < currentLength - 1; i++) {
        for (int j = i + 1; j < currentLength; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
void printStudents(Student students[], int currentLength) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n",students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    Student students[MAX_SIZE] = {
        {1, "nguyen van chinh", 18, "0132895122"},
        {2, "le thi huyen bong", 18, "1111234478"},
        {3, "vu hoang mai", 16, "0399857418"},
        {4, " thi aaaaaaaaa", 11, "0987461231"},
        {5, "van Eeeeeeeeeee", 13, "0937417323"}
    };
    int currentLength = 5;
    printf("Danh sach sinh vien ban dau:\n");
    printStudents(students, currentLength);
    sapXepTenSV(students, currentLength);
    printf("\nDanh sach sinh vien sau khi sap xep:\n");
    printStudents(students, currentLength);

    return 0;
}

