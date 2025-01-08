#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50];

    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;

        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Nhap ten: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        if (students[i].name[strlen(students[i].name) - 1] == '\n') {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }

        printf("Nhap tuoi: ");
        scanf("%d", &students[i].age);

        printf("Nhap so dien thoai: ");
        scanf("%s", students[i].phoneNumber);

        printf("\n");
    }

    printf("\nDanh sach sinh vien vua nhap:\n");
    for (int i = 0; i < 5; i++) {
    	printf("Sinh vien %d:\n", i+1);
        printf("ID cua sinh vien laf %d:\n", students[i].id);
        printf("  Name: %s\n", students[i].name);
        printf("  Age: %d\n", students[i].age);
        printf("  Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

