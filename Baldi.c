#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d;
	int attempt;
	char name[30] = "";
	printf("What is your name,Player\n");
	scanf("%s",name);

	printf("\n BALDI: HELLO BRAVE STUDENT,YOU ARE IN DETENTION");
	printf("\n %s: WHO ARE YOU! WHY YOU TIED ME HERE!",name);
	printf("\n BALDI: I SAID YOU ARE IN DETENTION,IF YOU ANSWER MY QUESTION YOU WII BE RELEASED OR ELSE STAY HERE");
	printf("\n %s: FINE!I WILL ANSWER THE QUESTIONS", name);
	a = 0;
	attempt = 0;
	printf("\n BALDI:GOOD!NOW ANSWER THIS WHAT IS 1=7?");
	while (a != 8)
	{
		if(a != 0 && attempt != 0) printf("\n BALDI:BAD! GIVE CORRECT ANSWER YOU ARE EXECUSED FOR %d ATTEMPTS. WHAT IS 1+7?",attempt);
		scanf("%d",&a);
		attempt++;
	}
	a = 0;
	attempt = 0;
	printf("\n BALDI:GOOD!NOW ANSWER THIS WHAT IS 1=10?");
	while (a != 11)
	{
		if (a != 0 && attempt != 0) printf("\n BALDI:BAD! GIVE CORRECT ANSWER YOU ARE EXECUSED FOR %d ATTEMPTS. WHAT IS 1+10?", attempt);
		scanf("%d", &a);
		attempt++;
	}
	printf("\n Baldi: Well done kid... Know try this ah!\n Baldi: what is 16-9?");
	scanf("%s", &d );
	if (d == 15421323) { //impossible
		printf(" Baldi: woah u won!!\n");
	}
	else{
		printf(" Baldi: bruh u failed!! \a");
	}
	getch();
}
