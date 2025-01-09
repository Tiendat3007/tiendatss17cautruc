#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5

typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} Student;

void XoaStudent(int id,Student students[], int *currentLength) {
    int found = 0;
    for (int i= 0;i<*currentLength; i++) {
        if (students[i].id == id) {
            found= 1;
            for (int j= i;j<*currentLength - 1; j++) {
                students[j]= students[j + 1];
            }
            (*currentLength)--;
            break;
        }
    }
    if (found) {
        printf("sinh vien co id = %d da duoc xoa!\n", id);
    } else {
        printf("khong tim thay sinh vien co id = %d!\n", id);
    }
}

void printStudents(Student students[], int currentLength) {
    printf("danh sach sinh vien:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("ID: %d\t ten: %s\t tuoi: %d\t sdt: %s\n",students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int main() {
    Student students[MAX_SIZE] = {
        {1, "nguyen van chinh", 18, "0132895122"},
        {2, "le thi huyen yen", 18, "1111234478"},
        {3, "vu hoang mai", 16, "0399857418"},
        {4, " thi aaaaaaaaa", 11, "0987461231"},
        {5, "van Eeeeeeeeeee", 13, "0937417323"}
    };

    int currentLength = 5;
    int idToDelete;
    printStudents(students, currentLength);
    printf("Nhap id sinh vien muon xoa: ");
    scanf("%d", &idToDelete);
    XoaStudent(idToDelete, students, &currentLength);
    printStudents(students, currentLength);

    return 0;
}

