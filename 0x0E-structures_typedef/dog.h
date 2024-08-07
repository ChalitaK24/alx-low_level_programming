#ifndef DOG_H
#define DOG_H

struct dog;

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

dog my_dog;
int main(void);
#endif
