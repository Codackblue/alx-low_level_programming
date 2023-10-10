#ifndef DOG_H
#define DOG_H

/**
 * struct dog - my dog.j
 * @name: the mans best friend
 * @age: my dogs age
 * @owner: i am my dogs owner
 * dog_t - print my dog dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
