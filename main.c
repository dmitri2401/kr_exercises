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


/*
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
        printf("Meters    Feet\n");
        printf("*********************\n");
        for (double conv = initial;
             conv <= stop;
             conv += step)
    {
        printf("%-10.2f %-10.2f\n",
        conv,
        conv * 3.28084);
    }
    printf("\n");
}
*/


/*
#include <stdio.h>

int main()
{

    int number = 0;

    switch (number)
    {
        case 0:
        printf("Case 0!\n");

        case 1:
        printf("Case 1!\n");
        break;
        
        case 2:
        printf("Case 2!\n");
    }
    printf("Switch over!\n");
}
*/


/*
#include <stdio.h>

int main()
{
    int grade[] = {92, 85, 72, 73, 95};


    // grade[2] = grade[2] + 5;

    for (int i = 0; i < 5; i++)
    printf("grade[%d] = %d\n", i, grade[i]);

    int total  = 0;
    for (int i = 0; i < 5; i++)
    total += grade[i];
    printf("average: %d\n", total / 5);

}
*/


/*
#include <stdio.h>

int main()
{
    char mydata[5];
    mydata[0] = 'a';
    mydata[1] = 'b';
    mydata[2] = 'c';
    mydata[3] = 'd';
    mydata[4] = '\0';

    printf("mydata[2] = %c\n", mydata[2]);

    printf("\n%s\n", mydata);
}
*/



/*
#include <stdio.h>

int main()
{
    char s1[] = "This is my string.";

    for (int i = 0; i < 19; i++)
    {
        if (s1[i] == '\0')
        printf("s1[%d] = \\0 \n", i);
        else
        printf("s1[%d] = %c\n", i, s1[i]);
    }
    
    printf("\n%s\n", s1);
}
*/



/*
#include <stdio.h>

int main()
{
    char s1[20];

    printf("Enter: ");
    scanf("%s", s1);

    for (int i = 0; i < 20; i++)
    printf("s1[%d] = %c\n", i, s1[i]);

    printf("s1: %s\n", s1);
}
*/



/*
#include <stdio.h>

int main()
{
    char s1[20];

    printf("Enter: ");
    scanf("%s", s1);

    int i = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] == '0')
        printf("found 0\n");
        i++;
    }

    printf("s1: %s\n", s1);
}
*/


/*
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "This is the way.";

    int length = strlen(s1);
    int num_is = 0;

    for (int i = 0; i < length; i++)
    if (s1[i] == 'i') num_is++;

    printf("length: %d\n", length);
    printf("Number of is: %d\n", num_is);

}
*/


/*
#include <stdio.h>
#include <string.h>

int main()
    {
        char s1[50] = "The first sentence. ";
        char s2[] = "The secont sentence.";

        strcat(s1, s2);

        printf("s1: %s\n", s1);
    }
*/


/*
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "This is a string.";
    char s2[] = "This is A string.";

    if (strcmp(s1,s2) == 0)
        printf("s1 and s2 are equal\n");
    else
        printf("s1 and s2 aren't equal\n");
}
*/


/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[] = "This IS tHe WaY.";

    // s[0] = tolower(s[0]);

    // printf("s: %s\n", s);

    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        printf("%c ", s[i]);
        if (isupper(s[i]))
            printf("upper\n");
        else if (islower(s[i]))
            printf("lower\n");
        else printf("\n");

    }
}
*/



/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[] = "This IS tHe WaY.";

    printf("s: %s\n", s);

    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }
    printf("s: %s\n", s);
}
*/


/*
#include <stdio.h>

int find_max(int a, int b);

int main()
{
   int result = find_max(10, 12) + 10;
   printf("result: %d\n", result);
}

int find_max(int a, int b)
{
    if (a > b) return a;
    else return b;
}
*/


/*
#include <stdio.h>

float triple(float n);

int main()
{
    float x = 5.0;
    x = triple(x);
    printf("x: %f\n", x);
}

float triple(float n)
{
    n = n * 3;
}
*/


/*
#include <stdio.h>

double add(double x, double y);
double power(double x, int n);

int main()
{
    printf("%f\n", power(2,3));
    printf("%f\n", power(2,1));
    printf("%f\n", power(5.8,9));
}

double mult(double x, double y) { return x * y; }

double power(double x, int n)
{
    double result = x;
    for (int i = 1; i < n; i++)
    {
        result = mult(result, x);
    }
    return result;
}
*/


/*
#include <stdio.h>

void print_two(float a, float b);

int main()
{
    float x = 2.5, y = 4.2;
    print_two(x, y);
}

void print_two(float a, float b)
{
    printf("%f\n%f\n", a, b);
}
*/


/*
#include <stdio.h>

void add_one(int array[], int length);

int main()
{
    int a[] = {2,4,9,1,3,5};
    int x = 5;

    add_one(a, x);

    printf("a: %p\n", a);

    add_one(a, 6);
    for (int i = 0; i < 6; i++)
        printf("a[%d]=%d\n", i, a[i]);
}

void add_one(int array[], int length)
{
    printf("array: %p\n", array);
    for (int i = 0; i < length; i++) array[i] += 1;
}
*/



/*
#include<stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    int *p;
    p = &b;
    printf("p: %p\n", p);
    printf("&b: %p\n", &b);
    printf("&a: %p\n", &a);
    p = &a;
    printf("p: %p\n", p);
    *p = *p + 1;
    printf("a: %d\n", a);
}
*/


/*
#include <stdio.h>

void add_one(int *a);

int main()
{
    int b = 5;
    printf("&b: %p\n", &b);
    add_one(&b);
    printf("b: %d\n", b);
}

void add_one(int *a)
{
    printf("a: %p\n", a);
    *a = *a + 1;
}
*/


/*
#include <stdio.h>

void add_one(int *a, int *b, int *c);

int main()
{
    int x1 = 1, x2 = 2, x3 = 3;
    add_one(&x1, &x2, &x3);
    printf("x1: %d\n", x1);
    printf("x2: %d\n", x2);
    printf("x3: %d\n", x3);
}

void add_one(int *a, int *b, int *c)
{
    *a = *a + 1;
    *b = *b + 1;
    *c = *c + 1;
}
*/


/*
#include <stdio.h>

void add_one(int array[], int length);

int main()
{
    int a[] = {1,2,3};
    add_one(a, 3);
    for (int i = 0; i < 3; i++)
    printf("a[%d]=%d\n", i, a[i]);
}

void add_one(int array[], int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}
*/



/*
#include <stdio.h>

void add_one(int *array, int length);

int main()
{
    int a[] = {1,2,3};
    int *p;
    p = a;
    
    printf("p: %p\n", p);
    printf("a: %p\n", a);

    printf("p[2] = %d\n", p[2]);
    printf("a[2] = %d\n", a[2]);

    printf("*(p + 1) = %d\n", *(p + 1));
    printf("*(p + 2) = %d\n", *(p + 2));

    printf("*(a + 1) = %d\n", *(a + 1));
    printf("*(a + 2) = %d\n", *(a + 2));
}

void add_one(int *array, int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}
*/



/*
#include <stdio.h>

void add_one(int *array, int length);

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    add_one(a + 5, 5);
    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
    
    
}

void add_one(int *array, int length)
{
    for (int i = 0; i < length; i++)
        array[i] += 1;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    
    a = malloc( sizeof(int) * 5 );
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

}
*/



/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    
    a = calloc( 5, sizeof(int) );
    a[0] = 1;
    a[1] = 5;
    a[2] = 7;
    a[3] = 9;
    a[4] = 11;
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    free(a);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numbers;
    int size = 2;
    numbers = malloc( sizeof(int) * size );
    int input = 0, i = 0;
    do
    {
        if (i == size)
        {
            size += 2;
            numbers = realloc(numbers, sizeof(int)*size);
            printf("Realloc for %d ints\n", size);
        }
        printf("Enter (-1 to q): ");
        scanf("%d", &input);
        if (input != -1)
        {
            numbers[i] = input;
            i++;
        }
    } while (input != -1);
    
    int num_elements = i;
    int total = 0;
    for (int j = 0; j < num_elements; j++)
        total += numbers[j];

    printf("average: %d\n", total / num_elements);

    free(numbers);
}
*/


/*
#include <stdio.h>

typedef int inches;

int main()
{
    inches person1 = 181;
    inches person2 = 179;

    printf("person1: %d\n", person1);
    printf("person2: %d\n", person2);

}
*/



/*
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    struct Point p1;
    p1.x = 5;
    p1.y = 3;
    printf("(%d, %d)\n", p1.x, p1.y);

    struct Point p2;
    p2.x = 10;
    p2.y = 4;
    printf("(%d, %d)\n", p2.x, p2.y);

    struct Point p3 = {1,2};
    printf("(%d, %d)\n", p3.x, p3.y);

    struct Point p4 = 
    {.y = 7,
     .x = 6
    };
    printf("(%d, %d)\n", p4.x, p4.y);

}
*/


/*
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p1 = {.x = 6, .y = 9};
    printf("(%d, %d)\n", p1.x, p1.y);
}
*/



/*
#include <stdio.h>
#include <string.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} Student;

void print_student(Student s);

int main()
{
    Student s1;
    s1.age = 20;
    strcpy(s1.first_name, "Devon");
    strcpy(s1.last_name, "Smith");
    
    print_student(s1);
    printf("\nAge: %d\n", s1.age);

}

void print_student(Student s)
{
    printf("%s %s\n", s.first_name,
                      s.last_name);
    printf("Age: %d\n", s.age);
    s.age = 25;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char first_name[50];
    char last_name[50];
    int age;
} Student;

void print_student(Student s);
void age_student(Student *s);

int main()
{
    Student *s1;

    s1 = calloc(1, sizeof(Student));
    s1->age = 20;
    printf("Age: %d\n", s1->age);
    age_student(s1);
    printf("Age: %d\n", s1->age);

    free(s1);

}

void age_student(Student *s)
{
    s->age += 1;
}

void print_student(Student s)
{
    printf("%s %s\n", s.first_name,
                      s.last_name);
    printf("Age: %d\n", s.age);
    s.age = 25;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int data1;
    int data2;
} Info;

int main()
{
    Info a;
    a.data1 = 7;
    a.data2 = 10;
    Info b;
    b = a;
    printf("b.data1: %d\n", b.data1);
    printf("b.data2: %d\n", b.data2);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int data1;
    int *array;
} Info;

int main()
{
    Info a;
    a.data1 = 7;
    a.array = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)
        a.array[i] = i + 1;
    Info b = a;
    printf("b.data1: %d\n", b.data1);
    for (int i = 0; i < 5; i++)
        printf("b.array[%d] = %d\n", i, b.array[i]);

    printf("a.array: %p\n", a.array);
    printf("b.array: %p\n", b.array);

    b.array[0] = 10;
    for (int i = 0; i < 5; i++)
        printf("a.array[%d] = %d\n", i, a.array[i]);

    free(a.array);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int data[2][3] = { {1,2,3},
                       {4,5,6} };

    printf("data[1][1]=%d\n", data[1][1]);
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 3
#define COLS 3

int main()
{
    int data[3][3] = { {1,2,3},
                       {4,5,6},
                       {7,8,9} };

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            printf("data[%d][%d] = %d\n", i, j,
                                        data[i][j]);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 2
#define COLS 3

int main()
{
    int data[3][3] = { {1,2,3},
                       {4,5,6} };

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            printf("data[%d][%d] = %d\n", i, j,
                                        data[i][j]);
}
*/



/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROWS 2
#define COLS 3

void print_array(int data[ROWS][COLS]);
void input_array(int data [ROWS][COLS]);

int main()
{
    int data[ROWS][COLS] = { 0 };
    
    input_array(data);
    print_array(data);

}

void input_array(int data [ROWS][COLS])
{

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            printf("data[%d][%d] = ", i, j);
            scanf("%d", &data[i][j]);
        }

}

void print_array(int data[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            printf("data[%d][%d] = %d\n", i, j,
                                        data[i][j]);
}
*/




#include <stdio.h>

int main()
{

    return 1;
}