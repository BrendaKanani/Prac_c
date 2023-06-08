#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter students age\n");
    scanf("%d",&age);
    printf("I am %d years old\n", age);
    float pi;
    printf("Enter the value of pi\n");
    scanf("%f", &pi);
    printf("The value of pi is %f\n", pi);
    char grade;
    printf("Enter grade\n");
    scanf(" %c", &grade);
    printf("I had a %c grade\n", grade);
    return 0;
}
