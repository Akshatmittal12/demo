#include<stdio.h>
int main(){
    int age;
    printf("enetr your age:\n");
    scanf("%d",&age);
    switch (age)
    {
    case 3:
        printf("age is 3 \n");
        break;
        
    case 13:
        printf("age is 13 \n");
        break;
        
    case 23:
        printf("age is 23 \n");
        break;
    default:
        printf("age is not 3,13 or 23");
        break;
    }
    return 0;
}