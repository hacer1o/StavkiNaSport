///////////////////
//	   Maded	 //
//		by		 //
//				 //
// @viiiiiiiitya //
//				 //
//				 // 
//				 //
///////////////////
//License
//long license_value = -1;
int days;
float chance_win;
int again;
//База данних
int results_correct[] = {//Результати
	1 , 0 , 2 , 4 , 0 ,10 , 6 , 4 ,11 , 6 , 8 , 3 , 5 , 7 , 0 , 9 , 5 , 6 , 0 ,11 , 2 , 0 , 6 , 0 , 9 , 2 , 0 , 1 , 0 , 1 , 0 , 7 , 7 , 3 , 6 ,11 , 0 , 3 , 4 , 4 , 0 , 8 , 1 ,12 , 8 ,13 , 4 , 7 ,13 , 9 , 9 , 0 ,14 , 0 , 0 , 6 , 9 ,14 , 0 ,11 ,10 ,10 , 0 ,10 ,10
};
int command_correct1[] = { //Команда 1 Ювентус
	1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct2[] = { //Команда 2 Реал Мадрид
	0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct3[] = { //Команда 3 Барселона
	1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct4[] = { //Команда 4 Манчестер Юнайтед
	0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0
};
int command_correct5[] = { //Команда 5 Арсенал
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct6[] = { //Команда 6 Баварія
	0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct7[] = { //Команда 7 Ліверпуль
	0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct8[] = { //Команда 8 Боусія Д
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct9[] = { //Команда 9 Манчестер Сіті
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 1
};
int command_correct10[] = { //Команда 10 Челсі
	0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 1 , 1
};
int command_correct11[] = { //Команда 11 Мілан
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct12[] = {//Команда 12 Байєр
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct13[] = {//Команда 13 Лестер Сіті
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0
};
int command_correct14[] = {//Команда 14 Тоттенгем
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0
};

//Бібліотеки
#include <omp.h>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "first-second.h"
#include "random.h"
#include "provirka.h"
using namespace std;
int correct;
int st;
int real_correct;
int times_correct;

//Нова механіка вибору команд
int command_choose1;
int command_choose2;
//Змінні для зберігання данних нейронів

int ney1_1;
int ney1_2;
int ney1_3;
int ney1_4;
int ney1_5;
int ney1_6;
int ney1_7;
int ney1_8;
int ney1_9;
int ney1_10;
int ney1_11;
int ney1_12;
int ney1_13;
int ney1_14;
double neyr3_1;
double neyr3_2;
double neyr3_3;
double neyr3_4;
double neyr3_5;
double neyr3_6;
double neyr3_7;
double neyr3_8;
double neyr3_9;
double neyr3_10;
double neyr3_11;
double neyr3_12;
double neyr3_13;
double neyr3_14;
//Ініціалізація весов

double w1_1; double w1_2; double w1_3; double w1_4; double w1_5; double w1_6; double w1_7; double w1_8; double w1_9; double w1_10; double w1_11; double w1_12; double w1_13; double w1_14;
double w2_1; double w2_2; double w2_3; double w2_4; double w2_5; double w2_6; double w2_7; double w2_8; double w2_9; double w2_10; double w2_11; double w2_12; double w2_13; double w2_14;
double w3_1; double w3_2; double w3_3; double w3_4; double w3_5; double w3_6; double w3_7; double w3_8; double w3_9; double w3_10; double w3_11; double w3_12; double w3_13; double w3_14;
double w4_1; double w4_2; double w4_3; double w4_4; double w4_5; double w4_6; double w4_7; double w4_8; double w4_9; double w4_10; double w4_11; double w4_12; double w4_13; double w4_14;
double w5_1; double w5_2; double w5_3; double w5_4; double w5_5; double w5_6; double w5_7; double w5_8; double w5_9; double w5_10; double w5_11; double w5_12; double w5_13; double w5_14;

double w2_1_1; double w2_1_2; double w2_1_3; double w2_1_4; double w2_1_5;
double w2_2_1; double w2_2_2; double w2_2_3; double w2_2_4; double w2_2_5;
double w2_3_1; double w2_3_2; double w2_3_3; double w2_3_4; double w2_3_5;
double w2_4_1; double w2_4_2; double w2_4_3; double w2_4_4; double w2_4_5;
double w2_5_1; double w2_5_2; double w2_5_3; double w2_5_4; double w2_5_5;
double w2_6_1; double w2_6_2; double w2_6_3; double w2_6_4; double w2_6_5;
double w2_7_1; double w2_7_2; double w2_7_3; double w2_7_4; double w2_7_5;

double w3_1_1; double w3_1_2; double w3_1_3; double w3_1_4; double w3_1_5; double w3_1_6; double w3_1_7;
double w3_2_1; double w3_2_2; double w3_2_3; double w3_2_4; double w3_2_5; double w3_2_6; double w3_2_7;
double w3_3_1; double w3_3_2; double w3_3_3; double w3_3_4; double w3_3_5; double w3_3_6; double w3_3_7;
double w3_4_1; double w3_4_2; double w3_4_3; double w3_4_4; double w3_4_5; double w3_4_6; double w3_4_7;
double w3_5_1; double w3_5_2; double w3_5_3; double w3_5_4; double w3_5_5; double w3_5_6; double w3_5_7;
double w3_6_1; double w3_6_2; double w3_6_3; double w3_6_4; double w3_6_5; double w3_6_6; double w3_6_7;
double w3_7_1; double w3_7_2; double w3_7_3; double w3_7_4; double w3_7_5; double w3_7_6; double w3_7_7;
double w3_8_1; double w3_8_2; double w3_8_3; double w3_8_4; double w3_8_5; double w3_8_6; double w3_8_7;
double w3_9_1; double w3_9_2; double w3_9_3; double w3_9_4; double w3_9_5; double w3_9_6; double w3_9_7;
double w3_10_1; double w3_10_2; double w3_10_3; double w3_10_4; double w3_10_5; double w3_10_6; double w3_10_7;
double w3_11_1; double w3_11_2; double w3_11_3; double w3_11_4; double w3_11_5; double w3_11_6; double w3_11_7;
double w3_12_1; double w3_12_2; double w3_12_3; double w3_12_4; double w3_12_5; double w3_12_6; double w3_12_7;
double w3_13_1; double w3_13_2; double w3_13_3; double w3_13_4; double w3_13_5; double w3_13_6; double w3_13_7;
double w3_14_1; double w3_14_2; double w3_14_3; double w3_14_4; double w3_14_5; double w3_14_6; double w3_14_7;
//Ініціалізація весов для збереження

double ws1_1; double ws1_2; double ws1_3; double ws1_4; double ws1_5; double ws1_6; double ws1_7; double ws1_8; double ws1_9; double ws1_10; double ws1_11; double ws1_12; double ws1_13; double ws1_14;
double ws2_1; double ws2_2; double ws2_3; double ws2_4; double ws2_5; double ws2_6; double ws2_7; double ws2_8; double ws2_9; double ws2_10; double ws2_11; double ws2_12; double ws2_13; double ws2_14;
double ws3_1; double ws3_2; double ws3_3; double ws3_4; double ws3_5; double ws3_6; double ws3_7; double ws3_8; double ws3_9; double ws3_10; double ws3_11; double ws3_12; double ws3_13; double ws3_14;
double ws4_1; double ws4_2; double ws4_3; double ws4_4; double ws4_5; double ws4_6; double ws4_7; double ws4_8; double ws4_9; double ws4_10; double ws4_11; double ws4_12; double ws4_13; double ws4_14;
double ws5_1; double ws5_2; double ws5_3; double ws5_4; double ws5_5; double ws5_6; double ws5_7; double ws5_8; double ws5_9; double ws5_10; double ws5_11; double ws5_12; double ws5_13; double ws5_14;

double ws2_1_1; double ws2_1_2; double ws2_1_3; double ws2_1_4; double ws2_1_5;
double ws2_2_1; double ws2_2_2; double ws2_2_3; double ws2_2_4; double ws2_2_5;
double ws2_3_1; double ws2_3_2; double ws2_3_3; double ws2_3_4; double ws2_3_5;
double ws2_4_1; double ws2_4_2; double ws2_4_3; double ws2_4_4; double ws2_4_5;
double ws2_5_1; double ws2_5_2; double ws2_5_3; double ws2_5_4; double ws2_5_5;
double ws2_6_1; double ws2_6_2; double ws2_6_3; double ws2_6_4; double ws2_6_5;
double ws2_7_1; double ws2_7_2; double ws2_7_3; double ws2_7_4; double ws2_7_5;

double ws3_1_1; double ws3_1_2; double ws3_1_3; double ws3_1_4; double ws3_1_5; double ws3_1_6; double ws3_1_7;
double ws3_2_1; double ws3_2_2; double ws3_2_3; double ws3_2_4; double ws3_2_5; double ws3_2_6; double ws3_2_7;
double ws3_3_1; double ws3_3_2; double ws3_3_3; double ws3_3_4; double ws3_3_5; double ws3_3_6; double ws3_3_7;
double ws3_4_1; double ws3_4_2; double ws3_4_3; double ws3_4_4; double ws3_4_5; double ws3_4_6; double ws3_4_7;
double ws3_5_1; double ws3_5_2; double ws3_5_3; double ws3_5_4; double ws3_5_5; double ws3_5_6; double ws3_5_7;
double ws3_6_1; double ws3_6_2; double ws3_6_3; double ws3_6_4; double ws3_6_5; double ws3_6_6; double ws3_6_7;
double ws3_7_1; double ws3_7_2; double ws3_7_3; double ws3_7_4; double ws3_7_5; double ws3_7_6; double ws3_7_7;
double ws3_8_1; double ws3_8_2; double ws3_8_3; double ws3_8_4; double ws3_8_5; double ws3_8_6; double ws3_8_7;
double ws3_9_1; double ws3_9_2; double ws3_9_3; double ws3_9_4; double ws3_9_5; double ws3_9_6; double ws3_9_7;
double ws3_10_1; double ws3_10_2; double ws3_10_3; double ws3_10_4; double ws3_10_5; double ws3_10_6; double ws3_10_7;
double ws3_11_1; double ws3_11_2; double ws3_11_3; double ws3_11_4; double ws3_11_5; double ws3_11_6; double ws3_11_7;
double ws3_12_1; double ws3_12_2; double ws3_12_3; double ws3_12_4; double ws3_12_5; double ws3_12_6; double ws3_12_7;
double ws3_13_1; double ws3_13_2; double ws3_13_3; double ws3_13_4; double ws3_13_5; double ws3_13_6; double ws3_13_7;
double ws3_14_1; double ws3_14_2; double ws3_14_3; double ws3_14_4; double ws3_14_5; double ws3_14_6; double ws3_14_7;

void neyro_start() {
	neyron2_1(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w1_1, w1_2, w1_3, w1_4, w1_5, w1_6, w1_7, w1_8, w1_9, w1_10, w1_11, w1_12, w1_13, w1_14);
	neyron2_2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w2_1, w2_2, w2_3, w2_4, w2_5, w2_6, w2_7, w2_8, w2_9, w2_10, w2_11, w2_12, w2_13, w2_14);
	neyron2_3(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w3_1, w3_2, w3_3, w3_4, w3_5, w3_6, w3_7, w3_8, w3_9, w3_10, w3_11, w3_12, w3_13, w3_14);
	neyron2_4(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w4_1, w4_2, w4_3, w4_4, w4_5, w4_6, w4_7, w4_8, w4_9, w4_10, w4_11, w4_12, w4_13, w4_14);
	neyron2_5(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w5_1, w5_2, w5_3, w5_4, w5_5, w5_6, w5_7, w5_8, w5_9, w5_10, w5_11, w5_12, w5_13, w5_14);

	neyron3_1(w2_1_1, w2_1_2, w2_1_3, w2_1_4, w2_1_5);
	neyron3_2(w2_2_1, w2_2_2, w2_2_3, w2_2_4, w2_2_5);
	neyron3_3(w2_3_1, w2_3_2, w2_3_3, w2_3_4, w2_3_5);
	neyron3_4(w2_4_1, w2_4_2, w2_4_3, w2_4_4, w2_4_5);
	neyron3_5(w2_5_1, w2_5_2, w2_5_3, w2_5_4, w2_5_5);
	neyron3_6(w2_6_1, w2_6_2, w2_6_3, w2_6_4, w2_6_5);
	neyron3_7(w2_7_1, w2_7_2, w2_7_3, w2_7_4, w2_7_5);

	neyr3_1 = neyron4_1(w3_1_1, w3_1_2, w3_1_3, w3_1_4, w3_1_5, w3_1_6, w3_1_7);
	neyr3_2 = neyron4_2(w3_2_1, w3_2_2, w3_2_3, w3_2_4, w3_2_5, w3_2_6, w3_2_7);
	neyr3_3 = neyron4_3(w3_3_1, w3_3_2, w3_3_3, w3_3_4, w3_3_5, w3_3_6, w3_3_7);
	neyr3_4 = neyron4_4(w3_4_1, w3_4_2, w3_4_3, w3_4_4, w3_4_5, w3_4_6, w3_4_7);
	neyr3_5 = neyron4_5(w3_5_1, w3_5_2, w3_5_3, w3_5_4, w3_5_5, w3_5_6, w3_5_7);
	neyr3_6 = neyron4_6(w3_6_1, w3_6_2, w3_6_3, w3_6_4, w3_6_5, w3_6_6, w3_6_7);
	neyr3_7 = neyron4_7(w3_7_1, w3_7_2, w3_7_3, w3_7_4, w3_7_5, w3_7_6, w3_7_7);
	neyr3_8 = neyron4_8(w3_8_1, w3_8_2, w3_8_3, w3_8_4, w3_8_5, w3_8_6, w3_8_7);
	neyr3_9 = neyron4_9(w3_9_1, w3_9_2, w3_9_3, w3_9_4, w3_9_5, w3_9_6, w3_9_7);
	neyr3_10 = neyron4_10(w3_10_1, w3_10_2, w3_10_3, w3_10_4, w3_10_5, w3_10_6, w3_10_7);
	neyr3_11 = neyron4_11(w3_11_1, w3_11_2, w3_11_3, w3_11_4, w3_11_5, w3_11_6, w3_11_7);
	neyr3_12 = neyron4_12(w3_12_1, w3_12_2, w3_12_3, w3_12_4, w3_12_5, w3_12_6, w3_12_7);
	neyr3_13 = neyron4_13(w3_13_1, w3_13_2, w3_13_3, w3_13_4, w3_13_5, w3_13_6, w3_13_7);
	neyr3_14 = neyron4_14(w3_14_1, w3_14_2, w3_14_3, w3_14_4, w3_14_5, w3_14_6, w3_14_7);
}
int arifmetic(double a, double b) {
	a = a + b;
	a = a / 2;
	return a;
}
void do_correct() {
	if (ney1_1 == 0) neyr3_1 = 0;
	if (neyr3_1 < 0) neyr3_1 = neyr3_1 * -1;
	if (ney1_2 == 0) neyr3_2 = 0;
	if (neyr3_2 < 0) neyr3_2 = neyr3_2 * -1;
	if (ney1_3 == 0) neyr3_3 = 0;
	if (neyr3_3 < 0) neyr3_3 = neyr3_3 * -1;
	if (ney1_4 == 0) neyr3_4 = 0;
	if (neyr3_4 < 0) neyr3_4 = neyr3_4 * -1;
	if (ney1_5 == 0) neyr3_5 = 0;
	if (neyr3_5 < 0) neyr3_5 = neyr3_5 * -1;
	if (ney1_6 == 0) neyr3_6 = 0;
	if (neyr3_6 < 0) neyr3_6 = neyr3_6 * -1;
	if (ney1_7 == 0) neyr3_7 = 0;
	if (neyr3_7 < 0) neyr3_7 = neyr3_7 * -1;
	if (ney1_8 == 0) neyr3_8 = 0;
	if (neyr3_8 < 0) neyr3_8 = neyr3_8 * -1;
	if (ney1_9 == 0) neyr3_9 = 0;
	if (neyr3_9 < 0) neyr3_9 = neyr3_9 * -1;
	if (ney1_10 == 0) neyr3_10 = 0;
	if (neyr3_10 < 0) neyr3_10 = neyr3_10 * -1;
	if (ney1_11 == 0) neyr3_11 = 0;
	if (neyr3_11 < 0) neyr3_11 = neyr3_11 * -1;
	if (ney1_12 == 0) neyr3_12 = 0;
	if (neyr3_12 < 0) neyr3_12 = neyr3_12 * -1;
	if (ney1_13 == 0) neyr3_13 = 0;
	if (neyr3_13 < 0) neyr3_13 = neyr3_13 * -1;
	if (ney1_14 == 0) neyr3_14 = 0;
	if (neyr3_14 < 0) neyr3_14 = neyr3_14 * -1;
}
void allRandom() {
	w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran();	 w1_12 = ran(); w1_13 = ran(); w1_14 = ran();
	w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran();	 w2_12 = ran(); w2_13 = ran(); w2_14 = ran();
	w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran();  w3_12 = ran(); w3_13 = ran(); w3_14 = ran();
	w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran();  w4_12 = ran(); w4_13 = ran(); w4_14 = ran();
	w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran();  w5_12 = ran(); w5_13 = ran(); w5_14 = ran();

	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran();

	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran();
}
void random1() {
	w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran();	 w1_12 = ran(); w1_13 = ran(); w1_14 = ran();
	w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran();	 w2_12 = ran(); w2_13 = ran(); w2_14 = ran();
	w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran();  w3_12 = ran(); w3_13 = ran(); w3_14 = ran();
	w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran();  w4_12 = ran(); w4_13 = ran(); w4_14 = ran();
	w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran();  w5_12 = ran(); w5_13 = ran(); w5_14 = ran();
}

void random2() {
	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran();
}
void random3() {

	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran();
}
void save_first() {
	ws1_1 = w1_1; ws1_2 = w1_2; ws1_3 = w1_3; ws1_4 = w1_4; ws1_5 = w1_5; ws1_6 = w1_6; ws1_7 = w1_7; ws1_8 = w1_8; ws1_9 = w1_9; ws1_10 = w1_10; ws1_11 = w1_11; ws1_12 = w1_12; ws1_13 = w1_13; ws1_14 = w1_14;
	ws2_1 = w2_1; ws2_2 = w2_2; ws2_3 = w2_3; ws2_4 = w2_4; ws2_5 = w2_5; ws2_6 = w2_6; ws2_7 = w2_7; ws2_8 = w2_8; ws2_9 = w2_9; ws2_10 = w2_10; ws2_11 = w2_11; ws2_12 = w2_12; ws2_13 = w2_13; ws2_14 = w2_14;
	ws3_1 = w3_1; ws3_2 = w3_2; ws3_3 = w3_3; ws3_4 = w3_4; ws3_5 = w3_5; ws3_6 = w3_6; ws3_7 = w3_7; ws3_8 = w3_8; ws3_9 = w3_9; ws3_10 = w3_10; ws3_11 = w3_11; ws3_12 = w3_12; ws3_13 = w3_13; ws3_14 = w3_14;
	ws4_1 = w4_1; ws4_2 = w4_2; ws4_3 = w4_3; ws4_4 = w4_4; ws4_5 = w4_5; ws4_6 = w4_6; ws4_7 = w4_7; ws4_8 = w4_8; ws4_9 = w4_9; ws4_10 = w4_10; ws4_11 = w4_11; ws4_12 = w4_12; ws4_13 = w4_13; ws4_14 = w4_14;
	ws5_1 = w5_1; ws5_2 = w5_2; ws5_3 = w5_3; ws5_4 = w5_4; ws5_5 = w5_5; ws5_6 = w5_6; ws5_7 = w5_7; ws5_8 = w5_8; ws5_9 = w5_9; ws5_10 = w5_10; ws5_11 = w5_11; ws5_12 = w5_12; ws5_13 = w5_13; ws5_14 = w5_14;

	ws2_1_1 = w2_1_1; ws2_1_2 = w2_1_2; ws2_1_3 = w2_1_3; ws2_1_4 = w2_1_4; ws2_1_5 = w2_1_5;
	ws2_2_1 = w2_2_1; ws2_2_2 = w2_2_2; ws2_2_3 = w2_2_3; ws2_2_4 = w2_2_4; ws2_2_4 = w2_2_4;
	ws2_3_1 = w2_3_1; ws2_3_2 = w2_3_2; ws2_3_3 = w2_3_3; ws2_3_4 = w2_3_4; ws2_3_4 = w2_3_4;
	ws2_4_1 = w2_4_1; ws2_4_2 = w2_4_2; ws2_4_3 = w2_4_3; ws2_4_4 = w2_4_4; ws2_4_4 = w2_4_4;
	ws2_5_1 = w2_5_1; ws2_5_2 = w2_5_2; ws2_5_3 = w2_5_3; ws2_5_4 = w2_5_4; ws2_5_4 = w2_5_4;
	ws2_6_1 = w2_6_1; ws2_6_2 = w2_6_2; ws2_6_3 = w2_6_3; ws2_6_4 = w2_6_4; ws2_6_4 = w2_6_4;
	ws2_7_1 = w2_7_1; ws2_7_2 = w2_7_2; ws2_7_3 = w2_7_3; ws2_7_4 = w2_7_4; ws2_7_4 = w2_7_4;

	ws3_1_1 = w3_1_1; ws3_1_2 = w3_1_2; ws3_1_3 = w3_1_3; ws3_1_4 = w3_1_4; ws3_1_5 = w3_1_5; ws3_1_6 = w3_1_6; ws3_1_7 = w3_1_7;
	ws3_2_1 = w3_2_1; ws3_2_2 = w3_2_2; ws3_2_3 = w3_2_3; ws3_2_4 = w3_2_4; ws3_2_5 = w3_2_5; ws3_2_6 = w3_2_6; ws3_2_7 = w3_2_7;
	ws3_3_1 = w3_3_1; ws3_3_2 = w3_3_2; ws3_3_3 = w3_3_3; ws3_3_4 = w3_3_4; ws3_3_5 = w3_3_5; ws3_3_6 = w3_3_6; ws3_3_7 = w3_3_7;
	ws3_4_1 = w3_4_1; ws3_4_2 = w3_4_2; ws3_4_3 = w3_4_3; ws3_4_4 = w3_4_4; ws3_4_5 = w3_4_5; ws3_4_6 = w3_4_6; ws3_4_7 = w3_4_7;
	ws3_5_1 = w3_5_1; ws3_5_2 = w3_5_2; ws3_5_3 = w3_5_3; ws3_5_4 = w3_5_4; ws3_5_5 = w3_5_5; ws3_5_6 = w3_5_6; ws3_5_7 = w3_5_7;
	ws3_6_1 = w3_6_1; ws3_6_2 = w3_6_2; ws3_6_3 = w3_6_3; ws3_6_4 = w3_6_4; ws3_6_5 = w3_6_5; ws3_6_6 = w3_6_6; ws3_6_7 = w3_6_7;
	ws3_7_1 = w3_7_1; ws3_7_2 = w3_7_2; ws3_7_3 = w3_7_3; ws3_7_4 = w3_7_4; ws3_7_5 = w3_7_5; ws3_7_6 = w3_7_6; ws3_7_7 = w3_7_7;
	ws3_8_1 = w3_8_1; ws3_8_2 = w3_8_2; ws3_8_3 = w3_8_3; ws3_8_4 = w3_8_4; ws3_8_5 = w3_8_5; ws3_8_6 = w3_8_6; ws3_8_7 = w3_8_7;
	ws3_9_1 = w3_9_1; ws3_9_2 = w3_9_2; ws3_9_3 = w3_9_3; ws3_9_4 = w3_9_4; ws3_9_5 = w3_9_5; ws3_9_6 = w3_9_6; ws3_9_7 = w3_9_7;
	ws3_10_1 = w3_10_1; ws3_10_2 = w3_10_2; ws3_10_3 = w3_10_3; ws3_10_4 = w3_10_4; ws3_10_5 = w3_10_5; ws3_10_6 = w3_10_6; ws3_10_7 = w3_10_7;
	ws3_11_1 = w3_11_1; ws3_11_2 = w3_11_2; ws3_11_3 = w3_11_3; ws3_11_4 = w3_11_4; ws3_11_5 = w3_11_5; ws3_11_6 = w3_11_6; ws3_11_7 = w3_11_7;
	ws3_12_1 = w3_12_1; ws3_12_2 = w3_12_2; ws3_12_3 = w3_12_3; ws3_12_4 = w3_12_4; ws3_12_5 = w3_12_5; ws3_12_6 = w3_12_6; ws3_12_7 = w3_12_7;
	ws3_13_1 = w3_13_1; ws3_13_2 = w3_13_2; ws3_13_3 = w3_13_3; ws3_13_4 = w3_13_4; ws3_13_5 = w3_13_5; ws3_13_6 = w3_13_6; ws3_13_7 = w3_13_7;
	ws3_14_1 = w3_14_1; ws3_14_2 = w3_14_2; ws3_14_3 = w3_14_3; ws3_14_4 = w3_14_4; ws3_14_5 = w3_14_5; ws3_14_6 = w3_14_6; ws3_14_7 = w3_14_7;
}
void save1() {
	ws1_1 = arifmetic(ws1_1, w1_1); ws1_2 = arifmetic(ws1_2, w1_2); ws1_3 = arifmetic(ws1_3, w1_3); ws1_4 = arifmetic(ws1_4, w1_4); ws1_5 = arifmetic(ws1_5, w1_5); ws1_6 = arifmetic(ws1_6, w1_6); ws1_7 = arifmetic(ws1_7, w1_7); ws1_8 = arifmetic(ws1_8, w1_8); ws1_9 = arifmetic(ws1_9, w1_9); ws1_10 = arifmetic(ws1_10, w1_10); ws1_11 = arifmetic(ws1_11, w1_11); ws1_12 = arifmetic(ws1_12, w1_12); ws1_13 = arifmetic(ws1_13, w1_13); ws1_14 = arifmetic(ws1_14, w1_14);
	ws2_1 = arifmetic(ws2_1, w2_1); ws2_2 = arifmetic(ws2_2, w2_2); ws2_3 = arifmetic(ws2_3, w2_3); ws2_4 = arifmetic(ws2_4, w2_4); ws2_5 = arifmetic(ws2_5, w2_5); ws2_6 = arifmetic(ws2_6, w2_6); ws2_7 = arifmetic(ws2_7, w2_7); ws2_8 = arifmetic(ws2_8, w2_8); ws2_9 = arifmetic(ws2_9, w2_9); ws2_10 = arifmetic(ws2_10, w2_10); ws2_11 = arifmetic(ws2_11, w2_11); ws2_12 = arifmetic(ws2_12, w2_12); ws2_13 = arifmetic(ws2_13, w2_13); ws2_14 = arifmetic(ws2_14, w2_14);
	ws3_1 = arifmetic(ws3_1, w3_1); ws2_2 = arifmetic(ws3_2, w3_2); ws3_3 = arifmetic(ws3_3, w3_3); ws3_4 = arifmetic(ws3_4, w3_4); ws3_5 = arifmetic(ws3_5, w3_5); ws3_6 = arifmetic(ws3_6, w3_6); ws3_7 = arifmetic(ws3_7, w3_7); ws3_8 = arifmetic(ws3_8, w3_8); ws3_9 = arifmetic(ws3_9, w3_9); ws3_10 = arifmetic(ws3_10, w3_10); ws3_11 = arifmetic(ws3_11, w3_11); ws3_12 = arifmetic(ws3_12, w3_12); ws3_13 = arifmetic(ws3_13, w3_13); ws3_14 = arifmetic(ws3_14, w3_14);
	ws4_1 = arifmetic(ws4_1, w4_1); ws4_2 = arifmetic(ws4_2, w4_2); ws4_3 = arifmetic(ws4_3, w4_3); ws4_4 = arifmetic(ws4_4, w4_4); ws4_5 = arifmetic(ws4_5, w4_5); ws4_6 = arifmetic(ws4_6, w4_6); ws4_7 = arifmetic(ws4_7, w4_7); ws4_8 = arifmetic(ws4_8, w4_8); ws4_9 = arifmetic(ws4_9, w4_9); ws4_10 = arifmetic(ws4_10, w4_10); ws4_11 = arifmetic(ws4_11, w4_11); ws4_12 = arifmetic(ws4_12, w4_12); ws4_13 = arifmetic(ws4_13, w4_13); ws4_14 = arifmetic(ws4_14, w4_14);
	ws5_1 = arifmetic(ws5_1, w5_1); ws5_2 = arifmetic(ws5_2, w5_2); ws5_3 = arifmetic(ws5_3, w5_3); ws5_4 = arifmetic(ws5_4, w5_4); ws5_5 = arifmetic(ws5_5, w5_5); ws5_6 = arifmetic(ws5_6, w5_6); ws5_7 = arifmetic(ws5_7, w5_7); ws5_8 = arifmetic(ws5_8, w5_8); ws5_9 = arifmetic(ws5_9, w5_9); ws5_10 = arifmetic(ws5_10, w5_10); ws5_11 = arifmetic(ws5_11, w5_11); ws5_12 = arifmetic(ws5_12, w5_12); ws5_13 = arifmetic(ws5_13, w5_13); ws5_14 = arifmetic(ws5_14, w5_14);
}
void save2() {
	ws2_1_1 = arifmetic(ws2_1_1, w2_1_1); ws2_1_2 = arifmetic(ws2_1_2, w2_1_2); ws2_1_3 = arifmetic(ws2_1_3, w2_1_3); ws2_1_4 = arifmetic(ws2_1_4, w2_1_4); ws2_1_5 = arifmetic(ws2_1_5, w2_1_5);
	ws2_2_1 = arifmetic(ws2_2_1, w2_2_1); ws2_2_2 = arifmetic(ws2_2_2, w2_2_2); ws2_2_3 = arifmetic(ws2_2_3, w2_2_3); ws2_2_4 = arifmetic(ws2_2_4, w2_2_4); ws2_2_5 = arifmetic(ws2_2_5, w2_2_5);
	ws2_3_1 = arifmetic(ws2_3_1, w2_3_1); ws2_3_2 = arifmetic(ws2_3_2, w2_3_2); ws2_3_3 = arifmetic(ws2_3_3, w2_3_3); ws2_3_4 = arifmetic(ws2_3_4, w2_3_4); ws2_3_5 = arifmetic(ws2_3_5, w2_3_5);
	ws2_4_1 = arifmetic(ws2_4_1, w2_4_1); ws2_4_2 = arifmetic(ws2_4_2, w2_4_2); ws2_4_3 = arifmetic(ws2_4_3, w2_4_3); ws2_4_4 = arifmetic(ws2_4_4, w2_4_4); ws2_4_5 = arifmetic(ws2_4_5, w2_4_5);
	ws2_5_1 = arifmetic(ws2_5_1, w2_5_1); ws2_5_2 = arifmetic(ws2_5_2, w2_5_2); ws2_5_3 = arifmetic(ws2_5_3, w2_5_3); ws2_5_4 = arifmetic(ws2_5_4, w2_5_4); ws2_5_5 = arifmetic(ws2_5_5, w2_5_5);
	ws2_6_1 = arifmetic(ws2_6_1, w2_6_1); ws2_6_2 = arifmetic(ws2_6_2, w2_6_2); ws2_6_3 = arifmetic(ws2_6_3, w2_6_3); ws2_6_4 = arifmetic(ws2_6_4, w2_6_4); ws2_6_5 = arifmetic(ws2_6_5, w2_6_5);
	ws2_7_1 = arifmetic(ws2_7_1, w2_7_1); ws2_7_2 = arifmetic(ws2_7_2, w2_7_2); ws2_7_3 = arifmetic(ws2_7_3, w2_7_3); ws2_7_4 = arifmetic(ws2_7_4, w2_7_4); ws2_7_5 = arifmetic(ws2_7_5, w2_7_5);
}
void save3() {
	ws3_1_1 = arifmetic(ws3_1_1, w3_1_1); ws3_1_2 = arifmetic(ws3_1_2, w3_1_2); ws3_1_3 = arifmetic(ws3_1_3, w3_1_3); ws3_1_4 = arifmetic(ws3_1_4, w3_1_4); ws3_1_5 = arifmetic(ws3_1_5, w3_1_5); ws3_1_6 = arifmetic(ws3_1_6, w3_1_6); ws3_1_7 = arifmetic(ws3_1_7, w3_1_7);
	ws3_2_1 = arifmetic(ws3_2_1, w3_2_1); ws3_2_2 = arifmetic(ws3_2_2, w3_2_2); ws3_2_3 = arifmetic(ws3_2_3, w3_2_3); ws3_2_4 = arifmetic(ws3_2_4, w3_2_4); ws3_2_5 = arifmetic(ws3_2_5, w3_2_5); ws3_2_6 = arifmetic(ws3_2_6, w3_2_6); ws3_2_7 = arifmetic(ws3_2_7, w3_2_7);
	ws3_3_1 = arifmetic(ws3_3_1, w3_3_1); ws3_3_2 = arifmetic(ws3_3_2, w3_3_2); ws3_3_3 = arifmetic(ws3_3_3, w3_3_3); ws3_3_4 = arifmetic(ws3_3_4, w3_3_4); ws3_3_5 = arifmetic(ws3_3_5, w3_3_5); ws3_3_6 = arifmetic(ws3_3_6, w3_3_6); ws3_3_7 = arifmetic(ws3_3_7, w3_3_7);
	ws3_4_1 = arifmetic(ws3_4_1, w3_4_1); ws3_4_2 = arifmetic(ws3_4_2, w3_4_2); ws3_4_3 = arifmetic(ws3_4_3, w3_4_3); ws3_4_4 = arifmetic(ws3_4_4, w3_4_4); ws3_4_5 = arifmetic(ws3_4_5, w3_4_5); ws3_4_6 = arifmetic(ws3_4_6, w3_4_6); ws3_4_7 = arifmetic(ws3_4_7, w3_4_7);
	ws3_5_1 = arifmetic(ws3_5_1, w3_5_1); ws3_5_2 = arifmetic(ws3_5_2, w3_5_2); ws3_5_3 = arifmetic(ws3_5_3, w3_5_3); ws3_5_4 = arifmetic(ws3_5_4, w3_5_4); ws3_5_5 = arifmetic(ws3_5_5, w3_5_5); ws3_5_6 = arifmetic(ws3_5_6, w3_5_6); ws3_5_7 = arifmetic(ws3_5_7, w3_5_7);
	ws3_6_1 = arifmetic(ws3_6_1, w3_6_1); ws3_6_2 = arifmetic(ws3_6_2, w3_6_2); ws3_6_3 = arifmetic(ws3_6_3, w3_6_3); ws3_6_4 = arifmetic(ws3_6_4, w3_6_4); ws3_6_5 = arifmetic(ws3_6_5, w3_6_5); ws3_6_6 = arifmetic(ws3_6_6, w3_6_6); ws3_6_7 = arifmetic(ws3_6_7, w3_6_7);
	ws3_7_1 = arifmetic(ws3_7_1, w3_7_1); ws3_7_2 = arifmetic(ws3_7_2, w3_7_2); ws3_7_3 = arifmetic(ws3_7_3, w3_7_3); ws3_7_4 = arifmetic(ws3_7_4, w3_7_4); ws3_7_5 = arifmetic(ws3_7_5, w3_7_5); ws3_7_6 = arifmetic(ws3_7_6, w3_7_6); ws3_7_7 = arifmetic(ws3_7_7, w3_7_7);
	ws3_8_1 = arifmetic(ws3_8_1, w3_8_1); ws3_8_2 = arifmetic(ws3_8_2, w3_8_2); ws3_8_3 = arifmetic(ws3_8_3, w3_8_3); ws3_8_4 = arifmetic(ws3_8_4, w3_8_4); ws3_8_5 = arifmetic(ws3_8_5, w3_8_5); ws3_8_6 = arifmetic(ws3_8_6, w3_8_6); ws3_8_7 = arifmetic(ws3_8_7, w3_8_7);
	ws3_9_1 = arifmetic(ws3_9_1, w3_9_1); ws3_9_2 = arifmetic(ws3_9_2, w3_9_2); ws3_9_3 = arifmetic(ws3_9_3, w3_9_3); ws3_9_4 = arifmetic(ws3_9_4, w3_9_4); ws3_9_5 = arifmetic(ws3_9_5, w3_9_5); ws3_9_6 = arifmetic(ws3_9_6, w3_9_6); ws3_9_7 = arifmetic(ws3_9_7, w3_9_7);
	ws3_10_1 = arifmetic(ws3_10_1, w3_10_1); ws3_10_2 = arifmetic(ws3_10_2, w3_10_2); ws3_10_3 = arifmetic(ws3_10_3, w3_10_3); ws3_10_4 = arifmetic(ws3_10_4, w3_10_4); ws3_10_5 = arifmetic(ws3_10_5, w3_10_5); ws3_10_6 = arifmetic(ws3_10_6, w3_10_6); ws3_10_7 = arifmetic(ws3_10_7, w3_10_7);
	ws3_11_1 = arifmetic(ws3_11_1, w3_11_1); ws3_11_2 = arifmetic(ws3_11_2, w3_11_2); ws3_11_3 = arifmetic(ws3_11_3, w3_11_3); ws3_11_4 = arifmetic(ws3_11_4, w3_11_4); ws3_11_5 = arifmetic(ws3_11_5, w3_11_5); ws3_11_6 = arifmetic(ws3_11_6, w3_11_6); ws3_11_7 = arifmetic(ws3_11_7, w3_11_7);
	ws3_12_1 = arifmetic(ws3_12_1, w3_12_1); ws3_12_2 = arifmetic(ws3_12_2, w3_12_2); ws3_12_3 = arifmetic(ws3_12_3, w3_12_3); ws3_12_4 = arifmetic(ws3_12_4, w3_12_4); ws3_12_5 = arifmetic(ws3_12_5, w3_12_5); ws3_12_6 = arifmetic(ws3_12_6, w3_12_6); ws3_12_7 = arifmetic(ws3_12_7, w3_12_7);
	ws3_13_1 = arifmetic(ws3_13_1, w3_13_1); ws3_13_2 = arifmetic(ws3_13_2, w3_13_2); ws3_13_3 = arifmetic(ws3_13_3, w3_13_3); ws3_13_4 = arifmetic(ws3_13_4, w3_13_4); ws3_13_5 = arifmetic(ws3_13_5, w3_13_5); ws3_13_6 = arifmetic(ws3_13_6, w3_13_6); ws3_13_7 = arifmetic(ws3_13_7, w3_13_7);
	ws3_14_1 = arifmetic(ws3_14_1, w3_14_1); ws3_14_2 = arifmetic(ws3_14_2, w3_14_2); ws3_14_3 = arifmetic(ws3_14_3, w3_14_3); ws3_14_4 = arifmetic(ws3_14_4, w3_14_4); ws3_14_5 = arifmetic(ws3_14_5, w3_14_5); ws3_14_6 = arifmetic(ws3_14_6, w3_14_6); ws3_14_7 = arifmetic(ws3_14_7, w3_14_7);
}
void load_base() {
	real_correct = results_correct[st];
	ney1_1 = command_correct1[st];
	ney1_2 = command_correct2[st];
	ney1_3 = command_correct3[st];
	ney1_4 = command_correct4[st];
	ney1_5 = command_correct5[st];
	ney1_6 = command_correct6[st];
	ney1_7 = command_correct7[st];
	ney1_8 = command_correct8[st];
	ney1_9 = command_correct9[st];
	ney1_10 = command_correct10[st];
	ney1_11 = command_correct11[st];
	ney1_12 = command_correct12[st];
	ney1_13 = command_correct13[st];
	ney1_14 = command_correct14[st];
}
void choose_command() {
	if (command_choose1 == 1) ney1_1 = 1;
	else if (command_choose1 == 2) ney1_2 = 1;
	else if (command_choose1 == 3) ney1_3 = 1;
	else if (command_choose1 == 4) ney1_4 = 1;
	else if (command_choose1 == 5) ney1_5 = 1;
	else if (command_choose1 == 6) ney1_6 = 1;
	else if (command_choose1 == 7) ney1_7 = 1;
	else if (command_choose1 == 8) ney1_8 = 1;
	else if (command_choose1 == 9) ney1_9 = 1;
	else if (command_choose1 == 10) ney1_10 = 1;
	else if (command_choose1 == 11) ney1_11 = 1;
	else if (command_choose1 == 12) ney1_12 = 1;
	else if (command_choose1 == 13) ney1_13 = 1;
	else ney1_14 = 1;

	if (command_choose2 == 1) ney1_1 = 1;
	else if (command_choose2 == 2) ney1_2 = 1;
	else if (command_choose2 == 3) ney1_3 = 1;
	else if (command_choose2 == 4) ney1_4 = 1;
	else if (command_choose2 == 5) ney1_5 = 1;
	else if (command_choose2 == 6) ney1_6 = 1;
	else if (command_choose2 == 7) ney1_7 = 1;
	else if (command_choose2 == 8) ney1_8 = 1;
	else if (command_choose2 == 9) ney1_9 = 1;
	else if (command_choose2 == 10) ney1_10 = 1;
	else if (command_choose2 == 11) ney1_11 = 1;
	else if (command_choose2 == 12) ney1_12 = 1;
	else if (command_choose2 == 13) ney1_13 = 1;
	else ney1_14 = 1;
}
int main(int argc, char* argv[]) {
	omp_set_num_threads(4);
	//#pragma omp parallel for
	setlocale(LC_ALL, "rus");
	/*ofstream fout("data_base", ios_base::trunc);
	/*ifstream fin("data_base" , ios_base::in); // открыли файл для чтения
	fin >> lmasive;
	fin.close();*/
	//-----------------Ліцензія----------------------
		/*time_t seconds;

		seconds = time(NULL);
		days = seconds / 60 / 60 /24;
		if (days >= license_value && license_value != -1) {
			cout<<("Please buy a new license")<<endl;
			cout << ("Full Edition 24.99$ per mouth: ") << endl;
			cout << ("Have big Data-Base, all updates is free") << endl << endl;
			cout << ("Medium Edition  14.99$ per mouth") << endl;
			cout << ("Have medium Data-Base, some updates are paid") << endl;
			cout << ("Updates are cost 0.99$ - 4.99$") << endl << endl;
			cout << ("Basic Edition 9.99$ per mouth") << endl;
			cout << ("Have small Data-Base, all updates are paid") << endl;
			cout << ("Updates are cost 0.99$ - 9.99$") << endl;
			goto end;
		}
		if (license_value != -1) {
			cout << ("You can use this programe: ") << license_value - days << (" days") << endl;
		}
		else {
			cout << ("You have unlimited license") << endl;
		}*/

		//-----------------Навчання----------------------

	cout << "Programe is learning" << endl << "Please wait" << endl << endl;
#pragma omp parallel for
	for (int i = 0; i <= 1000000; i++) {
		load_base();
		allRandom();
		neyro_start();
		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
		allClear();
		if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
			st = 0;
		}
		if (correct == real_correct && times_correct == 0) {
			save_first();
		}
		if (correct == real_correct && times_correct != 0) {
			save1();
			save2();
			save3();
		}
		st++;
	}
	times_correct = 0;
	allClear();
	//-----------------------------------------------------------Друга-Стадія-Навчання------------------------------------------------
#pragma omp parallel for
	for (int d = 0; d < 2000; d++) {
		for (int a = 0; a < 1000; a++) {
			load_base();
			random3();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save3();
			}
			st++;
		}
		for (int b = 0; b < 1000; b++) {
			random2();
			load_base();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			st++;
		}
		for (int c = 0; c < 1000; c++) {
			random1();
			load_base();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save1();
			}
			st++;
		}
	}
	//-----------------------------------------------------------Третя-Стадія-Навчання------------------------------------------------

	for (int c = 0; c < 50000; c++) {
		allRandom();
		load_base();
		neyro_start();
		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
		allClear();
		if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
			st = 0;
		}
		if (correct == real_correct) {
			save1();
			save2();
			save3();
		}
		st++;
	}
	//---------------------------------------------------------------Четверта-Стадія-Навчання---------------------------------------------

	for (int d = 0; d < 1000; d++) {
		for (int a = 0; a < 1000; a++) {
			load_base();
			random3();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			st++;
			if (correct == real_correct) {
				save3();
			}
		}
		for (int b = 0; b < 1000; b++) {
			random2();
			load_base();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			st++;
		}
		for (int c = 0; c < 1000; c++) {
			random1();
			load_base();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(command_correct1) / sizeof(command_correct1[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save1();
			}
			st++;
		}
	}

	//1 Ювентус
	//2 Реал Мадрид
	//3 Барселона
	//4 Манчестер Юнайтед
	//5 Арсенал
	//6 Баварія
	//7 Ліверпуль
	//8 Борусія
	//9 Манчестер Сіті
	//10 Челси
	//11 Мілан 
	for (int i = 0; i < 999; i++) {
		//-----------------------------------------------------------------Опитування-----------------------------------------------------
		ney1_1 = 0;
		ney1_2 = 0;
		ney1_3 = 0;
		ney1_4 = 0;
		ney1_5 = 0;
		ney1_6 = 0;
		ney1_7 = 0;
		ney1_8 = 0;
		ney1_9 = 0;
		ney1_10 = 0;
		ney1_11 = 0;
		ney1_12 = 0;
		ney1_13 = 0;
		ney1_14 = 0;
		allClear();

		cout << ("1.Yuwentus") << endl;
		cout << ("2.Real Madrid") << endl;
		cout << ("3.Barselona") << endl;
		cout << ("4.Manchester United") << endl;
		cout << ("5.Arsenal") << endl;
		cout << ("6.Bavaria") << endl;
		cout << ("7.Liverpoul") << endl;
		cout << ("8.Borussia D") << endl;
		cout << ("9.Manchester City") << endl;
		cout << ("10.Chelsi") << endl;
		cout << ("11.Milan") << endl;
		cout << ("12.Bayer") << endl;
		cout << ("13.Lester") << endl;
		cout << ("14.Tottenham") << endl;
		cout << ("Write number of first command") << endl;
		cin >> command_choose1;
		cout << ("Write number of second command") << endl;
		cin >> command_choose2;
		if (command_choose1 == command_choose2 || command_choose1 > 14 || command_choose2 > 14 || command_choose1 < 1 || command_choose2 < 1) {
			cout << "error" << endl;
			goto end;
		}
		choose_command();
		//------------------------------------------------------------------Нейрони--------------------------------------------------------

		neyron2_1(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws1_1, ws1_2, ws1_3, ws1_4, ws1_5, ws1_6, ws1_7, ws1_8, ws1_9, ws1_10, ws1_11, ws1_12, ws1_13, ws1_14);
		neyron2_2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws2_1, ws2_2, ws2_3, ws2_4, ws2_5, ws2_6, ws2_7, ws2_8, ws2_9, ws2_10, ws2_11, ws2_12, ws2_13, ws2_14);
		neyron2_3(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws3_1, ws3_2, ws3_3, ws3_4, ws3_5, ws3_6, ws3_7, ws3_8, ws3_9, ws3_10, ws3_11, ws3_12, ws3_13, ws3_14);
		neyron2_4(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws4_1, ws4_2, ws4_3, ws4_4, ws4_5, ws4_6, ws4_7, ws4_8, ws4_9, ws4_10, ws4_11, ws4_12, ws4_13, ws4_14);
		neyron2_5(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws5_1, ws5_2, ws5_3, ws5_4, ws5_5, ws5_6, ws5_7, ws5_8, ws5_9, ws5_10, ws5_11, ws5_12, ws5_13, ws5_14);

		neyron3_1(ws2_1_1, ws2_1_2, ws2_1_3, ws2_1_4, ws2_1_5);
		neyron3_2(ws2_2_1, ws2_2_2, ws2_2_3, ws2_2_4, ws2_2_5);
		neyron3_3(ws2_3_1, ws2_3_2, ws2_3_3, ws2_3_4, ws2_3_5);
		neyron3_4(ws2_4_1, ws2_4_2, ws2_4_3, ws2_4_4, ws2_4_5);
		neyron3_5(ws2_5_1, ws2_5_2, ws2_5_3, ws2_5_4, ws2_5_5);
		neyron3_6(ws2_6_1, ws2_6_2, ws2_6_3, ws2_6_4, ws2_6_5);
		neyron3_7(ws2_7_1, ws2_7_2, ws2_7_3, ws2_7_4, ws2_7_5);

		neyr3_1 = neyron4_1(ws3_1_1, ws3_1_2, ws3_1_3, ws3_1_4, ws3_1_5, ws3_1_6, ws3_1_7);
		neyr3_2 = neyron4_2(ws3_2_1, ws3_2_2, ws3_2_3, ws3_2_4, ws3_2_5, ws3_2_6, ws3_2_7);
		neyr3_3 = neyron4_3(ws3_3_1, ws3_3_2, ws3_3_3, ws3_3_4, ws3_3_5, ws3_3_6, ws3_3_7);
		neyr3_4 = neyron4_4(ws3_4_1, ws3_4_2, ws3_4_3, ws3_4_4, ws3_4_5, ws3_4_6, ws3_4_7);
		neyr3_5 = neyron4_5(ws3_5_1, ws3_5_2, ws3_5_3, ws3_5_4, ws3_5_5, ws3_5_6, ws3_5_7);
		neyr3_6 = neyron4_6(ws3_6_1, ws3_6_2, ws3_6_3, ws3_6_4, ws3_6_5, ws3_6_6, ws3_6_7);
		neyr3_7 = neyron4_7(ws3_7_1, ws3_7_2, ws3_7_3, ws3_7_4, ws3_7_5, ws3_7_6, ws3_7_7);
		neyr3_8 = neyron4_8(ws3_8_1, ws3_8_2, ws3_8_3, ws3_8_4, ws3_8_5, ws3_8_6, ws3_8_7);
		neyr3_9 = neyron4_9(ws3_9_1, ws3_9_2, ws3_9_3, ws3_9_4, ws3_9_5, ws3_9_6, ws3_9_7);
		neyr3_10 = neyron4_10(ws3_10_1, ws3_10_2, ws3_10_3, ws3_10_4, ws3_10_5, ws3_10_6, ws3_10_7);
		neyr3_11 = neyron4_11(ws3_11_1, ws3_11_2, ws3_11_3, ws3_11_4, ws3_11_5, ws3_11_6, ws3_11_7);
		neyr3_12 = neyron4_12(ws3_12_1, ws3_12_2, ws3_12_3, ws3_12_4, ws3_12_5, ws3_12_6, ws3_12_7);
		neyr3_13 = neyron4_13(ws3_11_1, ws3_11_2, ws3_11_3, ws3_11_4, ws3_11_5, ws3_13_6, ws3_13_7);
		neyr3_14 = neyron4_14(ws3_12_1, ws3_12_2, ws3_12_3, ws3_12_4, ws3_12_5, ws3_14_6, ws3_14_7);
		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
		if (correct != 0) {
			cout << "Number of winning command: " << correct << endl;

		}

		else {
			cout << ("Draw") << endl;
		}
		if (ney1_1) {
			cout << "Yuwentus: " << neyr3_1 << " power points." << endl;
			cout << "Chance of win Yuwentus " << neyr3_1 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_2) {
			cout << "Real Madrid: " << neyr3_2 << "power points." << endl;
			cout << "Chance of win Real Madrid " << neyr3_2 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + +neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_3) {
			cout << "Barselona: " << neyr3_3 << " power points." << endl;
			cout << "Chance of win Barselona " << neyr3_3 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_4) {
			cout << "Manchester United: " << neyr3_4 << " power points." << endl;
			cout << "Chance of win Manchester United " << neyr3_4 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_5) {
			cout << "Arsenal: " << neyr3_5 << " power points." << endl;
			cout << "Chance of win Arsenal " << neyr3_5 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_6) {
			cout << "Bavaria: " << neyr3_6 << " power points." << endl;
			cout << "Chance of win Bavaria " << neyr3_6 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_7) {
			cout << "Liverpoul: " << neyr3_7 << " power points." << endl;
			cout << "Chance of win Liverpoul " << neyr3_7 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_8) {
			cout << "Borussia D: " << neyr3_8 << " power points." << endl;
			cout << "Chance of win Borussia D " << neyr3_8 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_9) {
			cout << "Manchester City: " << neyr3_9 << " power points." << endl;
			cout << "Chance of win Manchester City " << neyr3_9 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_10) {
			cout << "Chelsi: " << neyr3_10 << " power points." << endl;
			cout << "Chance of win Chelsi " << neyr3_10 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_11) {
			cout << "Milan: " << neyr3_11 << " power points." << endl;
			cout << "Chance of win Milan " << neyr3_11 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_12) {
			cout << "Bayer: " << neyr3_12 << " power points." << endl;
			cout << "Chance of win Bayer " << neyr3_12 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_13) {
			cout << "Lester: " << neyr3_13 << " power points." << endl;
			cout << "Chance of win Lester " << neyr3_13 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_14) {
			cout << "Tottenham: " << neyr3_14 << " power points." << endl;
			cout << "Chance of win Tottenham " << neyr3_14 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
	end:
		cout << "Press any key to continue" << endl;
		_getch();
		cout << ("Again") << endl;
		cin >> again;
		if (!again) {
			break;
		}
	}
	return 0;
}