#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>
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
firstdog->name = malloc(sizeof(name));
if (firstdog->name == NULL)
return (NULL);
else
firstdog->name = name;

firstdog->owner = malloc(sizeof(owner));
if (firstdog->owner == NULL)
return (NULL);

firstdog->owner = owner;

firstdog->age = age;
return (firstdog);
}
