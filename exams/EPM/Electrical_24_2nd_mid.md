14. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    int arr[2][2][2] = {{{10, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
    int *p, *q;
    p = &arr[1][1][1];
    q = (int*)arr;
    printf("%d %d\n", *q, *p);
    return 0;
}
```
a. Compiler error
b. 10, 2
c. 10, 8 ✅
d. Garbage values
---
15. What is the ouput of the program?
```c
#include <stdio.h>
#define X (5 + 4)

int main()
{
    int x = 2;
    printf("%d", X * x);
    return 0;
}
```
a. Compiler error
b. Runtime error
c. 13
d. 18 ✅
---
**Consider the following NINE question regarding this piece of code**
```c
#include <stdio.h>

int N = 5;

// declaration of a function
/* 1 */
int max_min(int a[], int n, int *max, int *min);
/* 2 */
int *fun2()

int main()
{
    int b[N], big, small;
    int *p, *q, **w;
    w = &z; // pointer w is assigned the address of a variable z which is not declared
    p = &big;
    q = &small;

    /* 3 */
    // ask the user to enter N numbers
    for (int i = 0; i < N; i++)
        /* 4 */
    max_min(b + 1, N - 1, &big, &small);

    printf("%d\n", *&small); // *&small is meaningless; '&' has higher precedence than '*'
    printf("%d\n", *p);

    printf("%d\n", *z); // undeclared variable z
    printf("%d\n", *w); // referencing dangling pointer w
    printf("%d\n", &*w); // referencing dangling pointer w
    printf("%d\n", **w); // referencing dangling pointer w

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    /* 6 */
    *min = *max = *a;
    /* or it can be: *max = *min = a[0] */

    for (int i = 1; i < n - 1; i++) {
        if (a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];
    }
}
int *fun2(int *a, int *b)
{
    if (*a == *b)
        return a;
    else
        return b;
}
```
---
16. Variables n. N consider.......variables
a. Local, Local
b. Global, global
c. Local, global
d. Global, local
---
17. In (1), the function prototype should be
a. void max_min(int a[],int n, int max, int min);
b. void max_min (int , int , int \*, int \*);
c. void max_min(int a[], int n, int \\*max, int \\*min):
d. void max_min(int \*a[], int n, int \\*max, int \\*min);
---
18. In (2), the function prototype is
a. int \*fun(int \*, int \*);
b. int fun(int, int ):
c. int fun(int \*, int \*);
d. int \*fun(int max, int min);
---
19. In (3), ask the user to enter N variables..........
a. printf("enter N numbers ");
b. printf("enter %d numbers ", n);
c. printf("enter numbers", N);
d. printf("enter %d numbers ", N);
---
20. In (4), to take the value from the user you should write...
a. scanf("%d",&(b+i));
b. scanf("%d", (b+i));
c. scanf("%d",&b);                                     
d. scanf("%d", b[i]);
---
21. In (5), call the function which is name is fun2.
a. fun(p, q);
b. z = fun(small, big);
c. \*z = fun(p, q);
d. z = fun(\*p, \*q)
---
22. If the user filled the array with 5 4 3 2 1, the output of line 16 would be......
a. 5
b. 4
C. 2
d. 1
---
23. If the user filled thearray with 5 4 3 2 1, the output of line 17 would be.....
a. 5
b. 4
c. 2
d. 1
---
24. In (6), initialize the pointers (min and max) by the first value of the array (a).
a. \*max=\*min=\*a;
b. \*max=\*min=a[0];
c. (a) and (b)
d. \*max=\*min=a;
---
**Read the following incomplete program then answer the following FIFTEEN questions. The program prompts the user to enter an
integer and store it in the variable "max" then the program finds all the odd numbers from 0 to max, and stores them in an array
"A". The size of A is maximally 30.**

```c
#include <stdio.h> /* 1 */
#define length 30

/* 2 */
void FindOddArray(int A1[], int num);
int IsOdd(int value);

int main()
{
        /* 3 */
        int A[length], max;
        /* Could also be: int A[30], max; */

        scanf("%d", &max);
        FindOddArray(A, max);
        int count;
        if (IsOdd(max))
                count = (max + 1) / 2;
        else
                count = max / 2;
        for (int j = 0; j < count; ++j)
                printf("%d \t", A[j]);
        return 0;
}

                /* 5 */
void FindOddArray(int A1[], int num)
{
        /* 6 */
        int index = 0;

        if (IsOdd(num))
                A1[index] = num;
        else
                /* 7 */
                A1[index] = --num;
        /* 8 */
        while (num > 1)
        {
                /* 9 */
                ++index;
                num -= 2;
                A1[index] = num;
        }
}

/* 10 */
int IsOdd(int value)
{
        /* 11 */
        if (value % 2 == 0)
                return 0;
        else
                return 1;
}
```

25. In (1), ........... must be included.
a. math.h
b. string.h
c. stdio.h
d. (a) and (c)
---
26. (2) should be ...........
a. 2 Functions declaration
b. 2 Functions definition
c. A function declaration and a function definition
d. (a) and (b)
---
27. ........... must be written in (2)
a. void FindOddArray(int A1[], int num);
b. int\* FindOddArray(int A1, int num);
c. void FindOddArray(int A1, int num);
d. (a) and (b)
---
28. ........... must be written in (2).
a. void IsOdd(int*);
b. int IsOdd(int);
c. void FindOddArray(int [], int );
d. (b) or (c)
---
29. In (3), ...........
a. int A[], max;
b. int A[length], max;
c. int A[30], max;
d. (b) or (c)
---
30. In (5), ........... is a correct statement.
a. int A1
b. int \*A1
c. int \*\*A1
d. int []
---
31. In (6), ........... is a correct statement.
a. int index = 0;
b. int index = 1;
c. int index.num, \*A1
d. int index;
---
32. In (7), ........... is a correct statement
a. A1[index] = num--;
b. --num, A1[index] = num;
c. A1[index] = --num;
d. (b) or (c)
---
33. In (9), ........... must be written.
a. ++index; num -= 2; A1[index] = num;
b. ++index; A1[index] = --num;
c. ++index; A1[index] = num; num -= 2;
d. ++index; A1[index] = num--;
---
34. In (8), ........... must be written.
a. index < length
b. index <= length
c. num > 1
d. num > 0
---
35. In (10), ........... is the correct statement.
a. void IsOdd(int \*value)
b. int IsOdd(int value);
c. void IsOdd(int value)
d. int IsOdd(int value)
---
36. In (10), ........... is the correct statement.
a. void IsOdd(int);
b. int IsOdd(int);
c. void IsOdd(int\*);
d. int IsOdd(int\*);
---
37. In (1), ........... is the correct statement.
a. if (value%2!=0) return 1; else return -1;
b. if (value/2=1) return -1; else return 1;
c. if (value%2==0) return 0; else return 1;
d. (a) or (c)
---
38. In (1), ........... is the correct statement.
a. if (value%2!=0) return 1; else return 0;
b. if (value%2=0) return -1; else return 1;
c. if (value/2=1) return 0; else return 1;
d. (a) or (c)
---
39. Given that max = 8. After the execution of the program, ........... is displayed.
a. 1 3 5 7
b. 7 5 3 1 -1
c. 7 5 3 1
d. 3 5 7
---
40. For the following code, the output will be ...........
```c
void main() {
    struct student {
        int no;
        char name[20];
    };

    struct student s;
    s.no = 8;
    printf("%d", sizeof(s));
}
```
a. 21
b. 24
c. 22
d. (b) or (c)
