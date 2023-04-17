
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int is_valid(long int n)
{
	char *digits = malloc(100);
	sprintf(digits, "%ld", n);
	char template[19] = "1_2_3_4_5_6_7_8_9_0";
	for (int i = 0; i < strlen(template); i += 2)
		if (digits[i] != template[i])
			return (i);
	return (-1);
}

int main(int argc, char const *argv[])
{
	long min = roundl(sqrt(1020304050607080900));
	long max = roundl(sqrt(1929394951697989990));
	int i = 0;
	int r;
	while (min + i < max)
	{
		r = is_valid((min + i) * (min + i));
		if (r == -1)
		{
			printf("Success %d\n", min + i);
			return (1);
		}
		else
		{
			if (r == 9)
				i += 1;
			if (r >= 8)
				i += 5;
			else if (r == 7)
				i+= 10;
			else
				i+= 100;
		}
	}
	return 0;
}

	
	
