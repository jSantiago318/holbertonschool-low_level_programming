#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Holberton");
    hash_table_set(ht, "98", "Battery Street");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Streeting"); 
    hash_table_set(ht, "hetairas", "mentioner");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "depravement", "serafina");
    hash_table_set(ht, "stylist", "subgenera");
    hash_table_set(ht, "joyful", "synapnode");
    hash_table_set(ht, "redesigned", "unqueried");
    hash_table_set(ht, "urceole", "vulturous");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
