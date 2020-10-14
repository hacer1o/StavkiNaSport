/*
neyron2_1(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, w1_1, w1_2, w1_3, w1_4, w1_5, w1_6, w1_7, w1_8, w1_9, w1_10, w1_11);
neyron2_2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, w2_1, w2_2, w2_3, w2_4, w2_5, w2_6, w2_7, w2_8, w2_9, w2_10, w2_11);
neyron2_3(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, w3_1, w3_2, w3_3, w3_4, w3_5, w3_6, w3_7, w3_8, w3_9, w3_10, w3_11);
neyron2_4(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, w4_1, w4_2, w4_3, w4_4, w4_5, w4_6, w4_7, w4_8, w4_9, w4_10, w4_11);

neyron3_1(w2_1_1, w2_1_2, w2_1_3, w2_1_4);
neyron3_2(w2_2_1, w2_2_2, w2_2_3, w2_2_4);
neyron3_3(w2_3_1, w2_3_2, w2_3_3, w2_3_4);
neyron3_4(w2_4_1, w2_4_2, w2_4_3, w2_4_4);
neyron3_5(w2_5_1, w2_5_2, w2_5_3, w2_5_4);

neyron4_1(w3_1_1, w3_1_2, w3_1_3, w3_1_4, w3_1_5);
neyron4_2(w3_2_1, w3_2_2, w3_2_3, w3_2_4, w3_2_5);
neyron4_3(w3_3_1, w3_3_2, w3_3_3, w3_3_4, w3_3_5);
neyron4_4(w3_4_1, w3_4_2, w3_4_3, w3_4_4, w3_4_5);
neyron4_5(w3_5_1, w3_5_2, w3_5_3, w3_5_4, w3_5_5);
neyron4_6(w3_6_1, w3_6_2, w3_6_3, w3_6_4, w3_6_5);
neyron4_7(w3_7_1, w3_7_2, w3_7_3, w3_7_4, w3_7_5);
neyron4_8(w3_8_1, w3_8_2, w3_8_3, w3_8_4, w3_8_5);
neyron4_9(w3_9_1, w3_9_2, w3_9_3, w3_9_4, w3_9_5);
neyron4_10(w3_10_1, w3_10_2, w3_10_3, w3_10_4, w3_10_5);
neyron4_11(w3_11_1, w3_11_2, w3_11_3, w3_11_4, w3_11_5);

	cin >> ney1_1;
	cin >> ney1_2;
	cin >> ney1_3;
	cin >> ney1_4;
	cin >> ney1_5;
	cin >> ney1_6;
	cin >> ney1_7;
	cin >> ney1_8;
	cin >> ney1_9;
	cin >> ney1_10;
	cin >> ney1_11;*/
#include <math.h>
#ifndef first_second_H_
#define first_second_H_
double ney2_1;
double ney2_2;
double ney2_3;
double ney2_4;
double ney2_5;

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
//Функція модуля в математиці
int abc(float x) {
	if (x < 0) return x;
	else return x * -1;
}
int neyron2(double field, double wf, double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2 = field * wf + n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + n11 * w11 + n12 * w12 + n13 * w13 + n14 * w14;
	return ney2;
}

int neyron3(double n1, double n2, double n3, double n4, double n5 , double w1, double w2, double w3, double w4, double w5) {
	ney3 = n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5;
	return ney3;
}

int neyron4(double n1, double n2, double n3, double n4, double n5, double n6, double n7 , double w1, double w2, double w3, double w4, double w5, double w6, double w7) {
	ney4 = n1 * w1 + n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7;
	return ney4;
}

/*void neyron2_1(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2_1 = n1 * w1 /*+ n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + n11 * w11*/;
/*	ney2_1 = n2 * w2 + ney2_1;
	ney2_1 = n3 * w3 + ney2_1;
	ney2_1 = n4 * w4 + ney2_1;
	ney2_1 = n5 * w5 + ney2_1;
	ney2_1 = n6 * w6 + ney2_1;
	ney2_1 = n7 * w7 + ney2_1;
	ney2_1 = n8 * w8 + ney2_1;
	ney2_1 = n9 * w9 + ney2_1;
	ney2_1 = n10 * w10 + ney2_1;
	ney2_1 = n11 * w11 + ney2_1;
	ney2_1 = n12 * w12 + ney2_1;
	ney2_1 = n13 * w13 + ney2_1;
	ney2_1 = n14 * w14 + ney2_1;
}
void neyron2_2(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2_2 = n1 * w1 /*+ n2 * w2 + n3 * w3 + n4 * w4 + n5 * w5 + n6 * w6 + n7 * w7 + n8 * w8 + n9 * w9 + n10 * w10 + n11 * w11*/;
	/*ney2_2 = n2 * w2 + ney2_2;
	ney2_2 = n3 * w3 + ney2_2;
	ney2_2 = n4 * w4 + ney2_2;
	ney2_2 = n5 * w5 + ney2_2;
	ney2_2 = n6 * w6 + ney2_2;
	ney2_2 = n7 * w7 + ney2_2;
	ney2_2 = n8 * w8 + ney2_2;
	ney2_2 = n9 * w9 + ney2_2;
	ney2_2 = n10 * w10 + ney2_2;
	ney2_2 = n11 * w11 + ney2_2;
	ney2_2 = n12 * w12 + ney2_2;
	ney2_2 = n13 * w13 + ney2_2;
	ney2_2 = n14 * w14 + ney2_2;
}
void neyron2_3(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2_3 = n1 * w1; /*+ n2_2 * w2_2 + n3_2 * w3_2 + n4_2 * w4_2 + n5_2 * w5_2 + n6_2 * w6_2 + n7_2 * w7_2 + n8_2 * w8_2 + n9_2 * w9_2 + n10_2 * w10_2 + n11_2 * w11_2;*/
/*	ney2_3 = n2 * w2 + ney2_3;
	ney2_3 = n3 * w3 + ney2_3;
	ney2_3 = n4 * w4 + ney2_3;
	ney2_3 = n5 * w5 + ney2_3;
	ney2_3 = n6 * w6 + ney2_3;
	ney2_3 = n7 * w7 + ney2_3;
	ney2_3 = n8 * w8 + ney2_3;
	ney2_3 = n9 * w9 + ney2_3;
	ney2_3 = n10 * w10 + ney2_3;
	ney2_3 = n11 * w11 + ney2_3;
	ney2_3 = n12 * w12 + ney2_3;
	ney2_3 = n13 * w13 + ney2_3;
	ney2_3 = n14 * w14 + ney2_3;
}
void neyron2_4(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2_4 = n1 * w1;/* + n2_2 * w2_2 + n3_2 * w3_2 + n4_2 * w4_2 + n5_2 * w5_2 + n6_2 * w6_2 + n7_2 * w7_2 + n8_2 * w8_2 + n9_2 * w9_2 + n10_2 * w10_2 + n11_2 * w11_2;*/
/*	ney2_4 = n2 * w2 + ney2_4;
	ney2_4 = n3 * w3 + ney2_4;
	ney2_4 = n4 * w4 + ney2_4;
	ney2_4 = n5 * w5 + ney2_4;
	ney2_4 = n6 * w6 + ney2_4;
	ney2_4 = n7 * w7 + ney2_4;
	ney2_4 = n8 * w8 + ney2_4;
	ney2_4 = n9 * w9 + ney2_4;
	ney2_4 = n10 * w10 + ney2_4;
	ney2_4 = n11 * w11 + ney2_4;
	ney2_4 = n12 * w12 + ney2_4;
	ney2_4 = n13 * w13 + ney2_4;
	ney2_4 = n14 * w14 + ney2_4;
}
void neyron2_5(double n1, double n2, double n3, double n4, double n5, double n6, double n7, double n8, double n9, double n10, double n11, double n12, double n13, double n14, double w1, double w2, double w3, double w4, double w5, double w6, double w7, double w8, double w9, double w10, double w11, double w12, double w13, double w14) {
	ney2_5 = n1 * w1;/* + n2_2 * w2_2 + n3_2 * w3_2 + n4_2 * w4_2 + n5_2 * w5_2 + n6_2 * w6_2 + n7_2 * w7_2 + n8_2 * w8_2 + n9_2 * w9_2 + n10_2 * w10_2 + n11_2 * w11_2;*/
	/*ney2_5 = n2 * w2 + ney2_5;
	ney2_5 = n3 * w3 + ney2_5;
	ney2_5 = n4 * w4 + ney2_5;
	ney2_5 = n5 * w5 + ney2_5;
	ney2_5 = n6 * w6 + ney2_5;
	ney2_5 = n7 * w7 + ney2_5;
	ney2_5 = n8 * w8 + ney2_5;
	ney2_5 = n9 * w9 + ney2_5;
	ney2_5 = n10 * w10 + ney2_5;
	ney2_5 = n11 * w11 + ney2_5;
	ney2_5 = n12 * w12 + ney2_5;
	ney2_5 = n13 * w13 + ney2_5;
	ney2_5 = n14 * w14 + ney2_5;
}

void neyron3_1(float w1, float w2, float w3, float w4, float w5) {
	ney3_1 = ney2_1 * w1; /*+ ney2_2 * w2 + ney2_3 * w3 + ney2_4 * w4;*/
	/*ney3_1 = ney2_2 * w2 + ney3_1;
	ney3_1 = ney2_3 * w3 + ney3_1;
	ney3_1 = ney2_4 * w4 + ney3_1;
	ney3_1 = ney2_5 * w5 + ney3_1;
	ney3_1 = ney3_1 * 2;
}
void neyron3_2(float w1, float w2, float w3, float w4, float w5) {
	ney3_2 = ney2_1 * w1; /*+ ney2_2 * w2 + ney2_3 * w3 + ney2_4 * w4;*/
	/*ney3_2 = ney2_2 * w2 + ney3_2;
	ney3_2 = ney2_3 * w3 + ney3_2;
	ney3_2 = ney2_4 * w4 + ney3_2;
	ney3_2 = ney2_5 * w5 + ney3_2;
}
void neyron3_3(float w1, float w2, float w3, float w4 , float w5) {
	ney3_3 = ney2_1 * w1; /*+ ney2_2 * w2 + ney2_3 * w3 + ney2_4 * w4;*/
	/*ney3_3 = ney2_2 * w2 + ney3_3;
	ney3_3 = ney2_3 * w3 + ney3_3;
	ney3_3 = ney2_4 * w4 + ney3_3;
	ney3_3 = ney2_5 * w5 + ney3_3;
	ney3_3 = ney3_3 * ney3_3 / 2;
}
void neyron3_4(float w1, float w2, float w3, float w4, float w5) {
	ney3_4 = ney2_1 * w1; /*+ ney2_2 * w2 + ney2_3 * w3 + ney2_4 * w4;*/
	/*ney3_4 = ney2_2 * w2 + ney3_4;
	ney3_4 = ney2_3 * w3 + ney3_4;
	ney3_4 = ney2_4 * w4 + ney3_4;
	ney3_4 = ney2_5 * w5 + ney3_4;
	ney3_4 = abc(ney3_4);
}
void neyron3_5(float w1, float w2, float w3, float w4, float w5) {
	ney3_5 = ney2_1 * w1;/* + ney2_2 * w2 + ney2_3 * w3 + ney2_4 * w4;*/
	/*ney3_5 = ney2_2 * w2 + ney3_5;
	ney3_5 = ney2_3 * w3 + ney3_5;
	ney3_5 = ney2_4 * w4 + ney3_5;
	ney3_5 = ney2_5 * w5 + ney3_5;
}
void neyron3_6(float w1, float w2, float w3, float w4, float w5) {
	ney3_6 = ney2_1 * w1;
	ney3_6 = ney2_2 * w2 + ney3_6;
	ney3_6 = ney2_3 * w3 + ney3_6;
	ney3_6 = ney2_4 * w4 + ney3_6;
	ney3_6 = ney2_5 * w5 + ney3_6;
}
void neyron3_7(float w1, float w2, float w3, float w4, float w5) {
	ney3_7 = ney2_1 * w1;
	ney3_7 = ney2_2 * w2 + ney3_7;
	ney3_7 = ney2_3 * w3 + ney3_7;
	ney3_7 = ney2_4 * w4 + ney3_7;
	ney3_7 = ney2_5 * w5 + ney3_7;
}
int neyron4_1(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_1 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_1;
}
int neyron4_2(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_2 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_2;
}
int neyron4_3(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_3 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_3;
}
int neyron4_4(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_4 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_4;
}
int neyron4_5(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_5 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_5;
}
int neyron4_6(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_6 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_6;
}
int neyron4_7(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_7 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_7;
}
int neyron4_8(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_8 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_8;
}
int neyron4_9(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_9 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_9;
}
int neyron4_10(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_10 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_10;
}
int neyron4_11(double w1, double w2, double w3, double w4, double w5, double w6, double w7){
	ney4_11 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_11;
}
int neyron4_12(double w1, double w2, double w3, double w4, double w5, double w6, double w7) {
	ney4_12 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5;
	return ney4_12;
}
int neyron4_13(double w1, double w2, double w3, double w4, double w5, double w6, double w7) {
	ney4_13 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_13;
}
int neyron4_14(double w1, double w2, double w3, double w4, double w5, double w6, double w7) {
	ney4_14 = ney3_1 * w1 + ney3_2 * w2 + ney3_3 * w3 + ney3_4 * w4 + ney3_5 * w5 + ney3_6 * w6 + ney3_7 * w7;
	return ney4_14;
}*/
void allClear() {
	ney2_1 = 0;
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
	ney4_14 =0;
}
#endif