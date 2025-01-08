#include <stdio.h>
#include <string.h>

struct Student {
	//thong tin cua sinh vien
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student student;
    strcpy(student.name, "tien dat");
    student.age = 18;
    strcpy(student.phoneNumber, "0399857418");
//in
    printf(" cac thong tin cua sinh vien:\n");
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("phone number: %s\n", student.phoneNumber);

    return 0;
}

