24. In (6), initialize the pointers (min and max) by the first value of the array (a).
a. *max=*min=*a;
b. *max *min=a[0];
c. (a) and (b)
d. *max=*min=a;

**Read the following incomplete program then answer the following FIFTEEN questions. The program prompts the user to enter an
integer and store it in the variable "max" then the program finds all the odd numbers from 0 to max, and stores them in an array
"A". The size of A is maximally 30.**

```c
#include <stdio.h>(1)
#define length 30
__________(2)

int main()
{ __________(3)__________ //variable declaration
    scanf(__________(4)__________, &max); // prompts the user to enter a maximum 
    //integer and stores it in max

    FindOddArray(A, max); int count
    if (IsOdd(max)) count = (max+1)/2; else count = max / 2
    for (int j = 0; j < count; ++j) printf("%d \t" A[j]); return 0;
}

void FindOddArray(__________(5)__________, int num)
{ __________(6)__________ //variable declarations
    //determine the value of the first element in A1
    if (IsOdd(num)) A1[index] = num; else __________(7)__________ while (__________(8)__________)
    //determine the value of the remaining elements in A1*/
    __________(9)__________
}

__________(10)__________ //definition of a function that determines whether a number is odd or not
__________(11)__________ // the function that returns 1 when the number is odd
```

25. In (1), ........... must be included.
a. math.h
b. string.h
c. stdio.h
d. (a) and (c)

26. (2) should be ...........
a. Functions declaration
b. Functions definition
c. A function declaration and a function definition
d. (a) and (b)

27. ........... must be written in (2)
a. void FindOddArray(int A1[], int num );
b. int * FindOddArray(int A1, int num);
c. void FindOddArray(int A1, int num);
d. (a) and (b)

28. ........... must be written in (2).
a. void IsOdd(int*);
b. int IsOdd(int);
c. void FindOddArray(int [], int );
d. (b) or (c)

29. In (3), ...........
a. int A[], max;
b. int A[length], max;
c. int A[30], max;
d. (b) or (c)

30. In (5), ........... is a correct statement.
a. int A1
b. int *A1
c. int *A1
d. int [ ]

31. In (6), ........... is a correct statement.


a. int index = 0;
b. int index = 1;
c. int index.num, *A1
d. int index;

32. In (7), ........... is a correct statement
a. A1[index]=num--;
b. --num, A1[index]=num;
c. A1[index]=--num;
d. (b) or (c)

33. In (9), ........... must be written.
a. ++index; num-=2; A1[index]=num;
b. ++index; A1[index]=--num;
c. ++index; A1[index]=num; num-=2;
d. ++index; A1[index]=num--;

34. In (8), ........... must be written.
a. index<length
b. index<=length
c. num>1
d. num>0

35. In (10), ........... is the correct statement.
a. void IsOdd(int *value)
b. int IsOdd(int value)
c. void IsOdd(int value)
d. int IsOdd(int value)

36. In (10), ........... is the correct statement.
a. void IsOdd(int);
b. int IsOdd(int);
c. void IsOdd(int*);
d. int IsOdd(int*);

37. In (1), ........... is the correct statement.
a. if (value%2!=0) return 1; else return 1;
b. if (value/2!=1) return 1; else return 1;
c. if (value%2==0) return 0; else return 1;
d. (a) or (c)

38. In (1), ........... is the correct statement.
a. if (value%2!=0) return 1; else return 1;
b. if (value%2==0) return 1; else return 1;
c. if (value/2==1) return 1;
d. (a) or (c)

39. Given that max = 8. After the execution of the program, ........... is displayed.
a. 1 3 5 7
b. 3 5 7 1
c. 7 5 3 1
d. 3 5 7

40. For the following code, the output will be ...........
void main() {
    struct student {
        int no;
        char name[20];
    };
    struct student s;
    s.no = 8;
    printf("%d", sizeof(s));
}
a. 21
b. 24
c. 22
d. (b) or (c)
