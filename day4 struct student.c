#include<stdio.h>
struct student {
    char name[50];
    int age;
};

void display(struct student s);

int main() {
    struct student s1;

    printf("Enter Name: ");
    scanf("%s", &s1.Name);

    printf("Enter Age: ");
    scanf("%d", &s1.Age);

    display(s1);

    return 0;
}

void display(struct student s) {
    printf("\nDisplaying information\n");
    printf("Name: %s", s1.Name);
    printf("Age: %d", s1.Age);
}