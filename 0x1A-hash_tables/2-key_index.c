#include"hash_table.h"

/**
 * Key_index - function that returns the index of a key
 * @key: the key to get an index of 
 * @size: size of the array of the hash table
 * 
 * Return: the index at which the key should be stored in the array 
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
