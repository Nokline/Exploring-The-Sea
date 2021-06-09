#include <stdlib.h>
#include <string.h>

int main(){

	char ans[10];
	char lemore[10];
	printf("---------------------------------------------\nNumber Guessing Game (My first project in C!)\n---------------------------------------------\n\n");
	int num = 50;
	int min = -1;
	int max = 101;

	while (1)
	{
	
	printf("[*] Is %i your number? ", num);
	scanf("%s", ans);

		if(strcmp(ans, "yes") == 0)
		{
			printf("\n---------------------------------------------\n[+] Haha guessed it!\n---------------------------------------------\n");
			break;
		} 

		else if(strcmp(ans, "no") == 0)
		{
			printf("[*] Is it less or more? ");
			scanf("%s", lemore);
		}

		else
		{
			printf("[!] Answer yes or no\n");
		}
		
		if(strcmp(lemore, "less") == 0)
		{
			max = num;
			num = num - (max-min)/2;		
		}
		
		else if(strcmp(lemore, "more") == 0)
		{
			min = num;
			num = num + (max-min)/2;				
		}

		if((max-min)/2 == 0){
			printf("\n---------------------------------------------\n[+] Stop lying, %i is your number!\n---------------------------------------------\n", num);
			break;
		}
			
	}
	return 0;
};
