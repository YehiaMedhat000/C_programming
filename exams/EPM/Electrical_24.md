# C Programming exam for Power-Communication

## Solution by
[Yehia Medhat](https://github.com/YehiaMedhat000/)

Using codeblocks Version (20.03)

## Examiner

Dr: Mohammad Al-Habrook

## Mistakes and/of typos?

Please send me the question that has a mistake and its correction
on my email <avhmedmvmedhat000@gmail.com>

### Problems

* Q1: Compiler error

```c
#include <stdio.h>

int main()
{
    int i;
    int power = 2;

    /*        v     v     */
    for (i = 1, i<=3, i++)
    {
        power = power * power;
    }
    printf("%d", power);
    return 0;
}
```

* [Q2-5](./Q1)
* Q6: 35

```c
int fun(int x, int y)
{
	if (x == 0)
		return y;
	return fun(x - 2, x + y);
}

int main()
{
	printf("%d", fun(10, 5));
	return 0;
}
```

* Q7: Compiler error

```c
/***** If the user inputs 5 *****/
#include <stdio.h>

int main()
{
    int x = 1, i, n;

    printf("Enter a number");
    /*          v Compiler error */
    scanf("%d", n);
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    printf("%d ", x);
    return 0;
}
```

* Q8: 100 200

```c
int fun(int* arr)

int main(void)
{
    int arr[2] = {200, 100};

    fun(arr);
    printf("%d", arr[0]);
    retrun 0;
}

int fun(int* arr)
{
    arr = arr + 1;

    printf("%d", *arr);
}
```

* Q9: 20 30 50 60

```c
int main()
{
    int arr2d[][3] = {10, 20, 30, 40, 50, 60};
    int (*ptr)[3] = arr2d;

    printf("%d %d ", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);
    return 0;
}
```

* Q10: -2, 3, 1, 1

```c
#include <stdio.h>

int main()
{
    int i = -3, j = 2, k = 0, m;

    m = ++i && ++j || ++k;
    printf("%d %d %d %d\n", i, j, k, m);
    return 0;
}
```

* Q11: 10

```c
#include <stdio.h>

int main()
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        switch (i)
        {
            case 0: i += 3;
            case 1: i += 2;
            case 5: i += 3;
            default:
                i+= 2;
                break;
        }
        printf("%d ", i);
    }
    return 0;
}
```

* Q12: Compiler Error

```c
#include <stdio.h>

int main()
{
    int x = 5;

    if (x == 2)
        ;
    {x = 0;} // Compiler error
    if (x == 5)
    {
        x++;
    }
    else
        x += 3;
    printf("x = %d", x);
}
```
``` 
Note that when removing the erroneous line,
the program worked without return statement
```

* Q13: 37.0

```c
#include <stdio.h>

int main()
{
    float c = 5.0;
    /*                               integer div vvvvv = 1  */
    printf("Temperature in Fahrenheit is %.2f", (9 / 5) * c + 32);
    return 0;
}
```

* Q14: 8, 10

```c
#include <stdio.h>

int main()
{
	int arr[2][2][2] = {10, 2, 3, 4, 5, 6, 7, 8};
    /*
     * The previous line is equivalent to
     * arr[2][2][2] = {{{10, 2}, {3, 4}}, {{5, 6}, {7, 8}}}
     */
	int *p, *q;

	p = &arr[1][1][1];
	q = (int*)arr;
	printf("%d, %d\n", *p, *q);
	return 0;
}
```

* Q15: 200

```c
void test(int *pr)
{
    int x = 100;

    /* The address changes here
     * Because the function has its own
     * copy of `int *pr`
     * So when the life span of the function ends
     * All the variables in it will
     * be popped off of the stack 
     */
    pr = &x;
}

int main()
{
    int num = 200;
    int *pr = &num;

    test(pr);
    printf("%d", *pr);
	return 0;
}
```

* Q16: Add a statement to the function `fn` such that address of `a` gets stored in `j`

```c
void fn(int**);

int main()
{
    int *j;
    fn(&j);
    return 0;
}

void fn(int **k)
{
    int a = 10;

    /* Add a statement here */
    *k = &a;
}
```

* Q17:

```c
void fn(int**);

int main()
{
    int *j;
    fn(&j);
    return 0;
}

void fn(int **k)
{
    int a = 10;

    /* Add a statement here */
    *k = &a;
}
```

* Q18: 120

```c
#include <stdio.h>

int main()
{
    int i;
    int sum = 1;

    /* This is a typical factorial program */
    for (i = 1; i <= 5; i++)
    {
        sum = sum * i;
    }
    printf("%d", sum);
    return 0;
}
```

* Q19: break

```
which keyword is used to come out of a loop only for that iteration?
```

* Q20: Infinite loop

```c
#include <stdio.h>

int reverse(int);

int main()
{
    int no = 5;

    reverse(no);
    return 0;
}

int reverse(int no)
{
    if (no == 0)
        return 0;
    else
        printf("%d,", no);
    /* 
     * The decrement takes place 
     * After the execution of this line
     * Because it's post decrement 
     * Therefore, the no value will always be 5
     * and will never be 0
     */
    reverse(no--);
}
```

* Q21: 13

```c
#include <stdio.h>

#define X 5+4

int main()
{
    int x = 2;

    /* 
     * The preprocessor will rewrite this line as follows
     * printf("%d", 5+4*2); 😅 completly different, isn't?
     * Macros aren't calculated until they're called
     */
    printf("%d", X*x);
    return 0;
}
```

* Q[22, 28]: answer the 7 questions, solutions are in comments

```c
/* Iterative C program to reverse an array */
#include <stdio.h>


/* Function to reverse arr[] from start to end */
void reverseArray(int arr[], int start, int end)
{
    int temp;

    while (start <= end)
    {
        /* The main steps of any swap */
        temp = arr[start]; /* (d) */
        arr[start] = arr[end];
        arr[end] = temp;
        start++; /* (e) */
        end -=1; /* (f) */
    }
}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
    int i;

    for (i = 0; i < size; i++) /* (g) */
        printf("%d ", arr[i]);
    printf("\n");
}

/* Driver function to test the above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    /* Get array size */
    int n = sizeof(arr) / sizeof(int); /* (a) */

    /* Call the reverse function */
    reverseArray(arr, 0, n - 1); /* (b) */

    /* Call the print function */
    printArray(&arr[0], n); /* (c) */
    return 0;
}
```

* Q29: -121

```c
#include <stdio.h>

int main()
{
    /* 
     * signed means using the last bit
     * Then the ranges are [-128, 127]
     * which correspond to 
     * 1000 0000 = - (2^7) = -128
     * 0111 1111 = 127
     */
    signed char c = 125; /* 125 = 0111 1101 */
    
    c = c + 10; 
    /* 0111 1101 
     * 0000 1010
     * _________
     0 1000 0111 = -121
     */

    printf("%d", c); /* Prints -121 */
    return 0;
}
```

* Q30: Truncating the fractional part

```
Integer division results in Truncating the fractional part
```

* Q31: Base address of the array

```
In C if you pass an array as an argument to a function, what actually gets passed?
```

* Q32: The program may crash if some important data gets overwritten

```
What will happen in a C program you assign a value to an array element whose subscript exceeds the size of array?
```

```c
#include <stdio.h>

int main()
{
    int non_sized[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sized[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* These lines have no problem with the compiler!!
     * I couldn't cause the program to crash changing
     * The indices, pretty awkward, isn't?
     */
    non_sized[10] = 5;
    sized[10] = 5;
    return 0;
}
```

* Q33: The keyword used to transfer control from a function back to the calling function is `return`
* Q34: Compiler time error

```c
#include <stdio.h>

int main()
{
    /* 
     * Nevertheless that the following 2 lines are awkward
     * but they caused no problems in execution nor compilation
     */
    int *p = (int *) 2;
    int *q = (int *) 3;

    /* The compile time error was caused here!! */
    printf("%d", p+q);
}
```

* Q35: -32768 to 32767

```
What is the 16-bit compiler allowable range for integer constants?
```

```
Using number system principals:

  0111 1111 1111 1111
  sum is equal to: 32767

  1000 0000 0000 0000
  ^
 -2^15 = -32768

last bit is a sign bit
```

You can also check the limits online

Or from the `<limits.h>` in the `/usr/include/limits.h`
you'll find the following lines

```bash
/* Minimum and maximum values a `signed short int' can hold.  */
#  define SHRT_MIN	(-32768)
#  define SHRT_MAX	32767

```
Note that we are talking about 16-bit integers
which correspond to short type

* Q36: Using the following C code, value of x will be 0

```c
#include <stdio.h>

int main()
{
    int x, y = 2, z, a;

    if (x = y % 4)
        z = 2;

    a = 2;

    printf("%d %d", x, z, a);
    return 0;
}
```

* Q37: value of z will be Garbage value
* Q38: value of a will be 2
* Q39: Which of the following isn't a valid identifier?

```
Covid_19 ✅     Covid19 ✅      19covid ❌      _19covid ✅
```

* Q40: Two variables, i and j are pointers to integers, then `scanf("%i%i", i, j);` is a correct statement

```c
scanf("%i%i", i, j);   ✅      scanf("%d%d", &i, &j); ❌
scanf("%i%i", &i, &j); ✅      scanf("%d%d", *i, *j); ❌
```

* Q41: Two variables, i and j are pointers to integers, then `printf("i = %d, j = %d\n", *i, *j);` is a correct statement

```c
printf("i = %d, j = %d\n", &i, &j); ❌
printf("i = %d, j = %d\n", *i, *j); ✅
printf("i = %d, j = %d\n", i, j);   ❌
scanf("%d%d", i, j);                ✅  but looks like a typo
```

* Q42: Which of the following statements inputs five integer values and stores them in a previously declared array, A?

```c
for (int i = 1; i <= 5; i++) ❌
    scanf("%d", A + i);

for (int i = 1; i <= 5; i++) ✅
    scanf("%d", A + i - 1);

for (int i = 1; i <= 5; i++) ❌
    scanf("%d", &A[i]);

    /* a and b */ ❌
```

* Q43: Which of the following statements inputs five integer values and stores them in a previously declared array, A?

```c
/****** a *********/
int i = 0;

do {
    scanf("%d", A + i);
    ++i;
} while (i < 5);

/****** b *********/
int i = 0;

do {
    scanf("%d", &A[i]);
    ++i;
} while (i < 5);

/****** c *********/
int i = 0;

do {
    scanf("%d", &A[i]);
    ++i;
} while (i < 5);

/* (a) or (b) */ ✅
```

* Q44: Which of the following segments of code
(which have two values of type float (x and y)) is/are used to print the maximum value?

```c
/****** 1 *********/
MAX = x > y;

switch (MAX)
{
    case 0: printf("%f", x); break;
    case 1: printf("%f", y); break;
}

/****** b *********/
if (x > y)
    printf("%f", x);
else
    printf("%f", y);

/****** c *********/
x > y? printf("%f", x): printf("%f", y);

/* (b) or (c) */
```

* Q45: The correct function call for a function named "Add",
which has three input parameters each of type pointer to double
(Variables x, y, and z are each of type of pointer to double) and does not return any value, is ............

```c
void add((double*) x, (double*) y, (double*) z);    ✅
void add(double* x, double* y, double* z);  ❌
void add(&x, &y, &z);   ❌
void add(*x, *y, *z);   ❌
```
