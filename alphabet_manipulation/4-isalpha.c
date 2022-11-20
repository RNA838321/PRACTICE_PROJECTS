#include "main.h"

/**
 * Write a function that checks for alphabetic character.
 *
 * Prototype: int _isalpha(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * Author: Akong Rodney
 * Date: 11/20/2022
 * time: 9:06 am
 */
int _isalpha(int c);
{
	int v;
	char c;

	(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

	v = ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	return v;
}
