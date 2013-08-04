#include <stdio.h>
#include <cs50.h>

int
main()
{

	printf("M spotting F:");
  float msf = GetFloat();
  printf("F spotting M:");
  float fsm = GetFloat();
  printf("F spotting F:");
  float fsf = GetFloat();
  printf("M spotting M:");
  float msm = GetFloat();

	float total = msf + fsm + fsf + msm;

  printf("Who is spotting whom!\n");

  float msf1 = (msf/total)*80;

  printf("M spotting F\n");

	while ( msf1 > 0 )
	{
		printf("#");
		msf1--;
	}

	float fsm1 = (fsm/total)*80;

	printf("\nF spotting M\n");

	while (fsm1 > 0 )
	{
		printf("#");
		fsm1--;
	}

  float fsf2 = (fsf/total)*80;

  printf("\nF spotting F\n");

  while (fsf2 > 0 )
  {
    printf("#");
    fsf2--;
  }

  float msm2 = (msm/total)*80;

  printf("\nM spotting M\n");

  while (msm2 > 0 )
  {
    printf("#");
    msm2--;
  }
  printf("\n");
}

