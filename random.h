#ifndef random_H_
#define random_H_
#include <random.h>
int chisla;
int ran() {
	while (1) {
		chisla = random();
		if (chisla > -15 && chisla < 15) {
			return chisla;
			break;
		}
	}

}
 
#endif