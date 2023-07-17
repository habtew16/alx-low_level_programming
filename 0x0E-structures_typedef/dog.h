#ifndef dog_h
#define dog_h

/**
 * struct dog - user defined data type for dog
 *
 *
 * @name: the nae of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
