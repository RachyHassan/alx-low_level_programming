#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
char** split_string(const char* input, const char* delim, int* num);
/**
 * main - split string
 * @input: words from user
 * @delim: delimeter
 * @num: num count
 * Retun: Always 0
 */
int main(void)
{
	const char* input = "Software Engineering No Be Beans O!";
	const char* delim = " ";
	int num = 0, i;
	char** words;

	words = split_string(input, delim, &num);

	printf("Number of words: %d\n", num);
	for (i = 0; i < num; i++)
	{
		printf("%s\n", words[i]);
		free(words[i]);
	}

	free(words);

	return (0);
}
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
	int num_count = 0;
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
		(num_count)++;
		words = (char**)realloc(words, (num_count) * sizeof(char*));
		if (words == NULL)
		{
			perror("Memory allocation failed");
			free(inputcpy);
			exit(EXIT_FAILURE);
		}
		words[num_count - 1] = strdup(token);
		if (words[num_count - 1] == NULL)
		{
			perror("Memory allocation failed");
			free(inputcpy);
			exit(EXIT_FAILURE);
		}
	
		token = strtok(NULL, delim);
	}
		free(inputcpy);
		*num = num_count;
		return(words);
}
	
