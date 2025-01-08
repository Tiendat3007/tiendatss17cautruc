#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;

    printf("Nhap thong tin sinh vien:\n");
    printf("Hay nhap ten: ");
    fgets(student.name, sizeof(student.name), stdin);
    if (student.name[strlen(student.name) - 1] == '\n') {
        student.name[strlen(student.name) - 1] = '\0'; 
    }
    printf("Hay nhap tuoi: ");
    scanf("%d", &student.age);
    printf("Nhap so dien thoai: ");
    scanf("%s", student.phoneNumber);
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Phone Number: %s\n", student.phoneNumber);

    return 0;
}

