#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;

while (*str)
{
if (*str != ' ')
{
if (in_word == 0)
{
in_word = 1;
count++;
}
}
else
{
in_word = 0;
}
str++;
}
return (count);
}
/**
 * strtow - It splits a string into words
 * @str: String to split
 *
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int word_count, a, b, word_length, in_word = 0;
if (str == NULL || *str == '\0')
return (NULL);
word_count = count_words(str);
if (word_count == 0)
return (NULL);
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (a = 0; a < word_count; a++)
{
while (*str == ' ')
str++;

in_word = 1;
word_length = 0;
while (in_word)
{
if (str[word_length] == ' ' || str[word_length] == '\0')
in_word = 0;
else
word_length++;
}
words[a] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[a] == NULL)
{
for (b = 0; b < a; b++)
free(words[b]);
free(words);
return (NULL);
}
for (b = 0; b < word_length; b++)
words[a][b] = str[b];
words[a][b] = '\0';
str += word_length;
}
words[a] = NULL;
return (words);
}
