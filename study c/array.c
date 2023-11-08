#include <stdio.h>
int main()
{

    int marks[2][5];
    for (int i = 0; i < 2; i++)
    {
        printf("enter the marks of the student %d:\n",i+1);
        for (int j = 0; j < 5; j++)
        {
            printf("sbject %d  :", j + 1);
            scanf("%d",&marks[i][j]);
        }
   
    }
    printf("the marks of student 1 & 2 are \n");
    for (int i = 0; i <= 1; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            printf("  %d  ",marks[i][j]);
            
            
        }
        printf("\n");
    }
    return 0;
}