#include <stdio.h>
#include <stdlib.h>
#define N 32

void dump_array(char *msg, int ar_size, int a[ar_size]);

int main(int argc, char **argv[])
{
	//declare global COMPCOUNT variable
	int COMPCOUNT = 0;

	/*
	   instantiate an array of size N with N random numbers.
	   i'm using a python script to generate the random numbers and
	   then paste them in. for display purposes im using an N of size
	   5. But this algorithm works for N of any size as shown in output.
	*/
	int lst[N] = {935, 920, 895, 884, 879, 877, 860, 857, 820, 787, 785, 763, 763, 751, 735, 724, 621, 609, 558, 556, 549, 507, 455, 431, 319, 291, 286, 206, 156, 41, 15, 9};	
	dump_array("worst case data input", N, lst);

	int i, j, temp;
	for(i = 0; i < N; i++)
	{
		temp = lst[i];
		for(j = (i - 1); j >= 0 && lst[j] > temp; j--)
		{
			COMPCOUNT++;
			lst[j + 1] = lst[j];
		}
		lst[j + 1] = temp;
	}

	dump_array("\noutput", N, lst);
	printf("\nN: %d\ncompcount: %d\n", N, COMPCOUNT);

	return EXIT_SUCCESS;
}

//dump_array() function prints the contents of an array for debugging
void dump_array(char *msg, int ar_size, int array[ar_size])
{
	printf("%s:\n", msg);
	int i;
	for(i = 0; i < ar_size; i++)
	{
		printf("%d ", array[i]);
	}
	putchar('\n');
}
