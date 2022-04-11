#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints the data struct
*@d : pointer
* Return: Always 0.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
printf("nothing");

if (d->name == NULL)
printf("Name: (nil)");

if (d->age == 0)
printf("Age: (nil)");

if (d->owner == NULL)
printf("Owner: (nil)");

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
