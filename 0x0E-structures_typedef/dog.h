#ifndef dog_h
#define dog_h
/**
 * struct dog - a new type: struct dog with the following elements
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: a struct that houses a string and a float
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*dog_h*/
