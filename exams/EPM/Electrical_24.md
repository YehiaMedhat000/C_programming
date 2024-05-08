# C Programming exam for Power-Communication

## Solution by
[Yehia Medhat](https://github.com/YehiaMedhat000/)

Using codeblocks Version (20.03)

## Examiner

Dr: Mohammad Al-Habrook

## Mistakes and/of typos

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

* Q23
* Q24
* Q25
* Q26
* Q27
* Q28
* Q29
* Q30
* Q31
* Q32
