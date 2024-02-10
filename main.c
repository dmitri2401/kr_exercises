/*
#include <stdio.h>

int main()
{
    printf("Hello, World\n");
    printf("Line 2!\n");
    printf("Line 3!\n");
}
*/


/*
#include <stdio.h>

int main()
{
    int speed = 0;
    int time = 0;
    printf("Speed: ");
    scanf("%d", &speed);
    printf("Time: ");
    scanf("%d", &time);

    int distance = speed * time;

    printf("dist: %d\n", distance);
}
*/


/*
#include <stdio.h>

int main()
{
    float x = 5.2;
    double y = -9.8;

    printf("x: ");
    scanf("%f", &x);
    printf("x: %f\n", x);

    printf("y: ");
    scanf("%lf", &y);
    printf("y: %f\n", y);
}
*/


/*
#include <stdio.h>

int main()
{
    printf("c: ");
    scanf("%c", &c);
    printf("c: %c\n", c);
    printf("c: %d\n", c);
}
*/


/*
#include <stdio.h>

int main()
{
    double x = 5.2, y = 2.5;

    double mult = x * y;
    double add = x + y;
    double div = x / y;
    double sub = x - y;

    printf("mult: %f\n", mult);
    printf("add: %f\n", add);
    printf("div: %f\n", div);
    printf("sub: %f\n", sub);

}
*/


/*
#include <stdio.h>

int main()
{
    int x = 11, y = 3;
    
    int div = x / y;
    int mod = x % y;

    printf("div: %d\n", div);
    printf("mod: %d\n", mod);
}
*/

/*
#include <stdio.h>

int main()
{
    int x = 11;

    int mod = x % 2;

    printf("mod: %d\n", mod);
}
*/


/*
#include <stdio.h>

int main()
{
    int grade = 0;
    printf("Grade: ");
    scanf("%d", &grade);

    if (grade >= 50)
{
    printf("Pass\n");
    printf("Congrats!\n");
}
    else
{
    printf("Fail\n");
    printf("Good luck next time!\n");
}
    printf("If done\n");
}
*/


/*
#include <stdio.h>

int main()
{
    int grade = 0;
    printf("Grade: ");
    scanf("%d", &grade);

    if (grade >= 90) printf("A\n");
       else if  (grade >= 80) printf("B\n");
       else if  (grade >= 70) printf("C\n");
       else if  (grade >= 60) printf("D\n");
       else printf("Fail\n");
}
*/



/*
#include <stdio.h>

int main()
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);

    int weight = 0;
    printf("weight: ");
    scanf("%d", &weight);

    if (height > 150 || weight > 50)
        printf("Good to ride!\n");
    else 
        printf("Not good to ride!\n");
}
*/


/*
#include <stdio.h>

int main()
{
    int height = 0;
    printf("height: ");
    scanf("%d", &height);

    if (! (height > 150) )
        printf("Not tall enought!\n");
    else 
        printf("Tall enought!\n");
}
*/



/*
#include <stdio.h>

int main()
{
    int i = 0;
   
    while (i < 5)
    {
        printf("i: %d\n", i);
        i++;                       //or i = i + 1 or 1 += 1
    }
}

*/



/*
#include <stdio.h>

int main()
{
    int i = 0;
    int number = 0;
    int total = 0;
    int total_numbers = 0;

    printf("How many numbers: ");
    scanf("%d", &total_numbers);
   
    while (i < total_numbers)
    {
        printf("Enter Number %d: ", i+1);
        scanf("%d", &number);
        total = total + number;
        i++;
    }
        printf("total: %d\n", total);
        printf("average: %d\n", total / total_numbers);
}
*/


/*
#include <stdio.h>

int main()
{
    int number = 0;
    int max = -1;

    while (number != -1)
    {
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number > max) max = number;
    printf("max: %d\n", max);
    }
    printf("max: %d\n", max);
}
*/


/*
#include <stdio.h>

int main()
{
    int i = 25;

    while (i < 20)
    {
        printf("i: %d\n", i);
        i--;
    }
}
*/


/*
#include <stdio.h>

int main()
{
    int i = 25;

    do
    {
        printf("i; %d\n", i);
        i++;
    }
    while (i < 5);
}
*/


/*
#include <stdio.h>

int main()
{
    int number = 0;

    do
    {
        printf("Enter number (>0): ");
        scanf("%d", &number);
        if (number <= 0)
        printf("Number must be >0!\n");
    }
    while (number <= 0);
    
}
*/


/*
#include <stdio.h>

int main()
{
    
    for (int i = 0; i < 5; i++)
        printf("i: %d\n", i);

}
*/


#include <stdio.h>

int main()
{
    double initial = 0, step = 0, stop = 0;

    do
    {
        printf("Initial (m): ");
        scanf("%lf", &initial);
        if (initial < 0) printf("Must be >= 0!\n");
    }
        while (initial < 0);

    do
    {
        printf("Step (m): ");
        scanf("%lf", &step);
        if (step <= 0) printf("Must be > 0!\n");
    }
        while (step <= 0);

    do
    {
        printf("Stop (m): ");
        scanf("%lf", &stop);
        if (stop < 0) printf("Must be >= 0!\n");
    }
        while (stop < 0);

        printf("\n");
        for (double conv = initial;
             conv <= stop;
             conv += step)
    {
        printf("%f %f\n", conv, conv * 3.28084);
    }
}