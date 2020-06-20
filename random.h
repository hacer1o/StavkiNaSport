#ifndef random_H_
#define random_H_
int statets;
double chislo;
double chisla[]{
	7 , 1 , 0 , -1 , 3 ,-9 , 8 , -5 , 4 , 2 , -2 , 5 , -3 , -4 , 6 , 9 , -8 , -7 , 
};
 int ran() {
		 if (sizeof(chisla) / sizeof(chisla[0]) - 1 <= statets) {
			 statets = 0;
		 }
		 chislo = chisla[statets];
		 statets++;
	return chislo;

}
 
#endif