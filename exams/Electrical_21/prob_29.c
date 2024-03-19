#include <stdio.h>

// question 29: b) 11

void f(int(*x) (int)); // function declaration
int myfoo(int); // function declaration
int (*fooptr)(int); // global function pointer

// funciton declaration that returns a function pointer
int ((*foo(int))(int)); 

int main() {fooptr = foo(0); fooptr(10);}

int ((*foo(int i)))(int) {return myfoo;}
int myfoo(int i) {printf("%d \n", i + 1);}

// Explaination: Focus on the main function
// fooptr is functoin ptr that's global, doesn't need declaration
// so code is fine until now
// we call foo with value 0 which returns
// a pointer to the function myfoo and store it in fooptr
// then we call fooptr which is same as calling myfoo with value 10
// that prints finally 10 + 1
