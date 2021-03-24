#ifndef random_H_
#define random_H_
#include <random>
int chisla;
int ran() {
	while (1) {
		chisla = rand();
		if (chisla > -15 && chisla < 15) {
			return chisla;
			break;
		}
	}

}
 
#endif