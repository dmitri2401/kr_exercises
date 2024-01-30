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
}



