#ifndef random_H_
#define random_H_
#include <random>
int chisla;
int last_value = 10;
int plus_minus[] = { 0 , 0 , 1 , 1 ,1 , 0 , 0, 1, 0 , 0 ,0 ,0 ,1 , 1 , 0 ,1 , 1 ,0 ,1 , 1, 1, 1, 1, 0, 1, 0 , 0, 1 ,1 , 0, 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0, 0 , 1 , 0 ,1 , 0, 1, 1 ,1, 0 ,0 ,0 ,0 ,1 ,1, 0, 0 ,1 ,0, 1 ,0, 0 , 1 , 1, 0 ,0 ,0 ,1 ,0 ,1 ,0 ,0 ,1 ,1, 0, 1 ,0, 1, 0, 1 ,1, 0, 0, 1, 1, 1,0, 0 ,0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0 ,0, 1
};
int stt;
int ran() {
	while (1) {
		chisla = rand() % last_value;
		if (chisla > -10 && chisla < 10) {
			if (plus_minus[stt] == 1) {
				chisla = chisla * -1;
			}
			stt = 0 + rand() % sizeof(plus_minus) / sizeof(plus_minus[0]);
			if ((stt < 0) || stt > sizeof(plus_minus) / sizeof(plus_minus[0]))
			if (chisla == 0) {
				continue;
			}
			return chisla;
			break;
		}
	}

}
 
#endif