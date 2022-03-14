#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - a struct
 *@name : pointer
 *@age : float
 *@owner  : pointer
 * Descripotion : a data struct of a dog
 */
typedef struct dog
{
char* name;
float age;
char* owner;
}dogg;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
