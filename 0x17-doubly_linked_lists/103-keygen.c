#include <stdio.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username
 * @username: username for which to generate the key
 * @key: buffer to store the generated key
 */

void generate_key(const char *username, char *key)
{
	sprintf(key, "%s_key", username);
}

/**
 * main - Entry point of the keygen program
 * @argc: number of command line arguments
 * @argv: array of strings representing the arguments
 * Return: 0 - success, 1 - fail
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}

	char username[100];
	char key[100];

	strncpy(username, argv[1], sizeof(username));

	generate_key(username, key);

	printf("%s\n", key);

	return (0);
}
