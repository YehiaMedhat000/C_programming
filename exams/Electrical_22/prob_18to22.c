#include <stdio.h>

struct header0
{
	char type;
	int level;
	char Optional;
};

#pragma pack(2)
struct header1
{
	char type;
	int level;
	char Optional;
};

#pragma pack(1)
struct header2
{
	char type;
	int level;
	char Optional;
};

struct header3
{
	int level;
	char type;
	char optional;
};

int main()
{
	struct header0 head0;
	struct header1 head1;
	struct header2 head2;
	struct header3 head3;

	printf("sizeof(struct header0): %d\n", sizeof(head0)); // output: sizeof(struct header0): 12
	printf("sizeof(struct header1): %d\n", sizeof(head1)); // output: sizeof(struct header1): 8
	printf("sizeof(struct header2): %d\n", sizeof(head2)); // output: sizeof(struct header2): 6
	printf("sizeof(struct header3): %d\n", sizeof(head3)); // output: sizeof(struct header3): 6
	return (0);
}

// How does this happen?
// Take a look here: https://stackoverflow.com/questions/3318410/pragma-pack-effect
// Also: https://hps.vi4io.org/_media/teaching/wintersemester_2013_2014/epc-14-haase-svenhendrik-alignmentinc-paper.pdf
