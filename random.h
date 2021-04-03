#ifndef random_H_
#define random_H_
#include <random>
int chisla;
int last_value = 10;
bool plus_minus;
int ran() {
	while (1) {
		chisla = rand() % last_value;
		plus_minus = rand();
		if (plus_minus == 0) {
			chisla = chisla *-1;
		}
		if (chisla > -10 && chisla < 10) {
			return chisla;
			break;
		}
	}

}
 
#endif