#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's information
 * @name: a member containing the name of the dog
 * @age: a member containing the age of the dog
 * @owner: a member stating the owner
 * Description: long
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef of struct dog type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
