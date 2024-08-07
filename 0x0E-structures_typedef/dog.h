#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog type define
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
