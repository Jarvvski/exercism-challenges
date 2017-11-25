#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include "isogram.h"

int is_isogram(char *word)
{	
	// setup vars
	char *blank = "";
	int byteCmp = 1;

	// if input is empty return true
	if (strncmp(word, blank, byteCmp) == 0) {
		return 1;
	}

	// iterate through input string
	for (unsigned long i=0; i<strlen(word); i++) {

		// if cmp letter is not alpha then we don't
		// care about it
		if (!isalpha(word[i])) {
			continue;
		}

		// loop through string to cmp
		for (unsigned long j=0; j<strlen(word); j++) {

			// if same char, continue
			if (j == i) {
				continue;
			} else {
				// cmp the chars + if one char is capitalised
				if (word[j] == word[i] || word[j] == toupper(word[i])) {
					// we found a match
					return 0;
				}
			}
		}
	}

	return 1;
}


