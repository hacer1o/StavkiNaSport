#ifndef random_H_
#define random_H_
#include <random>
int chisla;
int first_value = -10;
int last_value = 10;
int ran() {
	while (1) {
		chisla = first_value + rand() % last_value;
		if (chisla > -10 && chisla < 10) {
			return chisla;
			break;
		}
	}

}
 
#endif