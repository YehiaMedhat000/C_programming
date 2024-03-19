#include <stdio.h>

// question 28: c) Illegal application of ...

void first ()
{
	printf("Hello world");
}

void main()
{
	void *ptr () = first;
	ptr++;
	ptr();
	// output:
	// error: lvalue required as increment operand
	// error: function ‘ptr’ is initialized like a variable
}
