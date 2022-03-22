#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Function to randomly generates password of length N
 * void randomPasswordGeneration(int N)
 * Return: always 0.
 */

int main(void)
{
	int N = 10;

	int i = 0;
	int randomizer = 0;	/* Seed the random-number generator
 * with current time so that the numbers will be different every time
 */
	srand((unsigned int)(time(NULL)));

	char numbers[] = "0123456789";	/*Array of numbers*/

	char letter[] = "abcdefghijklmnoqprstuvwyzx";	/*Array of small alphabets*/

	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";	/*Array of capital alphabets*/

	char symbols[] = "!@#$^&*?";	/*Array of all the special symbols*/

	char password[N];	/*Stores the random password*/

	randomizer = rand() % 4; /*To select the randomizer inside loop*/


	for (i = 0; i < N; i++)
	{

		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	return (0);
}
