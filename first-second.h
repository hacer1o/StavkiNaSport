#include <math.h>
#ifndef first_second_H_
#define first_second_H_
double ney2;
double ney3;
double ney4;
int chislo_zv = 1;
//Функція модуля в математиці
int abc(float x) {
	if (x < 0) return x;
	else return x * -1;
}
int neyron2(double field, double wf, double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double n15, double n16, double n17, double n18, double n19, double n20, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14, double w15, double w16, double w17, double w18, double w19, double w20) {
	ney2 = field * wf + n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv + n7 * w7 / chislo_zv + n8 * w8 / chislo_zv + n9 * w9 / chislo_zv + n10 * w10 / chislo_zv + n11 * w11 / chislo_zv + n12 * w12 / chislo_zv + n13 * w13 / chislo_zv + n14 * w14 / chislo_zv + n15 * w15 / chislo_zv + n16 * w16 / chislo_zv + n17 * w17 / chislo_zv + n18 * w18 / chislo_zv + n19 * w19 / chislo_zv + n20 * w20 / chislo_zv;
	return ney2 * chislo_zv;
}

int neyron3(double n1, double n2, double n3, double n4, double n5, double n6, double w1, double w2, double w3, double w4, double w5, double w6) {
	ney3 = n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv;
	return ney3 * chislo_zv;
}

int neyron4(double n1, double n2, double n3, double n4, double n5, double n6, double n7 , double n8 , double n9 , double n10, double w1, double w2, double w3, double w4, double w5, double w6, double w7 , double w8 , double w9 , double w10) {
	ney4 = n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv + n7 * w7 / chislo_zv + n8 * w8 / chislo_zv + n9 * w9 / chislo_zv + n10 * w10 / chislo_zv;
	return ney4 * chislo_zv;
}
#endif