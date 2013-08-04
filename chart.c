#include <stdio.h>
#include <cs50.h>

int
main()
{
	printf("M spotting F:");
	int msf = GetInt();
	printf("F spotting M:");
	int fsm = GetInt();
	printf("F spotting F:");
	int fsf = GetInt();
	printf("M spotting M:");
	int msm = GetInt();

	int i,j,k,l;

	int total = msf + fsm + fsf + msm;
	printf("total : %d \n", total);
	printf("Who is spotting whom!\n");

	msf = (msf/total)*80;

	printf("M spotting F\n");


	for ( i = 0; i < msf; i++ )
	{
		printf("#");
	}

	fsm = (fsm/total)*80;

	printf("\nF spotting M\n");

	for ( j = 0; j < fsm; j++ )
	{
		printf("#");
	}

	fsf = (fsf/total)*80;

	printf("\nF spotting F\n");

	for ( k = 0; k < fsf; k++ )
	{
		printf("#");
	}

	msm = (msm/total)*80;

	printf("\nM spotting M\n");

	for ( l = 0; l < msm; l++ )
	{
		printf("#");
	}

printf("\n");
}
