#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic info
 * @name: First member -  name of the dog
 * @age: Second member -  age of the dog
 * @owner: Third member - name of the owner of the dog
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t; /* dog_t - typedef for struct dog */


/* Other necessary prototypes */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
