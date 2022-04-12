#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*new_dog - function that creates a new dog
*@name: input
*@age: input
*@owner: input
*Return: pointer
**/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *firstdog;
firstdog = malloc(sizeof(dog_t));

if (firstdog == NULL)
return (NULL);

firstdog->name = name;
firstdog->age = age;
firstdog->owner = owner;

return (firstdog);
}
