#include<stdio.h>
#include<time.h>

double click()
{
	static clock_t prior;
	clock_t now = clock();
	// printf("%ld, %ld\n", (long)prior, (long)now);
	// Uncomment the above line, to check the values
	double diff = (double)(now - prior)/ CLOCKS_PER_SEC;
	prior = now;
	return diff;
}

int main()
{
	double time;
	long ctr = 1000000;
	printf("Let me print something first...\n");
	printf("YAAAAWWN !!\n");
	click();
	while(ctr--);
	time = click();
	printf("I guess I dozed off for %lf seconds\n", time);
	printf("YAAAAWWN !!\n");
	ctr = 100000000;
	click();
	while(ctr--);
	time = click();
	printf("Did I sleep again for %lf seconds?\n", time);
}
