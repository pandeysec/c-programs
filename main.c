
#include <stdio.h>

int main() {

    int i;
    float a[5], per, min, max, s = 0;

    printf("\nEnter your marks\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%f", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        s = s + a[i];
    }

    per = (s / 500) * 100;

    max = a[0];
    min = a[0];

    for(i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("\nTotal marks is %.2f\n", s);
    printf("Percentage is %.2f\n", per);
    printf("Maximum is = %.2f\n", max);
    printf("Minimum is = %.2f\n", min);

    if(per >= 90)
    {
        printf("You got A+ grade");
    }
    else if(per >= 80)
    {
        printf("You got A grade");
    }
    else if(per >= 70)
    {
        printf("You got B grade");
    }
    else if(per >= 60)
    {
        printf("You got C grade");
    }
    else if(per >= 40)
    {
        printf("You got D grade");
    }
    else
    {
        printf("Oh you got fail");
    }

    return 0;
}