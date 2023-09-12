#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtok - splits strings
 * @input: user input
 * @delim: breaking point
 * @num: word count
 * Return: pointer to next delim
 */
char** split_string(const char* input, const char* delim, int* num)
{
	char** words = NULL;
	char* token;
	int* num_count = 0;
	char* inputcpy;


	inputcpy = strdup(input); /* copy input to inputcpy */
	if (inputcpy == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	token = strtok(inputcpy, delim);

	while (token != NULL)
	{
		(*num_count)++;
		words = (char**)realloc(words, (*num_count) * sizeof(char*));
		if (words == NULL)
		{
			perror("Memory allocation failed");
			free(inputcpy);
			exit(EXIT_FAILURE);
		}
		(num_count)++;
		token = strtok(NULL, delim);
	}
	free(inputcpy);
	return (words);
}

