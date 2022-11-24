#include<stdio.h>
#include<string.h>
typedef struct information{
	char name[50];
	char country[50];
	char population[50];
}information;

int main(void) {
	information a[3];
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		scanf(" %[^\n]s", a[i].name);
		printf("Country> ");
		scanf(" %[^\n]s", a[i].country);
		printf("Population> ");
		scanf(" %[^\n]s", a[i].population);
	}
	printf("\nPrinting the three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people\n", i + 1, a[i].name, a[i].country, a[i].population);
	}
}

