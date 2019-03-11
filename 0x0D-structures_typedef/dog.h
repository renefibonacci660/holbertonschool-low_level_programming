#ifndef HOLBERTON
#define HOLBERTON

/**
 * struct dog - Defines a dog's characteristic's and descriptors
 * @name: string for dog's name
 * @age: integer for dog's age
 * @owner: string for owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
