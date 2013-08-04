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

	int total = msf + fsm + fsf + msm;

	printf("msf = %d\n", msf);
	printf("fsm = %d\n", fsm);
	printf("fsf = %d\n", fsf);
	printf("msm = %d\n", msm);

  printf("total : %d \n", total);
  printf("Who is spotting whom!\n");

  msf = (msf/total)*80;
	printf("msf = %d\n", msf);
  printf("M spotting F\n");


	while ( msf > 0 )
	{
		printf("#");
		msf--;
	}

	fsm = (fsm/total)*80;
	printf("fsm = %d\n", fsm);

	printf("F spotting M\n");

	while (fsm > 0 )
	{
		printf("#");
		fsm--;
	}

  fsf = (fsf/total)*80;
	printf("fsf = %d\n", fsf);

  printf("F spotting F\n");

  while (fsf > 0 )
  {
    printf("#");
    fsf--;
  }

  msm = (msm/total)*80;
	printf("msm = %d\n", msm);

  printf("M spotting M\n");

  while (msm > 0 )
  {
    printf("#");
    msm--;
  }
}

