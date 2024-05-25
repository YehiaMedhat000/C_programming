### 1. What is the output of the following program?
```c
#include<stdio.h>

int main()
{
        int x=10;
        int y=5;
        int result=1;

        while (y>0) { result*=x;y--; }

        printf("%d\n", result);
        return 0;
}
```
a. 1000\
b. 10000\
c. 100000 ✅\
d. 1000000
---
**The following function implements Fibonacci series algorithm, which is 2, 3, 5, 8, 13, 21,....., answer the following FOUR questions.**
```c
#include<stdio.h>

void Fibonacci (int m)
{
        static int m1=0,m2=1,m3=0;

        /* 0 */
        if (m > 0)
        {
                m1 = m2; /* 1 */
                m2 = m3; /* 2 */
                m3 = m1 + m2; /* 3 */
                printf("%d", m3);
                Fibonacci(m - 1); /* 4 */
        }
}

/* Function to test output */
int main()
{
    /* Play with the number as you like */
    Fibonacci(10);
    return 0;
}
```
---
### 2. Complete number (4) by one of the following:

a. `return Fibonacci(m - 1);`\
b. `Fibonacci(m-1);` ✅\
c. `return Fibonacci(m3 - 1);`\
d. `Fibonacci(m3 - 1);`
---
### 3. Complete number (1) by one of the following:

a. `m3 = m1 + m2;`\
b. `m1 = m2;` ✅\
c. `m2 = m3;`\
d. `m = m - 1;`
---
### 4. Complete number (3) by one of the following:

a. `m3 = m1 + m2;` ✅\
b. `m1 = m2;`\
c. `m2 = m3;`\
d. `m = m - 1;`
---
### 5. Complete number (0) by one of the following:

a. `m == 0`\
b. `m3 == 0`\
c. `m > 0` ✅\
d. `m3 > 0`
---
### 6. What is the output of the program?
```c
/* No #include */
int fun (int x, int y)
{
        if (x==0) return y;
        return fun (x-2, x+y);
}
int main()
{
        printf("%d", fun (8, 6));
        return 0;
}
```
a. 33\
b. 26\
c. 29\
d. compile error ✅
---
### 7. What is the output of the program if the user inputs 5?
```c
#include<stdio.h>

int main()
{
        int x=1,i,n;

        printf ("Enter a number");
        scanf("%d", &n);

        for (i = 1 ; i <= n ; i++) { x=x*i; }
        printf("%d",x);

        return 0;
}
```
a. compiler error\
b. 720\
c. 240\
d. 24\
f. ✅
---
### 8. What will be the output of the program?
```c
#include <stdio.h>

void modifyArray(int* arr);

int main(void)
{
    int arr[3] = {10, 20, 30};
    modifyArray(arr);
    printf("%d", arr[1]);
    return 0;
}

void modifyArray(int* arr)
{
    arr[1] = arr[1] + 10;
    printf("%d ", arr[2]);
}
```
a. 30 20\
b. 30 30 ✅\
c. 40 20\
d. 40 30
---
### 9. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    int arr2d[][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3] = arr2d;
    printf("%d %d ", ptr[0][0], ptr[1][0]);
    ++ptr;
    printf("%d %d\n", ptr[0][1], ptr[0][2]);
    return 0;
}
```
a. 1 4 5 6 ✅\
b. 1 4 2 3\
c. 2 5 5 6\
d. 1 5 6 4
---
###  10. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    int a=-1, b=1, c=0, result;
    result = (++a || ++b) || (++c);
    printf("%d, %d, %d, %d\n", a, b, c, result);
    return 0;
}
```
a. 0, 2, 1, 1\
b. -3, 2, 0, 1\
c. 2, 3, 0, 1\
d. 0, 2, 0, 1 ✅
---
### 11. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    int i=0;
    for(i=0; i<10; i++) {
        switch(i) {
            case 0: i+=3;
            case 1: i+=2;
            case 5: i+=3;
            default: i+=2;
            break;
        }
        printf("%d ", i); /* Prints 10 */
    }
    return 0;
}
```
A. 12 14 16 18 20 22\
B. 8 10 12 14 16 18\
C. 10 12 14 16\
D. compiler error\
F. ✅
---
### 12. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    int x=7;

    if(x<10) {x=0;}

    if(x>=0) {x++;}
    else x+=3;

    printf("x = %d", x);
    return 0;
}
```
A. 5\
B. 6\
C. 1 ✅\
D. compiler error
---
### 13. What will be the output of the program?
```c
#include <stdio.h>

int main()
{
    float c=5.0;

    printf("Temperature in Fahrenheit is %.2f", (9/5.0)*c + 32);
    return 0;
}
```
A. Temperature in Fahrenheit is 41.00 ✅\
B. Temperature in Fahrenheit is 37.00\
C. Temperature in Fahrenheit is 0.00\
D. Compiler Error
---
### 14. What will be the output of the program?
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
a. Compiler error\
b. 10, 2\
c. 10, 8 ✅\
d. Garbage values
---
### 15. What is the ouput of the program?
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
a. Compiler error\
b. Runtime error\
c. 13\
d. 18 ✅
---
### **Consider the following NINE question regarding this piece of code**
```c
#include <stdio.h>

int N = 5;

/* 1 */
void max_min(int a[], int n, int *max, int *min); // declaration of a function
/* 2 */
int *fun2(int *, int *); // declaration of a function

int main()
{
    int b[N], big, small;
    int *p, *q, *z, **w;
    w = &z;
    p = &big;
    q = &small;

    /***** 3 *****/
    printf("enter %d numbers", N); // ask the user to enter N numbers

    for (int i = 0; i < N; i++)
        /***** 4 *****/
        scanf("%d", b+i);

    max_min(b + 1, N - 1, &big, &small);

    /***** 5 *****/
    z = fun2(p, q);

    printf("16: %d\n", *&small);
    printf("17: %d\n", *p);

    printf("%d\n", *z);
    printf("%d\n", *w);
    printf("%d\n", &*w);
    printf("%d\n", **w);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    /* 6 */
    *min = *max = *a;
    /* or it can be: *max = *min = a[0] */

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] < *min)
            *min = a[i];
	else if (a[i] > *max)
            *max = a[i];
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
### 16. Variables n. N consider.......variables

a. Local, Local\
b. Global, global\
c. Local, global ✅\
d. Global, local
---
### 17. In (1), the function prototype should be

a. `void max_min(int a[],int n, int max, int min);`\
b. `void max_min (int , int , int *, int *);`\
c. `void max_min(int a[], int n, int *max, int *min);` ✅\
d. `void max_min(int *a[], int n, int *max, int *min);`
---
### 18. In (2), the function prototype is

a. `int *fun(int *, int *);` ✅\
b. `int fun(int, int );`\
c. `int fun(int *, int *);`\
d. `int *fun(int max, int min);`
---
### 19. In (3), ask the user to enter N variables..........

a. `printf("enter N numbers ");`\
b. `printf("enter %d numbers ", n);`\
c. `printf("enter numbers", N);`\
d. `printf("enter %d numbers ", N);` ✅
---
### 20. In (4), to take the value from the user you should write...

a. `scanf("%d",&(b+i));`\
b. `scanf("%d", (b+i));` ✅\
c. `scanf("%d",&b);`\
d. `scanf("%d", b[i]);`
---
### 21. In (5), call the function which is name is fun2.

<span style="color:red">**Note that the function's name is `fun2`**</span>\
a. `fun(p, q);`\
b. `z = fun(small, big);`\
c. `*z = fun(p, q);`\
d. `z = fun(*p, *q)`\
f. ✅
---

### 22. If the user filled the array with 5 4 3 2 1, the output of line 16 would be......

a. 5\
b. 4\
C. 2 ✅\
d. 1
---
### 23. If the user filled thearray with 5 4 3 2 1, the output of line 17 would be.....

a. 5\
b. 4 ✅\
c. 2\
d. 1
---
### 24. In (6), initialize the pointers (min and max) by the first value of the array (a).

a. `*max=*min=*a;`\
b. `*max=*min=a[0];`\
c. `(a) and (b)` ✅\
d. `*max=*min=a;`
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
### 25. In (1), ........... must be included.\

a. math.h\
b. string.h\
c. stdio.h ✅\
d. (a) and (c)
---
### 26. (2) should be ...........

a. 2 Functions declaration ✅\
b. 2 Functions definition\
c. A function declaration and a function definition\
d. (a) and (b)
---
### 27. The function prototype to find odd elements in an array must be written in (2).

a. `void FindOddArray(int A1[], int num);` ✅\
b. `int* FindOddArray(int A1, int num);`\
c. `void FindOddArray(int A1, int num);`\
d. `(a) and (b)`
---
### 28. The function to check if a number is odd must be written in (2).

a. `void IsOdd(int*);`\
b. `int IsOdd(int);` ✅\
c. `void FindOddArray(int [], int );`\
d. `(b) or (c)`
---
### 29. In (3), ...........

a. `int A[], max;`\
b. `int A[length], max;`\
c. `int A[30], max;`\
d. `(b) or (c)` ✅
---
### 30. In (5), ........... is a correct statement for declaring a pointer to an integer.

a. `int A1`\
b. `int *A1` ✅\
c. `int **A1`\
d. `int []`
---
### 31. In (6), ........... is a correct statement for initializing an integer index variable.

a. `int index = 0;` ✅\
b. `int index = 1;`\
c. `int index.num, *A1`\
d. `int index;`
---
### 32. In (7), ........... is a correct statement to assign the decremented value of num to the array element at index.

a. `A1[index] = num--;`\
b. `--num, A1[index] = num;`\
c. `A1[index] = --num;`\
d. `(b) or (c)` ✅
---
### 33. In (9), the following code snippet must be written to iterate through the array, decrement num by 2, and assign its value to the next element.

a. `++index; num -= 2; A1[index] = num;` ✅\
b. `++index; A1[index] = --num;`\
c. `++index; A1[index] = num; num -= 2;`\
d. `++index; A1[index] = num--;`
---
### 34. In (8), ........... must be written.

a. `index < length`\
b. `index <= length`\
c. `num > 1` ✅\
d. `num > 0` ✅
---
### 35. In (10), ........... is the correct statement.

a. `void IsOdd(int *value)`\
b. `int IsOdd(int value);`\
c. `void IsOdd(int value)`\
d. `int IsOdd(int value)` ✅
---
### 36. In (10), ........... is the correct statement.

a. `void IsOdd(int);`\
b. `int IsOdd(int);`\
c. `void IsOdd(int*);`\
d. `int IsOdd(int*);`\
f. ✅
---
### 37. In (11), ........... is the correct statement.

a. `if (value%2!=0) return 1; else return -1;`\
b. `if (value/2=1) return -1; else return 1;`\
c. `if (value%2==0) return 0; else return 1;` ✅\
d. `(a) or (c)`
---
### 38. In (11), ........... is the correct statement.

a. `if (value%2!=0) return 1; else return 0;` ✅\
b. `if (value%2=0) return -1; else return 1;`\
c. `if (value/2=1) return 0; else return 1;`\
d. `(a) or (c)`
---
### 39. Given that max = 8. After the execution of the program, ........... is displayed.
** Well this one is creepy, because there will be tabs as white spaces between each number and the next, the question is: are they put in account?**

a. 1 3 5 7\
b. 7 5 3 1 -1\
<span style="color:red">**This is the answer without putting in account the tabs**</span>\
c. 7 5 3 1 ✅\
d. 3 5 7\
<span style="color:red">**This is the answer with putting in account the tabs**</span>\
f. ✅
---
40. For the following code, the output will be ...........
```c
/* No #include */
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
a. 21\
b. 24 ✅ (in case of no error)\
c. 22\
d. (b) or (c)\
f. ✅

```
For simplification 1 byte will be written as "b"
Memory format when using struct student
int no: bbbb 
char name[20]: bbbb bbbb bbbb bbbb bbbb

therefore, the struct is as following in the memory:
bbbb bbbb bbbb bbbb bbbb bbbb
```
For more info watch this [video](https://www.youtube.com/watch?v=aROgtACPjjg&list=PLBlnK6fEyqRiteqwlMLXYtZ16xXDR7MO0&index=9)
---
