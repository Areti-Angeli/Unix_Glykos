#include <stdio.h>
#include <string.h>

int main()
{

	char seq[1000];
 	int i, k;
	int codons;
	int length, invalidbases;

	codons = 0;
	invalidbases = 0;

	printf("Give me a valid DNA sequence:");

	while (scanf ("%s", seq ) == 1)
		{
			length = strlen(seq);

			for (i = 0; i < length; i++)
				{
				if(!(seq[i] == 'A' || seq[i] == 'T' || seq[i] == 'G' || seq[i] == 'C' ||
				     seq[i] == 'a' || seq[i] == 't' || seq[i] == 'g' || seq[i] == 'c'))
					{invalidbases = 1;
					break;}
				}

			if (invalidbases)
			{
				printf("Invalid DNA sequence\n");
			}
			else
			{

				for (i = 0; i < length; i++)
				{
					if((seq[i] == 'A' || seq[i] == 'a') && (seq[i+1] == 'T' || seq[i+1] == 't') && (seq[i+2] == 'G' || seq[i+2] == 'g'))
						{
							for(k = i+3; k < length; k += 3)
								{
									if((seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'A') ||
									   (seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'G') ||
									   (seq[k] == 'T' && seq[k+1] == 'G' && seq[k+2] == 'A') ||
									   (seq[k] == 't' && seq[k+1] == 'a' && seq[k+2] == 'a') ||
									   (seq[k] == 't' && seq[k+1] == 'a' && seq[k+2] == 'g') ||
									   (seq[k] == 't' && seq[k+1] == 'g' && seq[k+2] == 'a'))
										{
										 codons++;
										 printf("Found coding sequence starting in position %d and with a stop codon in position %d\n", i+1, k+1);
										}
								}
						}
				}

			if(codons == 0)
				{printf("Couldn't find a coding sequence\n");}
		}

		codons = 0;
		invalidbases = 0;

		printf("Give me another valid DNA sequence or press Ctrl+C to exit:\n");
	}
}
