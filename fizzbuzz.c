#include <stdio.h>
#include <stdlib.h>

int fizzbuzz(int iterations, int fizz, int buzz){

	int i;
	for (i = 1; i<iterations + 1; i++){

		if(i%(fizz*buzz) == 0){
					printf("%i: FizzBuzz\n", i);
				}
				
		else if(i%fizz == 0){
			printf("%i: Fizz\n", i);

		}
		else if(i%buzz == 0){
			printf("%i: Buzz\n", i);
		}
		else{
			printf("%i:\n", i);
		}
		
		
	}
	return 0;
}

int main(int argc, char ** argv){
	if(argc == 4){
		fizzbuzz(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
	}
	else{
		printf("./fizzbuzz <iterations> <fizz> <buzz>\n\nExample: ./fizzbuzz 20 3 5");
	}
	return 0;
}
