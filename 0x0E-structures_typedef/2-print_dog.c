#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: pointer to struct
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
