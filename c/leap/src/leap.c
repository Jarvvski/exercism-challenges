#include <stdio.h>
#include <stddef.h>
#include "leap.h"

int is_leap_year(int year) {

	if (year % 4 != 0) {
		return 0;
	}

	if (year % 100 == 0) {
		if (year % 400 != 0) {
			return 0;
		}
	}
	
	return 1;
}

