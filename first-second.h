#include <math.h>
#ifndef first_second_H_
#define first_second_H_
/*double ney2_1;
double ney2_2;
double ney2_3;
double ney2_4;
double ney2_5;*/

double ney2;
double ney3;
double ney4;

double ney4_1;
double ney4_2;
double ney4_3;
double ney4_4;
double ney4_5;
double ney4_6;
double ney4_7;
double ney4_8;
double ney4_9;
double ney4_10;
double ney4_11;
double ney4_12;
double ney4_13;
double ney4_14;
int chislo_zv = 1;
//Функція модуля в математиці
int abc(float x) {
	if (x < 0) return x;
	else return x * -1;
}
int neyron2(double field, double wf, double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2 = field * wf + n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv + n7 * w7 / chislo_zv + n8 * w8 / chislo_zv + n9 * w9 / chislo_zv + n10 * w10 / chislo_zv + n11 * w11 / chislo_zv + n12 * w12 / chislo_zv + n13 * w13 / chislo_zv + n14 * w14 / chislo_zv;
	return ney2 * chislo_zv;
}

int neyron3(double n1, double n2, double n3, double n4, double n5, double n6, double w1, double w2, double w3, double w4, double w5, double w6) {
	ney3 = n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv;
	return ney3 * chislo_zv;
}

int neyron4(double n1, double n2, double n3, double n4, double n5, double n6, double n7 , double n8 , double n9 , double w1, double w2, double w3, double w4, double w5, double w6, double w7 , double w8 , double w9) {
	ney4 = n1 * w1 / chislo_zv + n2 * w2 / chislo_zv + n3 * w3 / chislo_zv + n4 * w4 / chislo_zv + n5 * w5 / chislo_zv + n6 * w6 / chislo_zv + n7 * w7 / chislo_zv + n8 * w8 / chislo_zv + n9 * w9 / chislo_zv;
	return ney4 * chislo_zv;
}


void allClear() {
/*	ney2_1 = 0;
	ney2_2 = 0;
	ney2_3 = 0;
	ney2_4 = 0;
	ney2_5 = 0;

	ney3_1 = 0;
	ney3_2 = 0;
	ney3_3 = 0;
	ney3_4 = 0;
	ney3_5 = 0;

	ney4_1 = 0;
	ney4_2 = 0;
	ney4_3 = 0;
	ney4_4 = 0;
	ney4_5 = 0;
	ney4_6 = 0;
	ney4_7 = 0;
	ney4_8 = 0;
	ney4_9 = 0;
	ney4_10 =0;
	ney4_11 =0;
	ney4_12 =0;
	ney4_13 =0;
	ney4_14 =0;*/
}
#endif