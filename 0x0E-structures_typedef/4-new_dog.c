#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: The string to evaluate.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;

    while (*s != '\0') {
        s++;
        length++;
    }

    return length;
}

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 *
 * @dest: Pointer to the buffer in which we copy the string.
 * @src: String to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
    char *dest_start = dest;

    while (*src != '\0') {
        *dest++ = *src++;
    }

    *dest = '\0';

    return dest_start;
}

/**
 * new_dog - Creates a new dog structure.
 *
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog structure if successful, NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int name_len, owner_len;

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL) {
        return NULL;
    }

    dog->name = malloc(sizeof(char) * (name_len + 1));
    if (dog->name == NULL) {
        free(dog);
        return NULL;
    }

    dog->owner = malloc(sizeof(char) * (owner_len + 1));
    if (dog->owner == NULL) {
        free(dog->name);
        free(dog);
        return NULL;
    }

    _strcpy(dog->name, name);
    _strcpy(dog->owner, owner);
    dog->age = age;

    return dog;
}
