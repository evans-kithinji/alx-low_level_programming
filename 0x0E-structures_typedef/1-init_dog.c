#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a dog with a name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Prototype for init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
