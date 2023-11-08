#include <stdio.h>
float kmtomile(float num)
{
    return num / 1.609;
}
float inchtofoot(float num)
{
    return num / 12;
}
float cmtoinches(float num)
{
    return num / 2.54;
}
float poundtokg(float num)
{
    return num / 2.205;
}
float inchtometer(float num)
{
    return num / 39.37;
}
int main()
{
    int i = 1;
    while (i == 1)
    {
        float num;
        float a;
        int option;

        printf("enter the number whose conversion you want: ");
        scanf("%f", &num);
        printf("enter the number according to the list shown below to perform your conversion\n1. km to miles\n2. inches to foot\n3. cm to inches\n4. pounds to kg\n5. inches to meters\n");
        scanf("%d", &option);
        if (option == 1)
        {
            a = kmtomile(num);
        }
        else if (option == 2)
        {
            a = inchtofoot(num);
        }
        else if (option == 3)
        {
            a = cmtoinches(num);
        }
        else if (option == 4)
        {
            a = poundtokg(num);
        }
        else if (option == 5)
        {
            a = inchtometer(num);
        }
        printf("you have chosen the option %d and the number for conversion you entered was %f, the number after conversion is %f\n", option, num, a);
        printf("if you want to do more conversions then enter 1, else enter any other number: ");
        scanf("%d", &i);
    }

    return 0;
}