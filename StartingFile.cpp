///////////////////
//	   Maded	 //
//		by		 //
//				 //
// @viiiiiiiitya //
// @hacerio tg	 //
//				 // 
//				 //
///////////////////
const long license_value = -1;
int days;
float chance_win;
bool again;
int stadium_number;
int debb;
//Áŕçŕ äŕííčő
bool is_learning_complete;
const int results_correct[] = {
	2 , 2 , 2 , 2 , 2 , 2 , 4 , 2 , 2 , 3 , 10, 1 , 8 , 5 , 1 , 1 , 1 , 12, 3 , 3 , 3 , 3 , 3 , 3 , 7 , 12, 13, 4 , 4 , 4 , 5 , 5 , 5 , 5 , 5 , 7 , 13, 6 , 6 , 13, 6 , 6 , 10, 7 , 7 , 9 , 11, 10, 12, 10, 10, 10, 13, 14, 3 , 3 , 5 , 7 , 1 , 13, 3 , 3 , 13, 3 , 8 , 4 , 3 , 4 , 10, 8 , 7 , 2 , 11, 7 , 6 , 10, 2 , 10, 2
};
const int first_command_correct[] = {
	2 , 8 , 2 , 2 , 1 , 2 , 2 , 2 , 10, 3 , 1 , 1 , 8 , 5 , 1 , 5 , 9 , 1 , 7 , 6 , 3 , 14, 5 , 3 , 3 , 3 , 13, 4 , 4 , 4 , 10, 6 , 12, 7 , 5 , 7 , 13, 13, 6 , 6 , 14, 11, 10, 14, 7 , 13, 11, 14, 12, 14, 10, 10, 11, 11, 3 , 3 , 14, 7 , 7 , 13, 3 , 2 , 9 , 3 , 8 , 4 , 2 , 4 , 4 , 3 , 12, 2 , 11, 7 , 6 , 9 , 2 , 10, 2
};
const int second_command_correct[] = {
	5 , 2 , 3 , 12, 2 , 10, 4 , 12, 2 , 1 , 10, 11, 1 , 1 , 7 , 1 , 1 , 12, 3 , 3 , 14, 3 , 3 , 12, 7 , 12, 3 , 13, 10, 12, 5 , 5 , 5 , 5 , 9 , 5 , 5 , 6 , 7 , 13, 6 , 6 , 6 , 7 , 9 , 9 , 9 , 10, 10, 10, 11, 13, 13, 14, 11, 5 , 5 , 5 , 1 , 6 , 4 , 3 , 13, 4 , 2 , 13, 3 , 6 , 10, 3 , 7 , 5 , 10, 12, 2 , 10, 1 , 4 , 13
};

/*
	1.Astralis *
	2.Gambit *
	3.Na`vi *
	4.Heroic *
	5.Virtus.pro *
	6.Vitality *
	7.Liquid *
	8.Spirit *
	9.fnatic *
	10.NIP *
	11.mousesport *
	12.Furia *
	13.Complexity *
	14.Faze *
	15.//G2
	16.//Entropiq
	17.//forZe
	18.//BIG
	19.//HAVU
	20.//FunPlus Phoenix
*/
#include <omp.h>
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>  
#include "first-second.h"
#include "random.h"
#include "provirka.h"
#include <thread>
#include <fstream>
#include <Windows.h>
#include <Psapi.h>
#include <intrin.h>
#include <cstring>
#include <cstdlib>
using namespace std;

int correct;
int st;
int real_correct;
int times_correct;
string com;
int stepin_navchania = 3;
bool is_debug;
//Íîâŕ ěĺőŕíłęŕ âčáîđó ęîěŕíä
int command_choose1;
int command_choose2;
//Çěłííł äë˙ çáĺđłăŕíí˙ äŕííčő íĺéđîíłâ
int stadiumn_choose;
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
int ney1_15;
int ney1_16;
int ney1_17;
int ney1_18;
int ney1_19;
int ney1_20;
int ney2_1;
int ney2_2;
int ney2_3;
int ney2_4;
int ney2_5;
int ney2_6;

int ney3_1;
int ney3_2;
int ney3_3;
int ney3_4;
int ney3_5;
int ney3_6;
int ney3_7;
int ney3_8;
int ney3_9;
int ney3_10;

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
double ney4_15;
double ney4_16;
double ney4_17;
double ney4_18;
double ney4_19;
double ney4_20;
//˛íłöłŕëłçŕöł˙ âĺńîâ

double wf1; double w1_1; double w1_2; double w1_3; double w1_4; double w1_5; double w1_6; double w1_7; double w1_8; double w1_9; double w1_10; double w1_11; double w1_12; double w1_13; double w1_14; double w1_15; double w1_16; double w1_17; double w1_18; double w1_19; double w1_20;
double wf2; double w2_1; double w2_2; double w2_3; double w2_4; double w2_5; double w2_6; double w2_7; double w2_8; double w2_9; double w2_10; double w2_11; double w2_12; double w2_13; double w2_14; double w2_15; double w2_16; double w2_17; double w2_18; double w2_19; double w2_20;
double wf3; double w3_1; double w3_2; double w3_3; double w3_4; double w3_5; double w3_6; double w3_7; double w3_8; double w3_9; double w3_10; double w3_11; double w3_12; double w3_13; double w3_14; double w3_15; double w3_16; double w3_17; double w3_18; double w3_19; double w3_20;
double wf4; double w4_1; double w4_2; double w4_3; double w4_4; double w4_5; double w4_6; double w4_7; double w4_8; double w4_9; double w4_10; double w4_11; double w4_12; double w4_13; double w4_14; double w4_15; double w4_16; double w4_17; double w4_18; double w4_19; double w4_20;
double wf5; double w5_1; double w5_2; double w5_3; double w5_4; double w5_5; double w5_6; double w5_7; double w5_8; double w5_9; double w5_10; double w5_11; double w5_12; double w5_13; double w5_14; double w5_15; double w5_16; double w5_17; double w5_18; double w5_19; double w5_20;
double wf6; double w6_1; double w6_2; double w6_3; double w6_4; double w6_5; double w6_6; double w6_7; double w6_8; double w6_9; double w6_10; double w6_11; double w6_12; double w6_13; double w6_14; double w6_15; double w6_16; double w6_17; double w6_18; double w6_19; double w6_20;

double w2_1_1; double w2_1_2; double w2_1_3; double w2_1_4; double w2_1_5; double w2_1_6;
double w2_2_1; double w2_2_2; double w2_2_3; double w2_2_4; double w2_2_5; double w2_2_6;
double w2_3_1; double w2_3_2; double w2_3_3; double w2_3_4; double w2_3_5; double w2_3_6;
double w2_4_1; double w2_4_2; double w2_4_3; double w2_4_4; double w2_4_5; double w2_4_6;
double w2_5_1; double w2_5_2; double w2_5_3; double w2_5_4; double w2_5_5; double w2_5_6;
double w2_6_1; double w2_6_2; double w2_6_3; double w2_6_4; double w2_6_5; double w2_6_6;
double w2_7_1; double w2_7_2; double w2_7_3; double w2_7_4; double w2_7_5; double w2_7_6;
double w2_8_1; double w2_8_2; double w2_8_3; double w2_8_4; double w2_8_5; double w2_8_6;
double w2_9_1; double w2_9_2; double w2_9_3; double w2_9_4; double w2_9_5; double w2_9_6;
double w2_10_1; double w2_10_2; double w2_10_3; double w2_10_4; double w2_10_5; double w2_10_6;

double w3_1_1; double w3_1_2; double w3_1_3; double w3_1_4; double w3_1_5; double w3_1_6; double w3_1_7; double w3_1_8; double w3_1_9; double w3_1_10;
double w3_2_1; double w3_2_2; double w3_2_3; double w3_2_4; double w3_2_5; double w3_2_6; double w3_2_7; double w3_2_8; double w3_2_9; double w3_2_10;
double w3_3_1; double w3_3_2; double w3_3_3; double w3_3_4; double w3_3_5; double w3_3_6; double w3_3_7; double w3_3_8; double w3_3_9; double w3_3_10;
double w3_4_1; double w3_4_2; double w3_4_3; double w3_4_4; double w3_4_5; double w3_4_6; double w3_4_7; double w3_4_8; double w3_4_9; double w3_4_10;
double w3_5_1; double w3_5_2; double w3_5_3; double w3_5_4; double w3_5_5; double w3_5_6; double w3_5_7; double w3_5_8; double w3_5_9; double w3_5_10;
double w3_6_1; double w3_6_2; double w3_6_3; double w3_6_4; double w3_6_5; double w3_6_6; double w3_6_7; double w3_6_8; double w3_6_9; double w3_6_10;
double w3_7_1; double w3_7_2; double w3_7_3; double w3_7_4; double w3_7_5; double w3_7_6; double w3_7_7; double w3_7_8; double w3_7_9; double w3_7_10;
double w3_8_1; double w3_8_2; double w3_8_3; double w3_8_4; double w3_8_5; double w3_8_6; double w3_8_7; double w3_8_8; double w3_8_9; double w3_8_10;
double w3_9_1; double w3_9_2; double w3_9_3; double w3_9_4; double w3_9_5; double w3_9_6; double w3_9_7; double w3_9_8; double w3_9_9; double w3_9_10;
double w3_10_1; double w3_10_2; double w3_10_3; double w3_10_4; double w3_10_5; double w3_10_6; double w3_10_7; double w3_10_8; double w3_10_9; double w3_10_10;
double w3_11_1; double w3_11_2; double w3_11_3; double w3_11_4; double w3_11_5; double w3_11_6; double w3_11_7; double w3_11_8; double w3_11_9; double w3_11_10;
double w3_12_1; double w3_12_2; double w3_12_3; double w3_12_4; double w3_12_5; double w3_12_6; double w3_12_7; double w3_12_8; double w3_12_9; double w3_12_10;
double w3_13_1; double w3_13_2; double w3_13_3; double w3_13_4; double w3_13_5; double w3_13_6; double w3_13_7; double w3_13_8; double w3_13_9; double w3_13_10;
double w3_14_1; double w3_14_2; double w3_14_3; double w3_14_4; double w3_14_5; double w3_14_6; double w3_14_7; double w3_14_8; double w3_14_9; double w3_14_10;
double w3_15_1; double w3_15_2; double w3_15_3; double w3_15_4; double w3_15_5; double w3_15_6; double w3_15_7; double w3_15_8; double w3_15_9; double w3_15_10;
double w3_16_1; double w3_16_2; double w3_16_3; double w3_16_4; double w3_16_5; double w3_16_6; double w3_16_7; double w3_16_8; double w3_16_9; double w3_16_10;
double w3_17_1; double w3_17_2; double w3_17_3; double w3_17_4; double w3_17_5; double w3_17_6; double w3_17_7; double w3_17_8; double w3_17_9; double w3_17_10;
double w3_18_1; double w3_18_2; double w3_18_3; double w3_18_4; double w3_18_5; double w3_18_6; double w3_18_7; double w3_18_8; double w3_18_9; double w3_18_10;
double w3_19_1; double w3_19_2; double w3_19_3; double w3_19_4; double w3_19_5; double w3_19_6; double w3_19_7; double w3_19_8; double w3_19_9; double w3_19_10;
double w3_20_1; double w3_20_2; double w3_20_3; double w3_20_4; double w3_20_5; double w3_20_6; double w3_20_7; double w3_20_8; double w3_20_9; double w3_20_10;
//˛íłöłŕëłçŕöł˙ âĺńîâ äë˙ çáĺđĺćĺíí˙

double wsf1; double ws1_1; double ws1_2; double ws1_3; double ws1_4; double ws1_5; double ws1_6; double ws1_7; double ws1_8; double ws1_9; double ws1_10; double ws1_11; double ws1_12; double ws1_13; double ws1_14; double ws1_15; double ws1_16; double ws1_17; double ws1_18; double ws1_19; double ws1_20;
double wsf2; double ws2_1; double ws2_2; double ws2_3; double ws2_4; double ws2_5; double ws2_6; double ws2_7; double ws2_8; double ws2_9; double ws2_10; double ws2_11; double ws2_12; double ws2_13; double ws2_14; double ws2_15; double ws2_16; double ws2_17; double ws2_18; double ws2_19; double ws2_20;
double wsf3; double ws3_1; double ws3_2; double ws3_3; double ws3_4; double ws3_5; double ws3_6; double ws3_7; double ws3_8; double ws3_9; double ws3_10; double ws3_11; double ws3_12; double ws3_13; double ws3_14; double ws3_15; double ws3_16; double ws3_17; double ws3_18; double ws3_19; double ws3_20;
double wsf4; double ws4_1; double ws4_2; double ws4_3; double ws4_4; double ws4_5; double ws4_6; double ws4_7; double ws4_8; double ws4_9; double ws4_10; double ws4_11; double ws4_12; double ws4_13; double ws4_14; double ws4_15; double ws4_16; double ws4_17; double ws4_18; double ws4_19; double ws4_20;
double wsf5; double ws5_1; double ws5_2; double ws5_3; double ws5_4; double ws5_5; double ws5_6; double ws5_7; double ws5_8; double ws5_9; double ws5_10; double ws5_11; double ws5_12; double ws5_13; double ws5_14; double ws5_15; double ws5_16; double ws5_17; double ws5_18; double ws5_19; double ws5_20;
double wsf6; double ws6_1; double ws6_2; double ws6_3; double ws6_4; double ws6_5; double ws6_6; double ws6_7; double ws6_8; double ws6_9; double ws6_10; double ws6_11; double ws6_12; double ws6_13; double ws6_14; double ws6_15; double ws6_16; double ws6_17; double ws6_18; double ws6_19; double ws6_20;

double ws2_1_1; double ws2_1_2; double ws2_1_3; double ws2_1_4; double ws2_1_5; double ws2_1_6;
double ws2_2_1; double ws2_2_2; double ws2_2_3; double ws2_2_4; double ws2_2_5; double ws2_2_6;
double ws2_3_1; double ws2_3_2; double ws2_3_3; double ws2_3_4; double ws2_3_5; double ws2_3_6;
double ws2_4_1; double ws2_4_2; double ws2_4_3; double ws2_4_4; double ws2_4_5; double ws2_4_6;
double ws2_5_1; double ws2_5_2; double ws2_5_3; double ws2_5_4; double ws2_5_5; double ws2_5_6;
double ws2_6_1; double ws2_6_2; double ws2_6_3; double ws2_6_4; double ws2_6_5; double ws2_6_6;
double ws2_7_1; double ws2_7_2; double ws2_7_3; double ws2_7_4; double ws2_7_5; double ws2_7_6;
double ws2_8_1; double ws2_8_2; double ws2_8_3; double ws2_8_4; double ws2_8_5; double ws2_8_6;
double ws2_9_1; double ws2_9_2; double ws2_9_3; double ws2_9_4; double ws2_9_5; double ws2_9_6;
double ws2_10_1; double ws2_10_2; double ws2_10_3; double ws2_10_4; double ws2_10_5; double ws2_10_6;

double ws3_1_1; double ws3_1_2; double ws3_1_3; double ws3_1_4; double ws3_1_5; double ws3_1_6; double ws3_1_7; double ws3_1_8; double ws3_1_9; double ws3_1_10;
double ws3_2_1; double ws3_2_2; double ws3_2_3; double ws3_2_4; double ws3_2_5; double ws3_2_6; double ws3_2_7; double ws3_2_8; double ws3_2_9; double ws3_2_10;
double ws3_3_1; double ws3_3_2; double ws3_3_3; double ws3_3_4; double ws3_3_5; double ws3_3_6; double ws3_3_7; double ws3_3_8; double ws3_3_9; double ws3_3_10;
double ws3_4_1; double ws3_4_2; double ws3_4_3; double ws3_4_4; double ws3_4_5; double ws3_4_6; double ws3_4_7; double ws3_4_8; double ws3_4_9; double ws3_4_10;
double ws3_5_1; double ws3_5_2; double ws3_5_3; double ws3_5_4; double ws3_5_5; double ws3_5_6; double ws3_5_7; double ws3_5_8; double ws3_5_9; double ws3_5_10;
double ws3_6_1; double ws3_6_2; double ws3_6_3; double ws3_6_4; double ws3_6_5; double ws3_6_6; double ws3_6_7; double ws3_6_8; double ws3_6_9; double ws3_6_10;
double ws3_7_1; double ws3_7_2; double ws3_7_3; double ws3_7_4; double ws3_7_5; double ws3_7_6; double ws3_7_7; double ws3_7_8; double ws3_7_9; double ws3_7_10;
double ws3_8_1; double ws3_8_2; double ws3_8_3; double ws3_8_4; double ws3_8_5; double ws3_8_6; double ws3_8_7; double ws3_8_8; double ws3_8_9; double ws3_8_10;
double ws3_9_1; double ws3_9_2; double ws3_9_3; double ws3_9_4; double ws3_9_5; double ws3_9_6; double ws3_9_7; double ws3_9_8; double ws3_9_9; double ws3_9_10;
double ws3_10_1; double ws3_10_2; double ws3_10_3; double ws3_10_4; double ws3_10_5; double ws3_10_6; double ws3_10_7; double ws3_10_8; double ws3_10_9; double ws3_10_10;
double ws3_11_1; double ws3_11_2; double ws3_11_3; double ws3_11_4; double ws3_11_5; double ws3_11_6; double ws3_11_7; double ws3_11_8; double ws3_11_9; double ws3_11_10;
double ws3_12_1; double ws3_12_2; double ws3_12_3; double ws3_12_4; double ws3_12_5; double ws3_12_6; double ws3_12_7; double ws3_12_8; double ws3_12_9; double ws3_12_10;
double ws3_13_1; double ws3_13_2; double ws3_13_3; double ws3_13_4; double ws3_13_5; double ws3_13_6; double ws3_13_7; double ws3_13_8; double ws3_13_9; double ws3_13_10;
double ws3_14_1; double ws3_14_2; double ws3_14_3; double ws3_14_4; double ws3_14_5; double ws3_14_6; double ws3_14_7; double ws3_14_8; double ws3_14_9; double ws3_14_10;
double ws3_15_1; double ws3_15_2; double ws3_15_3; double ws3_15_4; double ws3_15_5; double ws3_15_6; double ws3_15_7; double ws3_15_8; double ws3_15_9; double ws3_15_10;
double ws3_16_1; double ws3_16_2; double ws3_16_3; double ws3_16_4; double ws3_16_5; double ws3_16_6; double ws3_16_7; double ws3_16_8; double ws3_16_9; double ws3_16_10;
double ws3_17_1; double ws3_17_2; double ws3_17_3; double ws3_17_4; double ws3_17_5; double ws3_17_6; double ws3_17_7; double ws3_17_8; double ws3_17_9; double ws3_17_10;
double ws3_18_1; double ws3_18_2; double ws3_18_3; double ws3_18_4; double ws3_18_5; double ws3_18_6; double ws3_18_7; double ws3_18_8; double ws3_18_9; double ws3_18_10;
double ws3_19_1; double ws3_19_2; double ws3_19_3; double ws3_19_4; double ws3_19_5; double ws3_19_6; double ws3_19_7; double ws3_19_8; double ws3_19_9; double ws3_19_10;
double ws3_20_1; double ws3_20_2; double ws3_20_3; double ws3_20_4; double ws3_20_5; double ws3_20_6; double ws3_20_7; double ws3_20_8; double ws3_20_9; double ws3_20_10;
// deep learning
double w1sf1; double w1s1_1; double w1s1_2; double w1s1_3; double w1s1_4; double w1s1_5; double w1s1_6; double w1s1_7; double w1s1_8; double w1s1_9; double w1s1_10; double w1s1_11; double w1s1_12; double w1s1_13; double w1s1_14; double w1s1_15; double w1s1_16; double w1s1_17; double w1s1_18; double w1s1_19; double w1s1_20;
double w1sf2; double w1s2_1; double w1s2_2; double w1s2_3; double w1s2_4; double w1s2_5; double w1s2_6; double w1s2_7; double w1s2_8; double w1s2_9; double w1s2_10; double w1s2_11; double w1s2_12; double w1s2_13; double w1s2_14; double w1s2_15; double w1s2_16; double w1s2_17; double w1s2_18; double w1s2_19; double w1s2_20;
double w1sf3; double w1s3_1; double w1s3_2; double w1s3_3; double w1s3_4; double w1s3_5; double w1s3_6; double w1s3_7; double w1s3_8; double w1s3_9; double w1s3_10; double w1s3_11; double w1s3_12; double w1s3_13; double w1s3_14; double w1s3_15; double w1s3_16; double w1s3_17; double w1s3_18; double w1s3_19; double w1s3_20;
double w1sf4; double w1s4_1; double w1s4_2; double w1s4_3; double w1s4_4; double w1s4_5; double w1s4_6; double w1s4_7; double w1s4_8; double w1s4_9; double w1s4_10; double w1s4_11; double w1s4_12; double w1s4_13; double w1s4_14; double w1s4_15; double w1s4_16; double w1s4_17; double w1s4_18; double w1s4_19; double w1s4_20;
double w1sf5; double w1s5_1; double w1s5_2; double w1s5_3; double w1s5_4; double w1s5_5; double w1s5_6; double w1s5_7; double w1s5_8; double w1s5_9; double w1s5_10; double w1s5_11; double w1s5_12; double w1s5_13; double w1s5_14; double w1s5_15; double w1s5_16; double w1s5_17; double w1s5_18; double w1s5_19; double w1s5_20;
double w1sf6; double w1s6_1; double w1s6_2; double w1s6_3; double w1s6_4; double w1s6_5; double w1s6_6; double w1s6_7; double w1s6_8; double w1s6_9; double w1s6_10; double w1s6_11; double w1s6_12; double w1s6_13; double w1s6_14; double w1s6_15; double w1s6_16; double w1s6_17; double w1s6_18; double w1s6_19; double w1s6_20;

double w1s2_1_1; double w1s2_1_2; double w1s2_1_3; double w1s2_1_4; double w1s2_1_5; double w1s2_1_6;
double w1s2_2_1; double w1s2_2_2; double w1s2_2_3; double w1s2_2_4; double w1s2_2_5; double w1s2_2_6;
double w1s2_3_1; double w1s2_3_2; double w1s2_3_3; double w1s2_3_4; double w1s2_3_5; double w1s2_3_6;
double w1s2_4_1; double w1s2_4_2; double w1s2_4_3; double w1s2_4_4; double w1s2_4_5; double w1s2_4_6;
double w1s2_5_1; double w1s2_5_2; double w1s2_5_3; double w1s2_5_4; double w1s2_5_5; double w1s2_5_6;
double w1s2_6_1; double w1s2_6_2; double w1s2_6_3; double w1s2_6_4; double w1s2_6_5; double w1s2_6_6;
double w1s2_7_1; double w1s2_7_2; double w1s2_7_3; double w1s2_7_4; double w1s2_7_5; double w1s2_7_6;
double w1s2_8_1; double w1s2_8_2; double w1s2_8_3; double w1s2_8_4; double w1s2_8_5; double w1s2_8_6;
double w1s2_9_1; double w1s2_9_2; double w1s2_9_3; double w1s2_9_4; double w1s2_9_5; double w1s2_9_6;
double w1s2_10_1; double w1s2_10_2; double w1s2_10_3; double w1s2_10_4; double w1s2_10_5; double w1s2_10_6;

double w1s3_1_1; double w1s3_1_2; double w1s3_1_3; double w1s3_1_4; double w1s3_1_5; double w1s3_1_6; double w1s3_1_7; double w1s3_1_8; double w1s3_1_9; double w1s3_1_10;
double w1s3_2_1; double w1s3_2_2; double w1s3_2_3; double w1s3_2_4; double w1s3_2_5; double w1s3_2_6; double w1s3_2_7; double w1s3_2_8; double w1s3_2_9; double w1s3_2_10;
double w1s3_3_1; double w1s3_3_2; double w1s3_3_3; double w1s3_3_4; double w1s3_3_5; double w1s3_3_6; double w1s3_3_7; double w1s3_3_8; double w1s3_3_9; double w1s3_3_10;
double w1s3_4_1; double w1s3_4_2; double w1s3_4_3; double w1s3_4_4; double w1s3_4_5; double w1s3_4_6; double w1s3_4_7; double w1s3_4_8; double w1s3_4_9; double w1s3_4_10;
double w1s3_5_1; double w1s3_5_2; double w1s3_5_3; double w1s3_5_4; double w1s3_5_5; double w1s3_5_6; double w1s3_5_7; double w1s3_5_8; double w1s3_5_9; double w1s3_5_10;
double w1s3_6_1; double w1s3_6_2; double w1s3_6_3; double w1s3_6_4; double w1s3_6_5; double w1s3_6_6; double w1s3_6_7; double w1s3_6_8; double w1s3_6_9; double w1s3_6_10;
double w1s3_7_1; double w1s3_7_2; double w1s3_7_3; double w1s3_7_4; double w1s3_7_5; double w1s3_7_6; double w1s3_7_7; double w1s3_7_8; double w1s3_7_9; double w1s3_7_10;
double w1s3_8_1; double w1s3_8_2; double w1s3_8_3; double w1s3_8_4; double w1s3_8_5; double w1s3_8_6; double w1s3_8_7; double w1s3_8_8; double w1s3_8_9; double w1s3_8_10;
double w1s3_9_1; double w1s3_9_2; double w1s3_9_3; double w1s3_9_4; double w1s3_9_5; double w1s3_9_6; double w1s3_9_7; double w1s3_9_8; double w1s3_9_9; double w1s3_9_10;
double w1s3_10_1; double w1s3_10_2; double w1s3_10_3; double w1s3_10_4; double w1s3_10_5; double w1s3_10_6; double w1s3_10_7; double w1s3_10_8; double w1s3_10_9; double w1s3_10_10;
double w1s3_11_1; double w1s3_11_2; double w1s3_11_3; double w1s3_11_4; double w1s3_11_5; double w1s3_11_6; double w1s3_11_7; double w1s3_11_8; double w1s3_11_9; double w1s3_11_10;
double w1s3_12_1; double w1s3_12_2; double w1s3_12_3; double w1s3_12_4; double w1s3_12_5; double w1s3_12_6; double w1s3_12_7; double w1s3_12_8; double w1s3_12_9; double w1s3_12_10;
double w1s3_13_1; double w1s3_13_2; double w1s3_13_3; double w1s3_13_4; double w1s3_13_5; double w1s3_13_6; double w1s3_13_7; double w1s3_13_8; double w1s3_13_9; double w1s3_13_10;
double w1s3_14_1; double w1s3_14_2; double w1s3_14_3; double w1s3_14_4; double w1s3_14_5; double w1s3_14_6; double w1s3_14_7; double w1s3_14_8; double w1s3_14_9; double w1s3_14_10;
double w1s3_15_1; double w1s3_15_2; double w1s3_15_3; double w1s3_15_4; double w1s3_15_5; double w1s3_15_6; double w1s3_15_7; double w1s3_15_8; double w1s3_15_9; double w1s3_15_10;
double w1s3_16_1; double w1s3_16_2; double w1s3_16_3; double w1s3_16_4; double w1s3_16_5; double w1s3_16_6; double w1s3_16_7; double w1s3_16_8; double w1s3_16_9; double w1s3_16_10;
double w1s3_17_1; double w1s3_17_2; double w1s3_17_3; double w1s3_17_4; double w1s3_17_5; double w1s3_17_6; double w1s3_17_7; double w1s3_17_8; double w1s3_17_9; double w1s3_17_10;
double w1s3_18_1; double w1s3_18_2; double w1s3_18_3; double w1s3_18_4; double w1s3_18_5; double w1s3_18_6; double w1s3_18_7; double w1s3_18_8; double w1s3_18_9; double w1s3_18_10;
double w1s3_19_1; double w1s3_19_2; double w1s3_19_3; double w1s3_19_4; double w1s3_19_5; double w1s3_19_6; double w1s3_19_7; double w1s3_19_8; double w1s3_19_9; double w1s3_19_10;
double w1s3_20_1; double w1s3_20_2; double w1s3_20_3; double w1s3_20_4; double w1s3_20_5; double w1s3_20_6; double w1s3_20_7; double w1s3_20_8; double w1s3_20_9; double w1s3_20_10;
namespace
{

	struct cpuid_regs
	{
		DWORD   Eax;
		DWORD   Ebx;
		DWORD   Ecx;
		DWORD   Edx;
	};

	std::string SplitIntoChars(DWORD Value)
	{
		std::string Str;
		char const* pCursor = (char const*)&Value;
		for (int i = 0; i < sizeof(Value); ++i) {
			Str += pCursor[i];
		}
		return Str;
	}

	std::string GetCpuVendorSubstring(DWORD Eax)
	{
		cpuid_regs Regs;
		__cpuid((int*)&Regs, Eax);
		std::string Str;
		Str += SplitIntoChars(Regs.Eax);
		Str += SplitIntoChars(Regs.Ebx);
		Str += SplitIntoChars(Regs.Ecx);
		Str += SplitIntoChars(Regs.Edx);
		return Str;
	}

	std::string GetCpuVendorString()
	{
		std::string VendorString;
		cpuid_regs Regs;
		__cpuid((int*)&Regs, 0x80000000);
		if (Regs.Eax >= 0x80000004)
		{
			VendorString =
				GetCpuVendorSubstring(0x80000002) +
				GetCpuVendorSubstring(0x80000003) +
				GetCpuVendorSubstring(0x80000004)
				;
		}
		return VendorString;
	}

} // namespace



int _stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int fShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(pCmdLine);
	UNREFERENCED_PARAMETER(fShow);

	MessageBoxA(
		NULL,
		GetCpuVendorString().c_str(),
		"INFO - CPUID Vendor String",
		MB_ICONINFORMATION
	);
	return EXIT_SUCCESS;
}
void allClear() {
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
	ney1_15 = 0;
	ney1_16 = 0;
	ney1_17 = 0;
	ney1_18 = 0;
	ney1_19 = 0;
	ney1_20 = 0;
}
void save_deeplearning() {
	w1s1_1 = ws1_1; w1s1_2 = ws1_2; w1s1_3 = ws1_3; w1s1_4 = ws1_4; w1s1_5 = ws1_5; w1s1_6 = ws1_6; w1s1_7 = ws1_7; w1s1_8 = ws1_8; w1s1_9 = ws1_9; w1s1_10 = ws1_10; w1s1_11 = ws1_11; w1s1_12 = ws1_12; w1s1_13 = ws1_13; w1s1_14 = ws1_14;
	w1s2_1 = ws2_1; w1s2_2 = ws2_2; w1s2_3 = ws2_3; w1s2_4 = ws2_4; w1s2_5 = ws2_5; w1s2_6 = ws2_6; w1s2_7 = ws2_7; w1s2_8 = ws2_8; w1s2_9 = ws2_9; w1s2_10 = ws2_10; w1s2_11 = ws2_11; w1s2_12 = ws2_12; w1s2_13 = ws2_13; w1s2_14 = ws2_14;
	w1s3_1 = ws3_1; w1s3_2 = ws3_2; w1s3_3 = ws3_3; w1s3_4 = ws3_4; w1s3_5 = ws3_5; w1s3_6 = ws3_6; w1s3_7 = ws3_7; w1s3_8 = ws3_8; w1s3_9 = ws3_9; w1s3_10 = ws3_10; w1s3_11 = ws3_11; w1s3_12 = ws3_12; w1s3_13 = ws3_13; w1s3_14 = ws3_14;
	w1s4_1 = ws4_1; w1s4_2 = ws4_2; w1s4_3 = ws4_3; w1s4_4 = ws4_4; w1s4_5 = ws4_5; w1s4_6 = ws4_6; w1s4_7 = ws4_7; w1s4_8 = ws4_8; w1s4_9 = ws4_9; w1s4_10 = ws4_10; w1s4_11 = ws4_11; w1s4_12 = ws4_12; w1s4_13 = ws4_13; w1s4_14 = ws4_14;
	w1s5_1 = ws5_1; w1s5_2 = ws5_2; w1s5_3 = ws5_3; w1s5_4 = ws5_4; w1s5_5 = ws5_5; w1s5_6 = ws5_6; w1s5_7 = ws5_7; w1s5_8 = ws5_8; w1s5_9 = ws5_9; w1s5_10 = ws5_10; w1s5_11 = ws5_11; w1s5_12 = ws5_12; w1s5_13 = ws5_13; w1s5_14 = ws5_14;
	w1s6_1 = ws6_1; w1s6_2 = ws6_2; w1s6_3 = ws6_3; w1s6_4 = ws6_4; w1s6_5 = ws6_5; w1s6_6 = ws6_6; w1s6_7 = ws6_7; w1s6_8 = ws6_8; w1s6_9 = ws6_9; w1s6_10 = ws6_10; w1s6_11 = ws6_11; w1s6_12 = ws6_12; w1s6_13 = ws6_13; w1s6_14 = ws6_14;

	w1s2_1_2 = ws2_1_2; w1s2_1_2 = ws2_1_2; w1s2_1_2 = ws2_1_2; w1s2_1_2 = ws2_1_2; w1s2_1_2 = ws2_1_2; w1s2_1_2 = ws2_1_2;
	w1s2_2_2 = ws2_2_2; w1s2_2_2 = ws2_2_2; w1s2_2_2 = ws2_2_2; w1s2_2_2 = ws2_2_2; w1s2_2_2 = ws2_2_2; w1s2_2_2 = ws2_2_2;
	w1s2_3_2 = ws2_3_2; w1s2_3_2 = ws2_3_2; w1s2_3_2 = ws2_3_2; w1s2_3_2 = ws2_3_2; w1s2_3_2 = ws2_3_2; w1s2_3_2 = ws2_3_2;
	w1s2_4_2 = ws2_4_2; w1s2_4_2 = ws2_4_2; w1s2_4_2 = ws2_4_2; w1s2_4_2 = ws2_4_2; w1s2_4_2 = ws2_4_2; w1s2_4_2 = ws2_4_2;
	w1s2_5_2 = ws2_5_2; w1s2_5_2 = ws2_5_2; w1s2_5_2 = ws2_5_2; w1s2_5_2 = ws2_5_2; w1s2_5_2 = ws2_5_2; w1s2_5_2 = ws2_5_2;
	w1s2_6_2 = ws2_6_2; w1s2_6_2 = ws2_6_2; w1s2_6_2 = ws2_6_2; w1s2_6_2 = ws2_6_2; w1s2_6_2 = ws2_6_2; w1s2_6_2 = ws2_6_2;
	w1s2_7_2 = ws2_7_2; w1s2_7_2 = ws2_7_2; w1s2_7_2 = ws2_7_2; w1s2_7_2 = ws2_7_2; w1s2_7_2 = ws2_7_2; w1s2_7_2 = ws2_7_2;
	w1s2_8_2 = ws2_8_2; w1s2_8_2 = ws2_8_2; w1s2_8_2 = ws2_8_2; w1s2_8_2 = ws2_8_2; w1s2_8_2 = ws2_8_2; w1s2_8_2 = ws2_8_2;
	w1s2_9_2 = ws2_9_2; w1s2_9_2 = ws2_9_2; w1s2_9_2 = ws2_9_2; w1s2_9_2 = ws2_9_2; w1s2_9_2 = ws2_9_2; w1s2_9_2 = ws2_9_2;
	w1s2_10_2 = ws2_10_2; w1s2_10_2 = ws2_10_2; w1s2_10_2 = ws2_10_2; w1s2_10_2 = ws2_10_2; w1s2_10_2 = ws2_10_2; w1s2_10_2 = ws2_10_2;
	
	w1s3_1_1 = ws3_1_1; w1s3_1_2 = ws3_1_2; w1s3_1_3 = ws3_1_3; w1s3_1_4 = ws3_1_4; w1s3_1_5 = ws3_1_5; w1s3_1_6 = ws3_1_6; w1s3_1_7 = ws3_1_7; w1s3_1_8 = ws3_1_8; w1s3_1_9 = ws3_1_9; w1s3_1_10 = ws3_1_10;
	w1s3_2_1 = ws3_2_1; w1s3_2_2 = ws3_2_2; w1s3_2_3 = ws3_2_3; w1s3_2_4 = ws3_2_4; w1s3_2_5 = ws3_2_5; w1s3_2_6 = ws3_2_6; w1s3_2_7 = ws3_2_7; w1s3_2_8 = ws3_2_8; w1s3_2_9 = ws3_2_9; w1s3_2_10 = ws3_2_10;
	w1s3_3_1 = ws3_3_1; w1s3_3_2 = ws3_3_2; w1s3_3_3 = ws3_3_3; w1s3_3_4 = ws3_3_4; w1s3_3_5 = ws3_3_5; w1s3_3_6 = ws3_3_6; w1s3_3_7 = ws3_3_7; w1s3_3_8 = ws3_3_8; w1s3_3_9 = ws3_3_9; w1s3_3_10 = ws3_3_10;
	w1s3_4_1 = ws3_4_1; w1s3_4_2 = ws3_4_2; w1s3_4_3 = ws3_4_3; w1s3_4_4 = ws3_4_4; w1s3_4_5 = ws3_4_5; w1s3_4_6 = ws3_4_6; w1s3_4_7 = ws3_4_7; w1s3_4_8 = ws3_4_8; w1s3_4_9 = ws3_4_9; w1s3_4_10 = ws3_4_10;
	w1s3_5_1 = ws3_5_1; w1s3_5_2 = ws3_5_2; w1s3_5_3 = ws3_5_3; w1s3_5_4 = ws3_5_4; w1s3_5_5 = ws3_5_5; w1s3_5_6 = ws3_5_6; w1s3_5_7 = ws3_5_7; w1s3_5_8 = ws3_5_8; w1s3_5_9 = ws3_5_9; w1s3_5_10 = ws3_5_10;
	w1s3_6_1 = ws3_6_1; w1s3_6_2 = ws3_6_2; w1s3_6_3 = ws3_6_3; w1s3_6_4 = ws3_6_4; w1s3_6_5 = ws3_6_5; w1s3_6_6 = ws3_6_6; w1s3_6_7 = ws3_6_7; w1s3_6_8 = ws3_6_8; w1s3_6_9 = ws3_6_9; w1s3_6_10 = ws3_6_10;
	w1s3_7_1 = ws3_7_1; w1s3_7_2 = ws3_7_2; w1s3_7_3 = ws3_7_3; w1s3_7_4 = ws3_7_4; w1s3_7_5 = ws3_7_5; w1s3_7_6 = ws3_7_6; w1s3_7_7 = ws3_7_7; w1s3_7_8 = ws3_7_8; w1s3_7_9 = ws3_7_9; w1s3_7_10 = ws3_7_10;
	w1s3_8_1 = ws3_8_1; w1s3_8_2 = ws3_8_2; w1s3_8_3 = ws3_8_3; w1s3_8_4 = ws3_8_4; w1s3_8_5 = ws3_8_5; w1s3_8_6 = ws3_8_6; w1s3_8_7 = ws3_8_7; w1s3_8_8 = ws3_8_8; w1s3_8_9 = ws3_8_9; w1s3_8_10 = ws3_8_10;
	w1s3_9_1 = ws3_9_1; w1s3_9_2 = ws3_9_2; w1s3_9_3 = ws3_9_3; w1s3_9_4 = ws3_9_4; w1s3_9_5 = ws3_9_5; w1s3_9_6 = ws3_9_6; w1s3_9_7 = ws3_9_7; w1s3_9_8 = ws3_9_8; w1s3_9_9 = ws3_9_9; w1s3_9_10 = ws3_9_10;
	w1s3_10_1 = ws3_10_1; w1s3_10_2 = ws3_10_2; w1s3_10_3 = ws3_10_3; w1s3_10_4 = ws3_10_4; w1s3_10_5 = ws3_10_5; w1s3_10_6 = ws3_10_6; w1s3_10_7 = ws3_10_7; w1s3_10_8 = ws3_10_8; w1s3_10_9 = ws3_10_9; w1s3_10_10 = ws3_10_10;
	w1s3_11_1 = ws3_11_1; w1s3_11_2 = ws3_11_2; w1s3_11_3 = ws3_11_3; w1s3_11_4 = ws3_11_4; w1s3_11_5 = ws3_11_5; w1s3_11_6 = ws3_11_6; w1s3_11_7 = ws3_11_7; w1s3_11_8 = ws3_11_8; w1s3_11_9 = ws3_11_9; w1s3_11_10 = ws3_11_10;
	w1s3_12_1 = ws3_12_1; w1s3_12_2 = ws3_12_2; w1s3_12_3 = ws3_12_3; w1s3_12_4 = ws3_12_4; w1s3_12_5 = ws3_12_5; w1s3_12_6 = ws3_12_6; w1s3_12_7 = ws3_12_7; w1s3_12_8 = ws3_12_8; w1s3_12_9 = ws3_12_9; w1s3_12_10 = ws3_12_10;
	w1s3_13_1 = ws3_13_1; w1s3_13_2 = ws3_13_2; w1s3_13_3 = ws3_13_3; w1s3_13_4 = ws3_13_4; w1s3_13_5 = ws3_13_5; w1s3_13_6 = ws3_13_6; w1s3_13_7 = ws3_13_7; w1s3_13_8 = ws3_13_8; w1s3_13_9 = ws3_13_9; w1s3_13_10 = ws3_13_10;
	w1s3_14_1 = ws3_14_1; w1s3_14_2 = ws3_14_2; w1s3_14_3 = ws3_14_3; w1s3_14_4 = ws3_14_4; w1s3_14_5 = ws3_14_5; w1s3_14_6 = ws3_14_6; w1s3_14_7 = ws3_14_7; w1s3_14_8 = ws3_14_8; w1s3_14_9 = ws3_14_9; w1s3_14_10 = ws3_14_10;
}
string user_input;
void neyro_start() {
	ney2_1 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w1_1, w1_2, w1_3, w1_4, w1_5, w1_6, w1_7, w1_8, w1_9, w1_10, w1_11, w1_12, w1_13, w1_14, w1_15, w1_16, w1_17, w1_18, w1_19, w1_20);
	ney2_2 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w2_1, w2_2, w2_3, w2_4, w2_5, w2_6, w2_7, w2_8, w2_9, w2_10, w2_11, w2_12, w2_13, w2_14, w2_15, w2_16, w2_17, w2_18, w2_19, w2_20);
	ney2_3 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w3_1, w3_2, w3_3, w3_4, w3_5, w3_6, w3_7, w3_8, w3_9, w3_10, w3_11, w3_12, w3_13, w3_14, w3_15, w3_16, w3_17, w3_18, w3_19, w3_20);
	ney2_4 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w4_1, w4_2, w4_3, w4_4, w4_5, w4_6, w4_7, w4_8, w4_9, w4_10, w4_11, w4_12, w4_13, w4_14, w4_15, w4_16, w4_17, w4_18, w4_19, w4_20);
	ney2_5 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w5_1, w5_2, w5_3, w5_4, w5_5, w5_6, w5_7, w5_8, w5_9, w5_10, w5_11, w5_12, w5_13, w5_14, w5_15, w5_16, w5_17, w5_18, w5_19, w5_20);
	ney2_6 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, w6_1, w6_2, w6_3, w6_4, w6_5, w6_6, w6_7, w6_8, w6_9, w6_10, w6_11, w6_12, w6_13, w6_14, w6_15, w6_16, w6_17, w6_18, w6_19, w6_20);

	ney3_1 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_1_1, w2_1_2, w2_1_3, w2_1_4, w2_1_5, w2_1_5);
	ney3_2 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_2_1, w2_2_2, w2_2_3, w2_2_4, w2_2_5, w2_2_6);
	ney3_3 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_3_1, w2_3_2, w2_3_3, w2_3_4, w2_3_5, w2_3_6);
	ney3_4 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_4_1, w2_4_2, w2_4_3, w2_4_4, w2_4_5, w2_4_6);
	ney3_5 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_5_1, w2_5_2, w2_5_3, w2_5_4, w2_5_5, w2_5_6);
	ney3_6 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_6_1, w2_6_2, w2_6_3, w2_6_4, w2_6_5, w2_6_6);
	ney3_7 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_7_1, w2_7_2, w2_7_3, w2_7_4, w2_7_5, w2_7_6);
	ney3_8 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_8_1, w2_8_2, w2_8_3, w2_8_4, w2_8_5, w2_8_6);
	ney3_9 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_9_1, w2_9_2, w2_9_3, w2_9_4, w2_9_5, w2_9_6);
	ney3_10 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, w2_10_1, w2_10_2, w2_10_3, w2_10_4, w2_10_5, w2_10_6);

	ney4_1 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_1_1, w3_1_2, w3_1_3, w3_1_4, w3_1_5, w3_1_6, w3_1_7, w3_1_8, w3_1_9, w3_1_10);
	ney4_2 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_2_1, w3_2_2, w3_2_3, w3_2_4, w3_2_5, w3_2_6, w3_2_7, w3_2_8, w3_2_9, w3_2_10);
	ney4_3 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_3_1, w3_3_2, w3_3_3, w3_3_4, w3_3_5, w3_3_6, w3_3_7, w3_3_8, w3_3_9, w3_3_10);
	ney4_4 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_4_1, w3_4_2, w3_4_3, w3_4_4, w3_4_5, w3_4_6, w3_4_7, w3_4_8, w3_4_9, w3_4_10);
	ney4_5 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_5_1, w3_5_2, w3_5_3, w3_5_4, w3_5_5, w3_5_6, w3_5_7, w3_5_8, w3_5_9, w3_5_10);
	ney4_6 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_6_1, w3_6_2, w3_6_3, w3_6_4, w3_6_5, w3_6_6, w3_6_7, w3_6_8, w3_6_9, w3_6_10);
	ney4_7 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_7_1, w3_7_2, w3_7_3, w3_7_4, w3_7_5, w3_7_6, w3_7_7, w3_7_8, w3_7_9, w3_7_10);
	ney4_8 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_8_1, w3_8_2, w3_8_3, w3_8_4, w3_8_5, w3_8_6, w3_8_7, w3_8_8, w3_8_9, w3_8_10);
	ney4_9 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_9_1, w3_9_2, w3_9_3, w3_9_4, w3_9_5, w3_9_6, w3_9_7, w3_9_8, w3_9_9, w3_9_10);
	ney4_10 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_10_1, w3_10_2, w3_10_3, w3_10_4, w3_10_5, w3_10_6, w3_10_7, w3_10_8, w3_10_9, w3_10_10);
	ney4_11 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_11_1, w3_11_2, w3_11_3, w3_11_4, w3_11_5, w3_11_6, w3_11_7, w3_11_8, w3_11_9, w3_11_10);
	ney4_12 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_12_1, w3_12_2, w3_12_3, w3_12_4, w3_12_5, w3_12_6, w3_12_7, w3_12_8, w3_12_9, w3_12_10);
	ney4_13 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_13_1, w3_13_2, w3_13_3, w3_13_4, w3_13_5, w3_13_6, w3_13_7, w3_13_8, w3_13_9, w3_13_10);
	ney4_14 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_14_1, w3_14_2, w3_14_3, w3_14_4, w3_14_5, w3_14_6, w3_14_7, w3_14_8, w3_14_9, w3_14_10);
	ney4_15 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_15_1, w3_15_2, w3_15_3, w3_15_4, w3_15_5, w3_15_6, w3_15_7, w3_15_8, w3_15_9, w3_15_10);
	ney4_16 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_16_1, w3_16_2, w3_16_3, w3_16_4, w3_16_5, w3_16_6, w3_16_7, w3_16_8, w3_16_9, w3_16_10);
	ney4_17 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_17_1, w3_17_2, w3_17_3, w3_17_4, w3_17_5, w3_17_6, w3_17_7, w3_17_8, w3_17_9, w3_17_10);
	ney4_18 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_18_1, w3_18_2, w3_18_3, w3_18_4, w3_18_5, w3_18_6, w3_18_7, w3_18_8, w3_18_9, w3_18_10);
	ney4_19 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_19_1, w3_19_2, w3_19_3, w3_19_4, w3_19_5, w3_19_6, w3_19_7, w3_19_8, w3_19_9, w3_19_10);
	ney4_20 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, w3_20_1, w3_20_2, w3_20_3, w3_20_4, w3_20_5, w3_20_6, w3_20_7, w3_20_8, w3_20_9, w3_20_10);

}
int arifmetic(double a, double b) {
	a = a + b;
	a = a / 2;
	return a;
}
void do_correct() {
	if (ney1_1 == 0) ney4_1 = 0;
	if (ney4_1 < 0) ney4_1 = ney4_1 * -1;
	if (ney1_2 == 0) ney4_2 = 0;
	if (ney4_2 < 0) ney4_2 = ney4_2 * -1;
	if (ney1_3 == 0) ney4_3 = 0;
	if (ney4_3 < 0) ney4_3 = ney4_3 * -1;
	if (ney1_4 == 0) ney4_4 = 0;
	if (ney4_4 < 0) ney4_4 = ney4_4 * -1;
	if (ney1_5 == 0) ney4_5 = 0;
	if (ney4_5 < 0) ney4_5 = ney4_5 * -1;
	if (ney1_6 == 0) ney4_6 = 0;
	if (ney4_6 < 0) ney4_6 = ney4_6 * -1;
	if (ney1_7 == 0) ney4_7 = 0;
	if (ney4_7 < 0) ney4_7 = ney4_7 * -1;
	if (ney1_8 == 0) ney4_8 = 0;
	if (ney4_8 < 0) ney4_8 = ney4_8 * -1;
	if (ney1_9 == 0) ney4_9 = 0;
	if (ney4_9 < 0) ney4_9 = ney4_9 * -1;
	if (ney1_10 == 0) ney4_10 = 0;
	if (ney4_10 < 0) ney4_10 = ney4_10 * -1;
	if (ney1_11 == 0) ney4_11 = 0;
	if (ney4_11 < 0) ney4_11 = ney4_11 * -1;
	if (ney1_12 == 0) ney4_12 = 0;
	if (ney4_12 < 0) ney4_12 = ney4_12 * -1;
	if (ney1_13 == 0) ney4_13 = 0;
	if (ney4_13 < 0) ney4_13 = ney4_13 * -1;
	if (ney1_14 == 0) ney4_14 = 0;
	if (ney4_14 < 0) ney4_14 = ney4_14 * -1;
	if (ney1_15 == 0) ney4_15 = 0;
	if (ney4_15 < 0) ney4_15 = ney4_15 * -1;
	if (ney1_16 == 0) ney4_16 = 0;
	if (ney4_16 < 0) ney4_16 = ney4_16 * -1;
	if (ney1_17 == 0) ney4_17 = 0;
	if (ney4_17 < 0) ney4_17 = ney4_17 * -1;
	if (ney1_18 == 0) ney4_18 = 0;
	if (ney4_18 < 0) ney4_18 = ney4_18 * -1;
	if (ney1_19 == 0) ney4_19 = 0;
	if (ney4_19 < 0) ney4_19 = ney4_19 * -1;
	if (ney1_20 == 0) ney4_20 = 0;
	if (ney4_20 < 0) ney4_20 = ney4_20 * -1;
}
void allRandom() {
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran(); w1_15 = ran(); w1_16 = ran(); w1_17 = ran(); w1_18 = ran(); w1_19 = ran(); w1_20 = ran();
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran(); w2_15 = ran(); w2_16 = ran(); w2_17 = ran(); w2_18 = ran(); w2_19 = ran(); w2_20 = ran();
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran(); w3_15 = ran(); w3_16 = ran(); w3_17 = ran(); w3_18 = ran(); w3_19 = ran(); w3_20 = ran();
	wf4 = ran(); w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran(); w4_12 = ran(); w4_13 = ran(); w4_14 = ran(); w4_15 = ran(); w4_16 = ran(); w4_17 = ran(); w4_18 = ran(); w4_19 = ran(); w4_20 = ran();
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran(); w5_15 = ran(); w5_16 = ran(); w5_17 = ran(); w5_18 = ran(); w5_19 = ran(); w5_20 = ran();
	wf6 = ran(); w6_1 = ran(); w6_2 = ran(); w6_3 = ran(); w6_4 = ran(); w6_5 = ran(); w6_6 = ran(); w6_7 = ran(); w6_8 = ran(); w6_9 = ran(); w6_10 = ran(); w6_11 = ran(); w6_12 = ran(); w6_13 = ran(); w6_14 = ran(); w6_15 = ran(); w6_16 = ran(); w6_17 = ran(); w6_18 = ran(); w6_19 = ran(); w6_20 = ran();

	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran(); w2_1_6 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran(); w2_2_6 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran(); w2_3_6 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran(); w2_4_6 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran(); w2_5_6 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran(); w2_6_6 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran(); w2_7_6 = ran();
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran(); w2_8_6 = ran();
	w2_9_1 = ran(); w2_9_2 = ran(); w2_9_3 = ran(); w2_9_4 = ran();  w2_9_5 = ran(); w2_9_6 = ran();
	w2_10_1 = ran(); w2_10_2 = ran(); w2_10_3 = ran(); w2_10_4 = ran();  w2_10_5 = ran(); w2_10_6 = ran();

	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran(); w3_1_9 = ran(); w3_1_10 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran(); w3_2_9 = ran(); w3_2_10 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran(); w3_3_9 = ran(); w3_3_10 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran(); w3_4_9 = ran(); w3_4_10 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran(); w3_5_9 = ran(); w3_5_10 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran(); w3_6_9 = ran(); w3_6_10 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran(); w3_7_9 = ran(); w3_7_10 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran(); w3_8_9 = ran(); w3_8_10 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran(); w3_9_9 = ran(); w3_9_10 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran(); w3_10_9 = ran(); w3_10_10 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran(); w3_11_9 = ran(); w3_11_10 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran(); w3_12_9 = ran(); w3_12_10 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran(); w3_13_9 = ran(); w3_13_10 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran(); w3_14_9 = ran(); w3_14_10 = ran();
	w3_15_1 = ran(); w3_15_2 = ran(); w3_15_3 = ran(); w3_15_4 = ran(); w3_15_5 = ran(); w3_15_6 = ran(); w3_15_7 = ran(); w3_15_8 = ran(); w3_15_9 = ran(); w3_15_10 = ran();
	w3_16_1 = ran(); w3_16_2 = ran(); w3_16_3 = ran(); w3_16_4 = ran(); w3_16_5 = ran(); w3_16_6 = ran(); w3_16_7 = ran(); w3_16_8 = ran(); w3_16_9 = ran(); w3_16_10 = ran();
	w3_17_1 = ran(); w3_17_2 = ran(); w3_17_3 = ran(); w3_17_4 = ran(); w3_17_5 = ran(); w3_17_6 = ran(); w3_17_7 = ran(); w3_17_8 = ran(); w3_17_9 = ran(); w3_17_10 = ran();
	w3_18_1 = ran(); w3_18_2 = ran(); w3_18_3 = ran(); w3_18_4 = ran(); w3_18_5 = ran(); w3_18_6 = ran(); w3_18_7 = ran(); w3_18_8 = ran(); w3_18_9 = ran(); w3_18_10 = ran();
	w3_19_1 = ran(); w3_19_2 = ran(); w3_19_3 = ran(); w3_19_4 = ran(); w3_19_5 = ran(); w3_19_6 = ran(); w3_19_7 = ran(); w3_19_8 = ran(); w3_19_9 = ran(); w3_19_10 = ran();
	w3_20_1 = ran(); w3_20_2 = ran(); w3_20_3 = ran(); w3_20_4 = ran(); w3_20_5 = ran(); w3_20_6 = ran(); w3_20_7 = ran(); w3_20_8 = ran(); w3_20_9 = ran(); w3_20_10 = ran();
}
void random1() {
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran(); w1_15 = ran(); w1_16 = ran(); w1_17 = ran(); w1_18 = ran(); w1_19 = ran(); w1_20 = ran();
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran(); w2_15 = ran(); w2_16 = ran(); w2_17 = ran(); w2_18 = ran(); w2_19 = ran(); w2_20 = ran();
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran(); w3_15 = ran(); w3_16 = ran(); w3_17 = ran(); w3_18 = ran(); w3_19 = ran(); w3_20 = ran();
	wf4 = ran(); w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran(); w4_12 = ran(); w4_13 = ran(); w4_14 = ran(); w4_15 = ran(); w4_16 = ran(); w4_17 = ran(); w4_18 = ran(); w4_19 = ran(); w4_20 = ran();
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran(); w5_15 = ran(); w5_16 = ran(); w5_17 = ran(); w5_18 = ran(); w5_19 = ran(); w5_20 = ran();
	wf6 = ran(); w6_1 = ran(); w6_2 = ran(); w6_3 = ran(); w6_4 = ran(); w6_5 = ran(); w6_6 = ran(); w6_7 = ran(); w6_8 = ran(); w6_9 = ran(); w6_10 = ran(); w6_11 = ran(); w6_12 = ran(); w6_13 = ran(); w6_14 = ran(); w6_15 = ran(); w6_16 = ran(); w6_17 = ran(); w6_18 = ran(); w6_19 = ran(); w6_20 = ran();

}
void random1_1() {
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran(); w1_15 = ran(); w1_16 = ran(); w1_17 = ran(); w1_18 = ran(); w1_19 = ran(); w1_20 = ran();
}
void random1_2() {
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran(); w2_15 = ran(); w2_16 = ran(); w2_17 = ran(); w2_18 = ran(); w2_19 = ran(); w2_20 = ran();
}
void random1_3() {
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran(); w3_15 = ran(); w3_16 = ran(); w3_17 = ran(); w3_18 = ran(); w3_19 = ran(); w3_20 = ran();
}
void random1_4() {
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran(); w3_15 = ran(); w3_16 = ran(); w3_17 = ran(); w3_18 = ran(); w3_19 = ran(); w3_20 = ran();
}
void random1_5() {
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran(); w5_15 = ran(); w5_16 = ran(); w5_17 = ran(); w5_18 = ran(); w5_19 = ran(); w5_20 = ran();
	wf6 = ran(); w6_1 = ran(); w6_2 = ran(); w6_3 = ran(); w6_4 = ran(); w6_5 = ran(); w6_6 = ran(); w6_7 = ran(); w6_8 = ran(); w6_9 = ran(); w6_10 = ran(); w6_11 = ran(); w6_12 = ran(); w6_13 = ran(); w6_14 = ran(); w6_15 = ran(); w6_16 = ran(); w6_17 = ran(); w6_18 = ran(); w6_19 = ran(); w6_20 = ran();

}
void random2() {
	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran(); w2_1_6 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran(); w2_2_6 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran(); w2_3_6 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran(); w2_4_6 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran(); w2_5_6 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran(); w2_6_6 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran(); w2_7_6 = ran();
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran(); w2_8_6 = ran();
	w2_9_1 = ran(); w2_9_2 = ran(); w2_9_3 = ran(); w2_9_4 = ran();  w2_9_5 = ran(); w2_9_6 = ran();
	w2_10_1 = ran(); w2_10_2 = ran(); w2_10_3 = ran(); w2_10_4 = ran();  w2_10_5 = ran(); w2_10_6 = ran();
}
void random2_1() {
	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran(); w2_1_6 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran(); w2_2_6 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran(); w2_3_6 = ran();
}
void random2_2() {
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran(); w2_4_6 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran(); w2_5_6 = ran();
}
void random2_3() {
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran(); w2_6_6 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran(); w2_7_6 = ran();
}
void random2_4() {
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran(); w2_8_6 = ran();
	w2_9_1 = ran(); w2_9_2 = ran(); w2_9_3 = ran(); w2_9_4 = ran();  w2_9_5 = ran(); w2_9_6 = ran();
	w2_10_1 = ran(); w2_10_2 = ran(); w2_10_3 = ran(); w2_10_4 = ran();  w2_10_5 = ran(); w2_10_6 = ran();
}
void random3() {
	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran(); w3_1_9 = ran(); w3_1_10 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran(); w3_2_9 = ran(); w3_2_10 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran(); w3_3_9 = ran(); w3_3_10 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran(); w3_4_9 = ran(); w3_4_10 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran(); w3_5_9 = ran(); w3_5_10 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran(); w3_6_9 = ran(); w3_6_10 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran(); w3_7_9 = ran(); w3_7_10 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran(); w3_8_9 = ran(); w3_8_10 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran(); w3_9_9 = ran(); w3_9_10 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran(); w3_10_9 = ran(); w3_10_10 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran(); w3_11_9 = ran(); w3_11_10 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran(); w3_12_9 = ran(); w3_12_10 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran(); w3_13_9 = ran(); w3_13_10 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran(); w3_14_9 = ran(); w3_14_10 = ran();
	w3_15_1 = ran(); w3_15_2 = ran(); w3_15_3 = ran(); w3_15_4 = ran(); w3_15_5 = ran(); w3_15_6 = ran(); w3_15_7 = ran(); w3_15_8 = ran(); w3_15_9 = ran(); w3_15_10 = ran();
	w3_16_1 = ran(); w3_16_2 = ran(); w3_16_3 = ran(); w3_16_4 = ran(); w3_16_5 = ran(); w3_16_6 = ran(); w3_16_7 = ran(); w3_16_8 = ran(); w3_16_9 = ran(); w3_16_10 = ran();
	w3_17_1 = ran(); w3_17_2 = ran(); w3_17_3 = ran(); w3_17_4 = ran(); w3_17_5 = ran(); w3_17_6 = ran(); w3_17_7 = ran(); w3_17_8 = ran(); w3_17_9 = ran(); w3_17_10 = ran();
	w3_18_1 = ran(); w3_18_2 = ran(); w3_18_3 = ran(); w3_18_4 = ran(); w3_18_5 = ran(); w3_18_6 = ran(); w3_18_7 = ran(); w3_18_8 = ran(); w3_18_9 = ran(); w3_18_10 = ran();
	w3_19_1 = ran(); w3_19_2 = ran(); w3_19_3 = ran(); w3_19_4 = ran(); w3_19_5 = ran(); w3_19_6 = ran(); w3_19_7 = ran(); w3_19_8 = ran(); w3_19_9 = ran(); w3_19_10 = ran();
	w3_20_1 = ran(); w3_20_2 = ran(); w3_20_3 = ran(); w3_20_4 = ran(); w3_20_5 = ran(); w3_20_6 = ran(); w3_20_7 = ran(); w3_20_8 = ran(); w3_20_9 = ran(); w3_20_10 = ran();

}
void random3_1() {
	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran(); w3_1_9 = ran(); w3_1_10 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran();	w3_2_9 = ran(); w3_2_10 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran(); w3_3_9 = ran(); w3_3_10 = ran();
}
void random3_2() {
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran(); w3_4_9 = ran(); w3_4_10 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran(); w3_5_9 = ran(); w3_5_10 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran(); w3_6_9 = ran(); w3_6_10 = ran();
}
void random3_3() {
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran(); w3_7_9 = ran(); w3_7_10 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran(); w3_8_9 = ran(); w3_8_10 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran(); w3_9_9 = ran(); w3_9_10 = ran();
}
void random3_4() {
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran(); w3_10_9 = ran(); w3_10_10 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran(); w3_11_9 = ran(); w3_11_10 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran(); w3_12_9 = ran(); w3_12_10 = ran();
}
void random3_5() {
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran(); w3_13_9 = ran(); w3_13_10 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran(); w3_14_9 = ran(); w3_14_10 = ran();
	w3_15_1 = ran(); w3_15_2 = ran(); w3_15_3 = ran(); w3_15_4 = ran(); w3_15_5 = ran(); w3_15_6 = ran(); w3_15_7 = ran(); w3_15_8 = ran(); w3_15_9 = ran(); w3_15_10 = ran();
}
void random3_6() {
	w3_16_1 = ran(); w3_16_2 = ran(); w3_16_3 = ran(); w3_16_4 = ran(); w3_16_5 = ran(); w3_16_6 = ran(); w3_16_7 = ran(); w3_16_8 = ran(); w3_16_9 = ran(); w3_16_10 = ran();
	w3_17_1 = ran(); w3_17_2 = ran(); w3_17_3 = ran(); w3_17_4 = ran(); w3_17_5 = ran(); w3_17_6 = ran(); w3_17_7 = ran(); w3_17_8 = ran(); w3_17_9 = ran(); w3_17_10 = ran();
	w3_18_1 = ran(); w3_18_2 = ran(); w3_18_3 = ran(); w3_18_4 = ran(); w3_18_5 = ran(); w3_18_6 = ran(); w3_18_7 = ran(); w3_18_8 = ran(); w3_18_9 = ran(); w3_18_10 = ran();
}
void random3_7() {
	w3_19_1 = ran(); w3_19_2 = ran(); w3_19_3 = ran(); w3_19_4 = ran(); w3_19_5 = ran(); w3_19_6 = ran(); w3_19_7 = ran(); w3_19_8 = ran(); w3_19_9 = ran(); w3_19_10 = ran();
	w3_20_1 = ran(); w3_20_2 = ran(); w3_20_3 = ran(); w3_20_4 = ran(); w3_20_5 = ran(); w3_20_6 = ran(); w3_20_7 = ran(); w3_20_8 = ran(); w3_20_9 = ran(); w3_20_10 = ran();
}
void save_first() {
	wsf1 = wf1; ws1_1 = w1_1; ws1_2 = w1_2; ws1_3 = w1_3; ws1_4 = w1_4; ws1_5 = w1_5; ws1_6 = w1_6; ws1_7 = w1_7; ws1_8 = w1_8; ws1_9 = w1_9; ws1_10 = w1_10; ws1_11 = w1_11; ws1_12 = w1_12; ws1_13 = w1_13; ws1_14 = w1_14; ws1_15 = w1_15; ws1_16 = w1_16; ws1_17 = w1_17; ws1_18 = w1_18; ws1_19 = w1_19; ws1_20 = w1_20;
	wsf2 = wf2; ws2_1 = w2_1; ws2_2 = w2_2; ws2_3 = w2_3; ws2_4 = w2_4; ws2_5 = w2_5; ws2_6 = w2_6; ws2_7 = w2_7; ws2_8 = w2_8; ws2_9 = w2_9; ws2_10 = w2_10; ws2_11 = w2_11; ws2_12 = w2_12; ws2_13 = w2_13; ws2_14 = w2_14; ws2_15 = w2_15; ws2_16 = w2_16; ws2_17 = w2_17; ws2_18 = w2_18; ws2_19 = w2_19; ws2_20 = w2_20;
	wsf3 = wf3; ws3_1 = w3_1; ws3_2 = w3_2; ws3_3 = w3_3; ws3_4 = w3_4; ws3_5 = w3_5; ws3_6 = w3_6; ws3_7 = w3_7; ws3_8 = w3_8; ws3_9 = w3_9; ws3_10 = w3_10; ws3_11 = w3_11; ws3_12 = w3_12; ws3_13 = w3_13; ws3_14 = w3_14; ws3_15 = w3_15; ws3_16 = w3_16; ws3_17 = w3_17; ws3_18 = w3_18; ws3_19 = w3_19; ws3_20 = w3_20;
	wsf4 = wf4; ws4_1 = w4_1; ws4_2 = w4_2; ws4_3 = w4_3; ws4_4 = w4_4; ws4_5 = w4_5; ws4_6 = w4_6; ws4_7 = w4_7; ws4_8 = w4_8; ws4_9 = w4_9; ws4_10 = w4_10; ws4_11 = w4_11; ws4_12 = w4_12; ws4_13 = w4_13; ws4_14 = w4_14; ws4_15 = w4_15; ws4_16 = w4_16; ws4_17 = w4_17; ws4_18 = w4_18; ws4_19 = w4_19; ws4_20 = w4_20;
	wsf5 = wf5; ws5_1 = w5_1; ws5_2 = w5_2; ws5_3 = w5_3; ws5_4 = w5_4; ws5_5 = w5_5; ws5_6 = w5_6; ws5_7 = w5_7; ws5_8 = w5_8; ws5_9 = w5_9; ws5_10 = w5_10; ws5_11 = w5_11; ws5_12 = w5_12; ws5_13 = w5_13; ws5_14 = w5_14; ws5_15 = w5_15; ws5_16 = w5_16; ws5_17 = w5_17; ws5_18 = w5_18; ws5_19 = w5_19; ws5_20 = w5_20;
	wsf6 = wf6; ws6_1 = w6_1; ws6_2 = w6_2; ws6_3 = w6_3; ws6_4 = w6_4; ws6_5 = w6_5; ws6_6 = w6_6; ws6_7 = w6_7; ws6_8 = w6_8; ws6_9 = w6_9; ws6_10 = w6_10; ws6_11 = w6_11; ws6_12 = w6_12; ws6_13 = w6_13; ws6_14 = w6_14; ws6_15 = w6_15; ws6_16 = w6_16; ws6_17 = w6_17; ws6_18 = w6_18; ws6_19 = w6_19; ws6_20 = w6_20;

	ws2_1_1 = w2_1_1; ws2_1_2 = w2_1_2; ws2_1_3 = w2_1_3; ws2_1_4 = w2_1_4; ws2_1_5 = w2_1_5; ws2_1_6 = w2_1_6;
	ws2_2_1 = w2_2_1; ws2_2_2 = w2_2_2; ws2_2_3 = w2_2_3; ws2_2_4 = w2_2_4; ws2_2_5 = w2_2_5; ws2_2_6 = w2_2_6;
	ws2_3_1 = w2_3_1; ws2_3_2 = w2_3_2; ws2_3_3 = w2_3_3; ws2_3_4 = w2_3_4; ws2_3_5 = w2_3_5; ws2_3_6 = w2_3_6;
	ws2_4_1 = w2_4_1; ws2_4_2 = w2_4_2; ws2_4_3 = w2_4_3; ws2_4_4 = w2_4_4; ws2_4_5 = w2_4_5; ws2_4_6 = w2_4_6;
	ws2_5_1 = w2_5_1; ws2_5_2 = w2_5_2; ws2_5_3 = w2_5_3; ws2_5_4 = w2_5_4; ws2_5_5 = w2_5_5; ws2_5_6 = w2_5_6;
	ws2_6_1 = w2_6_1; ws2_6_2 = w2_6_2; ws2_6_3 = w2_6_3; ws2_6_4 = w2_6_4; ws2_6_5 = w2_6_5; ws2_6_6 = w2_6_6;
	ws2_7_1 = w2_7_1; ws2_7_2 = w2_7_2; ws2_7_3 = w2_7_3; ws2_7_4 = w2_7_4; ws2_7_5 = w2_7_5; ws2_7_6 = w2_7_6;
	ws2_8_1 = w2_8_1; ws2_8_2 = w2_8_2; ws2_8_3 = w2_8_3; ws2_8_4 = w2_8_4; ws2_8_5 = w2_8_5; ws2_8_6 = w2_8_6;
	ws2_9_1 = w2_9_1; ws2_9_2 = w2_9_2; ws2_9_3 = w2_9_3; ws2_9_4 = w2_9_4; ws2_9_5 = w2_9_5; ws2_9_6 = w2_9_6;
	ws2_10_1 = w2_10_1; ws2_10_2 = w2_10_2; ws2_10_3 = w2_10_3; ws2_10_4 = w2_10_4; ws2_10_5 = w2_10_5; ws2_10_6 = w2_10_6;

	ws3_1_1 = w3_1_1; ws3_1_2 = w3_1_2; ws3_1_3 = w3_1_3; ws3_1_4 = w3_1_4; ws3_1_5 = w3_1_5; ws3_1_6 = w3_1_6; ws3_1_7 = w3_1_7; ws3_1_8 = w3_1_8; ws3_1_9 = w3_1_9; ws3_1_10 = w3_1_10;
	ws3_2_1 = w3_2_1; ws3_2_2 = w3_2_2; ws3_2_3 = w3_2_3; ws3_2_4 = w3_2_4; ws3_2_5 = w3_2_5; ws3_2_6 = w3_2_6; ws3_2_7 = w3_2_7; ws3_2_8 = w3_2_8; ws3_2_9 = w3_2_9; ws3_2_10 = w3_2_10;
	ws3_3_1 = w3_3_1; ws3_3_2 = w3_3_2; ws3_3_3 = w3_3_3; ws3_3_4 = w3_3_4; ws3_3_5 = w3_3_5; ws3_3_6 = w3_3_6; ws3_3_7 = w3_3_7; ws3_3_8 = w3_3_8; ws3_3_9 = w3_3_9; ws3_3_10 = w3_3_10;
	ws3_4_1 = w3_4_1; ws3_4_2 = w3_4_2; ws3_4_3 = w3_4_3; ws3_4_4 = w3_4_4; ws3_4_5 = w3_4_5; ws3_4_6 = w3_4_6; ws3_4_7 = w3_4_7; ws3_4_8 = w3_4_8; ws3_4_9 = w3_4_9; ws3_4_10 = w3_4_10;
	ws3_5_1 = w3_5_1; ws3_5_2 = w3_5_2; ws3_5_3 = w3_5_3; ws3_5_4 = w3_5_4; ws3_5_5 = w3_5_5; ws3_5_6 = w3_5_6; ws3_5_7 = w3_5_7; ws3_5_8 = w3_5_8; ws3_5_9 = w3_5_9; ws3_5_10 = w3_5_10;
	ws3_6_1 = w3_6_1; ws3_6_2 = w3_6_2; ws3_6_3 = w3_6_3; ws3_6_4 = w3_6_4; ws3_6_5 = w3_6_5; ws3_6_6 = w3_6_6; ws3_6_7 = w3_6_7; ws3_6_8 = w3_6_8; ws3_6_9 = w3_6_9; ws3_6_10 = w3_6_10;
	ws3_7_1 = w3_7_1; ws3_7_2 = w3_7_2; ws3_7_3 = w3_7_3; ws3_7_4 = w3_7_4; ws3_7_5 = w3_7_5; ws3_7_6 = w3_7_6; ws3_7_7 = w3_7_7; ws3_7_8 = w3_7_8; ws3_7_9 = w3_7_9; ws3_7_10 = w3_7_10;
	ws3_8_1 = w3_8_1; ws3_8_2 = w3_8_2; ws3_8_3 = w3_8_3; ws3_8_4 = w3_8_4; ws3_8_5 = w3_8_5; ws3_8_6 = w3_8_6; ws3_8_7 = w3_8_7; ws3_8_8 = w3_8_8; ws3_8_9 = w3_8_9; ws3_8_10 = w3_8_10;
	ws3_9_1 = w3_9_1; ws3_9_2 = w3_9_2; ws3_9_3 = w3_9_3; ws3_9_4 = w3_9_4; ws3_9_5 = w3_9_5; ws3_9_6 = w3_9_6; ws3_9_7 = w3_9_7; ws3_9_8 = w3_9_8; ws3_9_9 = w3_9_9; ws3_9_10 = w3_9_10;
	ws3_10_1 = w3_10_1; ws3_10_2 = w3_10_2; ws3_10_3 = w3_10_3; ws3_10_4 = w3_10_4; ws3_10_5 = w3_10_5; ws3_10_6 = w3_10_6; ws3_10_7 = w3_10_7; ws3_10_8 = w3_10_8; ws3_10_9 = w3_10_9; ws3_10_10 = w3_10_10;
	ws3_11_1 = w3_11_1; ws3_11_2 = w3_11_2; ws3_11_3 = w3_11_3; ws3_11_4 = w3_11_4; ws3_11_5 = w3_11_5; ws3_11_6 = w3_11_6; ws3_11_7 = w3_11_7; ws3_11_8 = w3_11_8; ws3_11_9 = w3_11_9; ws3_11_10 = w3_11_10;
	ws3_12_1 = w3_12_1; ws3_12_2 = w3_12_2; ws3_12_3 = w3_12_3; ws3_12_4 = w3_12_4; ws3_12_5 = w3_12_5; ws3_12_6 = w3_12_6; ws3_12_7 = w3_12_7; ws3_12_8 = w3_12_8; ws3_12_9 = w3_12_9; ws3_12_10 = w3_12_10;
	ws3_13_1 = w3_13_1; ws3_13_2 = w3_13_2; ws3_13_3 = w3_13_3; ws3_13_4 = w3_13_4; ws3_13_5 = w3_13_5; ws3_13_6 = w3_13_6; ws3_13_7 = w3_13_7; ws3_13_8 = w3_13_8; ws3_13_9 = w3_13_9; ws3_13_10 = w3_13_10;
	ws3_14_1 = w3_14_1; ws3_14_2 = w3_14_2; ws3_14_3 = w3_14_3; ws3_14_4 = w3_14_4; ws3_14_5 = w3_14_5; ws3_14_6 = w3_14_6; ws3_14_7 = w3_14_7; ws3_14_8 = w3_14_8; ws3_14_9 = w3_14_9; ws3_14_10 = w3_14_10;
	ws3_15_1 = w3_15_1; ws3_15_2 = w3_15_2; ws3_15_3 = w3_15_3; ws3_15_4 = w3_15_4; ws3_15_5 = w3_15_5; ws3_15_6 = w3_15_6; ws3_15_7 = w3_15_7; ws3_15_8 = w3_15_8; ws3_15_9 = w3_15_9; ws3_15_10 = w3_15_10;
	ws3_16_1 = w3_16_1; ws3_16_2 = w3_16_2; ws3_16_3 = w3_16_3; ws3_16_4 = w3_16_4; ws3_16_5 = w3_16_5; ws3_16_6 = w3_16_6; ws3_16_7 = w3_16_7; ws3_16_8 = w3_16_8; ws3_16_9 = w3_16_9; ws3_16_10 = w3_16_10;
	ws3_17_1 = w3_17_1; ws3_17_2 = w3_17_2; ws3_17_3 = w3_17_3; ws3_17_4 = w3_17_4; ws3_17_5 = w3_17_5; ws3_17_6 = w3_17_6; ws3_17_7 = w3_17_7; ws3_17_8 = w3_17_8; ws3_17_9 = w3_17_9; ws3_17_10 = w3_17_10;
	ws3_18_1 = w3_18_1; ws3_18_2 = w3_18_2; ws3_18_3 = w3_18_3; ws3_18_4 = w3_18_4; ws3_18_5 = w3_18_5; ws3_18_6 = w3_18_6; ws3_18_7 = w3_18_7; ws3_18_8 = w3_18_8; ws3_18_9 = w3_18_9; ws3_18_10 = w3_18_10;
	ws3_19_1 = w3_19_1; ws3_19_2 = w3_19_2; ws3_19_3 = w3_19_3; ws3_19_4 = w3_19_4; ws3_19_5 = w3_19_5; ws3_19_6 = w3_19_6; ws3_19_7 = w3_19_7; ws3_19_8 = w3_19_8; ws3_19_9 = w3_19_9; ws3_19_10 = w3_19_10;
	ws3_20_1 = w3_20_1; ws3_20_2 = w3_20_2; ws3_20_3 = w3_20_3; ws3_20_4 = w3_20_4; ws3_20_5 = w3_20_5; ws3_20_6 = w3_20_6; ws3_20_7 = w3_20_7; ws3_20_8 = w3_20_8; ws3_20_9 = w3_20_9; ws3_20_10 = w3_20_10;
}
void save1() {
	wsf1 = arifmetic(wf1, wsf1); ws1_1 = arifmetic(ws1_1, w1_1); ws1_2 = arifmetic(ws1_2, w1_2); ws1_3 = arifmetic(ws1_3, w1_3); ws1_4 = arifmetic(ws1_4, w1_4); ws1_5 = arifmetic(ws1_5, w1_5); ws1_6 = arifmetic(ws1_6, w1_6); ws1_7 = arifmetic(ws1_7, w1_7); ws1_8 = arifmetic(ws1_8, w1_8); ws1_9 = arifmetic(ws1_9, w1_9); ws1_10 = arifmetic(ws1_10, w1_10); ws1_11 = arifmetic(ws1_11, w1_11); ws1_12 = arifmetic(ws1_12, w1_12); ws1_13 = arifmetic(ws1_13, w1_13); ws1_14 = arifmetic(ws1_14, w1_14); ws1_15 = arifmetic(ws1_15, w1_15); ws1_16 = arifmetic(ws1_16, w1_16); ws1_17 = arifmetic(ws1_17, w1_17); ws1_18 = arifmetic(ws1_18, w1_18); ws1_19 = arifmetic(ws1_19, w1_19); ws1_20 = arifmetic(ws1_20, w1_20);
	wsf2 = arifmetic(wf2, wsf2); ws2_1 = arifmetic(ws2_1, w2_1); ws2_2 = arifmetic(ws2_2, w2_2); ws2_3 = arifmetic(ws2_3, w2_3); ws2_4 = arifmetic(ws2_4, w2_4); ws2_5 = arifmetic(ws2_5, w2_5); ws2_6 = arifmetic(ws2_6, w2_6); ws2_7 = arifmetic(ws2_7, w2_7); ws2_8 = arifmetic(ws2_8, w2_8); ws2_9 = arifmetic(ws2_9, w2_9); ws2_10 = arifmetic(ws2_10, w2_10); ws2_11 = arifmetic(ws2_11, w2_11); ws2_12 = arifmetic(ws2_12, w2_12); ws2_13 = arifmetic(ws2_13, w2_13); ws2_14 = arifmetic(ws2_14, w2_14); ws2_15 = arifmetic(ws2_15, w2_15); ws2_16 = arifmetic(ws2_16, w2_16); ws2_17 = arifmetic(ws2_17, w2_17); ws2_18 = arifmetic(ws2_18, w2_18); ws2_19 = arifmetic(ws2_19, w2_19); ws2_20 = arifmetic(ws2_20, w2_20);
	wsf3 = arifmetic(wf3, wsf3); ws3_1 = arifmetic(ws3_1, w3_1); ws2_2 = arifmetic(ws3_2, w3_2); ws3_3 = arifmetic(ws3_3, w3_3); ws3_4 = arifmetic(ws3_4, w3_4); ws3_5 = arifmetic(ws3_5, w3_5); ws3_6 = arifmetic(ws3_6, w3_6); ws3_7 = arifmetic(ws3_7, w3_7); ws3_8 = arifmetic(ws3_8, w3_8); ws3_9 = arifmetic(ws3_9, w3_9); ws3_10 = arifmetic(ws3_10, w3_10); ws3_11 = arifmetic(ws3_11, w3_11); ws3_12 = arifmetic(ws3_12, w3_12); ws3_13 = arifmetic(ws3_13, w3_13); ws3_14 = arifmetic(ws3_14, w3_14); ws3_15 = arifmetic(ws3_15, w3_15); ws3_16 = arifmetic(ws3_16, w3_16); ws3_17 = arifmetic(ws3_17, w3_17); ws3_18 = arifmetic(ws3_18, w3_18); ws3_19 = arifmetic(ws3_19, w3_19); ws3_20 = arifmetic(ws3_20, w3_20);
	wsf4 = arifmetic(wf4, wsf4); ws4_1 = arifmetic(ws4_1, w4_1); ws4_2 = arifmetic(ws4_2, w4_2); ws4_3 = arifmetic(ws4_3, w4_3); ws4_4 = arifmetic(ws4_4, w4_4); ws4_5 = arifmetic(ws4_5, w4_5); ws4_6 = arifmetic(ws4_6, w4_6); ws4_7 = arifmetic(ws4_7, w4_7); ws4_8 = arifmetic(ws4_8, w4_8); ws4_9 = arifmetic(ws4_9, w4_9); ws4_10 = arifmetic(ws4_10, w4_10); ws4_11 = arifmetic(ws4_11, w4_11); ws4_12 = arifmetic(ws4_12, w4_12); ws4_13 = arifmetic(ws4_13, w4_13); ws4_14 = arifmetic(ws4_14, w4_14); ws4_15 = arifmetic(ws4_15, w4_15); ws4_16 = arifmetic(ws4_16, w4_16); ws4_17 = arifmetic(ws4_17, w4_17); ws4_18 = arifmetic(ws4_18, w4_18); ws4_19 = arifmetic(ws4_19, w4_19); ws4_20 = arifmetic(ws4_20, w4_20);
	wsf5 = arifmetic(wf5, wsf5); ws5_1 = arifmetic(ws5_1, w5_1); ws5_2 = arifmetic(ws5_2, w5_2); ws5_3 = arifmetic(ws5_3, w5_3); ws5_4 = arifmetic(ws5_4, w5_4); ws5_5 = arifmetic(ws5_5, w5_5); ws5_6 = arifmetic(ws5_6, w5_6); ws5_7 = arifmetic(ws5_7, w5_7); ws5_8 = arifmetic(ws5_8, w5_8); ws5_9 = arifmetic(ws5_9, w5_9); ws5_10 = arifmetic(ws5_10, w5_10); ws5_11 = arifmetic(ws5_11, w5_11); ws5_12 = arifmetic(ws5_12, w5_12); ws5_13 = arifmetic(ws5_13, w5_13); ws5_14 = arifmetic(ws5_14, w5_14); ws5_15 = arifmetic(ws5_15, w5_15); ws5_16 = arifmetic(ws5_16, w5_16); ws5_17 = arifmetic(ws5_17, w5_17); ws5_18 = arifmetic(ws5_18, w5_18); ws5_19 = arifmetic(ws5_19, w5_19); ws5_20 = arifmetic(ws5_20, w5_20);
	wsf6 = arifmetic(wf6, wsf6); ws6_1 = arifmetic(ws6_1, w6_1); ws6_2 = arifmetic(ws6_2, w6_2); ws6_3 = arifmetic(ws6_3, w6_3); ws6_4 = arifmetic(ws6_4, w6_4); ws6_5 = arifmetic(ws6_5, w6_5); ws6_6 = arifmetic(ws6_6, w6_6); ws6_7 = arifmetic(ws6_7, w6_7); ws6_8 = arifmetic(ws6_8, w6_8); ws6_9 = arifmetic(ws6_9, w6_9); ws6_10 = arifmetic(ws6_10, w6_10); ws6_11 = arifmetic(ws6_11, w6_11); ws6_12 = arifmetic(ws6_12, w6_12); ws6_13 = arifmetic(ws6_13, w6_13); ws6_14 = arifmetic(ws6_14, w6_14); ws6_15 = arifmetic(ws6_15, w6_15); ws6_16 = arifmetic(ws6_16, w6_16); ws6_17 = arifmetic(ws6_17, w6_17); ws6_18 = arifmetic(ws6_18, w6_18); ws6_19 = arifmetic(ws6_19, w6_19); ws6_20 = arifmetic(ws6_20, w6_20);
}
void save2() {
	ws2_1_1 = arifmetic(ws2_1_1, w2_1_1); ws2_1_2 = arifmetic(ws2_1_2, w2_1_2); ws2_1_3 = arifmetic(ws2_1_3, w2_1_3); ws2_1_4 = arifmetic(ws2_1_4, w2_1_4); ws2_1_5 = arifmetic(ws2_1_5, w2_1_5); ws2_1_6 = arifmetic(ws2_1_6, w2_1_6);
	ws2_2_1 = arifmetic(ws2_2_1, w2_2_1); ws2_2_2 = arifmetic(ws2_2_2, w2_2_2); ws2_2_3 = arifmetic(ws2_2_3, w2_2_3); ws2_2_4 = arifmetic(ws2_2_4, w2_2_4); ws2_2_5 = arifmetic(ws2_2_5, w2_2_5); ws2_2_6 = arifmetic(ws2_2_6, w2_2_6);
	ws2_3_1 = arifmetic(ws2_3_1, w2_3_1); ws2_3_2 = arifmetic(ws2_3_2, w2_3_2); ws2_3_3 = arifmetic(ws2_3_3, w2_3_3); ws2_3_4 = arifmetic(ws2_3_4, w2_3_4); ws2_3_5 = arifmetic(ws2_3_5, w2_3_5); ws2_3_6 = arifmetic(ws2_3_6, w2_3_6);
	ws2_4_1 = arifmetic(ws2_4_1, w2_4_1); ws2_4_2 = arifmetic(ws2_4_2, w2_4_2); ws2_4_3 = arifmetic(ws2_4_3, w2_4_3); ws2_4_4 = arifmetic(ws2_4_4, w2_4_4); ws2_4_5 = arifmetic(ws2_4_5, w2_4_5); ws2_4_6 = arifmetic(ws2_4_6, w2_4_6);
	ws2_5_1 = arifmetic(ws2_5_1, w2_5_1); ws2_5_2 = arifmetic(ws2_5_2, w2_5_2); ws2_5_3 = arifmetic(ws2_5_3, w2_5_3); ws2_5_4 = arifmetic(ws2_5_4, w2_5_4); ws2_5_5 = arifmetic(ws2_5_5, w2_5_5); ws2_5_6 = arifmetic(ws2_5_6, w2_5_6);
	ws2_6_1 = arifmetic(ws2_6_1, w2_6_1); ws2_6_2 = arifmetic(ws2_6_2, w2_6_2); ws2_6_3 = arifmetic(ws2_6_3, w2_6_3); ws2_6_4 = arifmetic(ws2_6_4, w2_6_4); ws2_6_5 = arifmetic(ws2_6_5, w2_6_5); ws2_6_6 = arifmetic(ws2_6_6, w2_6_6);
	ws2_7_1 = arifmetic(ws2_7_1, w2_7_1); ws2_7_2 = arifmetic(ws2_7_2, w2_7_2); ws2_7_3 = arifmetic(ws2_7_3, w2_7_3); ws2_7_4 = arifmetic(ws2_7_4, w2_7_4); ws2_7_5 = arifmetic(ws2_7_5, w2_7_5); ws2_7_6 = arifmetic(ws2_7_6, w2_7_6);
	ws2_8_1 = arifmetic(ws2_8_1, w2_8_1); ws2_8_2 = arifmetic(ws2_8_2, w2_8_2); ws2_8_3 = arifmetic(ws2_8_3, w2_8_3); ws2_8_4 = arifmetic(ws2_8_4, w2_8_4); ws2_8_5 = arifmetic(ws2_8_5, w2_8_5); ws2_8_6 = arifmetic(ws2_8_6, w2_8_6);
	ws2_9_1 = arifmetic(ws2_9_1, w2_9_1); ws2_9_2 = arifmetic(ws2_9_2, w2_9_2); ws2_9_3 = arifmetic(ws2_9_3, w2_9_3); ws2_9_4 = arifmetic(ws2_9_4, w2_9_4); ws2_9_5 = arifmetic(ws2_9_5, w2_9_5); ws2_9_6 = arifmetic(ws2_9_6, w2_9_6);
	ws2_10_1 = arifmetic(ws2_10_1, w2_10_1); ws2_10_2 = arifmetic(ws2_10_2, w2_10_2); ws2_10_3 = arifmetic(ws2_10_3, w2_10_3); ws2_10_4 = arifmetic(ws2_10_4, w2_10_4); ws2_10_5 = arifmetic(ws2_10_5, w2_10_5); ws2_10_6 = arifmetic(ws2_10_6, w2_10_6);
}

void save3() {
	ws3_1_1 = arifmetic(ws3_1_1, w3_1_1); ws3_1_2 = arifmetic(ws3_1_2, w3_1_2); ws3_1_3 = arifmetic(ws3_1_3, w3_1_3); ws3_1_4 = arifmetic(ws3_1_4, w3_1_4); ws3_1_5 = arifmetic(ws3_1_5, w3_1_5); ws3_1_6 = arifmetic(ws3_1_6, w3_1_6); ws3_1_7 = arifmetic(ws3_1_7, w3_1_7); ws3_1_8 = arifmetic(ws3_1_8, w3_1_8); ws3_1_9 = arifmetic(ws3_1_9, w3_1_9); ws3_1_10 = arifmetic(ws3_1_10, w3_1_10);
	ws3_2_1 = arifmetic(ws3_2_1, w3_2_1); ws3_2_2 = arifmetic(ws3_2_2, w3_2_2); ws3_2_3 = arifmetic(ws3_2_3, w3_2_3); ws3_2_4 = arifmetic(ws3_2_4, w3_2_4); ws3_2_5 = arifmetic(ws3_2_5, w3_2_5); ws3_2_6 = arifmetic(ws3_2_6, w3_2_6); ws3_2_7 = arifmetic(ws3_2_7, w3_2_7); ws3_2_8 = arifmetic(ws3_2_8, w3_2_8); ws3_2_9 = arifmetic(ws3_2_9, w3_2_9); ws3_1_10 = arifmetic(ws3_2_10, w3_2_10);
	ws3_3_1 = arifmetic(ws3_3_1, w3_3_1); ws3_3_2 = arifmetic(ws3_3_2, w3_3_2); ws3_3_3 = arifmetic(ws3_3_3, w3_3_3); ws3_3_4 = arifmetic(ws3_3_4, w3_3_4); ws3_3_5 = arifmetic(ws3_3_5, w3_3_5); ws3_3_6 = arifmetic(ws3_3_6, w3_3_6); ws3_3_7 = arifmetic(ws3_3_7, w3_3_7); ws3_3_8 = arifmetic(ws3_3_8, w3_3_8); ws3_3_9 = arifmetic(ws3_3_9, w3_3_9); ws3_1_10 = arifmetic(ws3_3_10, w3_3_10);
	ws3_4_1 = arifmetic(ws3_4_1, w3_4_1); ws3_4_2 = arifmetic(ws3_4_2, w3_4_2); ws3_4_3 = arifmetic(ws3_4_3, w3_4_3); ws3_4_4 = arifmetic(ws3_4_4, w3_4_4); ws3_4_5 = arifmetic(ws3_4_5, w3_4_5); ws3_4_6 = arifmetic(ws3_4_6, w3_4_6); ws3_4_7 = arifmetic(ws3_4_7, w3_4_7); ws3_4_8 = arifmetic(ws3_4_8, w3_4_8); ws3_4_9 = arifmetic(ws3_4_9, w3_4_9); ws3_1_10 = arifmetic(ws3_4_10, w3_4_10);
	ws3_5_1 = arifmetic(ws3_5_1, w3_5_1); ws3_5_2 = arifmetic(ws3_5_2, w3_5_2); ws3_5_3 = arifmetic(ws3_5_3, w3_5_3); ws3_5_4 = arifmetic(ws3_5_4, w3_5_4); ws3_5_5 = arifmetic(ws3_5_5, w3_5_5); ws3_5_6 = arifmetic(ws3_5_6, w3_5_6); ws3_5_7 = arifmetic(ws3_5_7, w3_5_7); ws3_5_8 = arifmetic(ws3_5_8, w3_5_8); ws3_5_9 = arifmetic(ws3_5_9, w3_5_9); ws3_1_10 = arifmetic(ws3_5_10, w3_5_10);
	ws3_6_1 = arifmetic(ws3_6_1, w3_6_1); ws3_6_2 = arifmetic(ws3_6_2, w3_6_2); ws3_6_3 = arifmetic(ws3_6_3, w3_6_3); ws3_6_4 = arifmetic(ws3_6_4, w3_6_4); ws3_6_5 = arifmetic(ws3_6_5, w3_6_5); ws3_6_6 = arifmetic(ws3_6_6, w3_6_6); ws3_6_7 = arifmetic(ws3_6_7, w3_6_7); ws3_6_8 = arifmetic(ws3_6_8, w3_6_8); ws3_6_9 = arifmetic(ws3_6_9, w3_6_9); ws3_1_10 = arifmetic(ws3_6_10, w3_6_10);
	ws3_7_1 = arifmetic(ws3_7_1, w3_7_1); ws3_7_2 = arifmetic(ws3_7_2, w3_7_2); ws3_7_3 = arifmetic(ws3_7_3, w3_7_3); ws3_7_4 = arifmetic(ws3_7_4, w3_7_4); ws3_7_5 = arifmetic(ws3_7_5, w3_7_5); ws3_7_6 = arifmetic(ws3_7_6, w3_7_6); ws3_7_7 = arifmetic(ws3_7_7, w3_7_7); ws3_7_8 = arifmetic(ws3_7_8, w3_7_8); ws3_7_9 = arifmetic(ws3_7_9, w3_7_9); ws3_1_10 = arifmetic(ws3_7_10, w3_7_10);
	ws3_8_1 = arifmetic(ws3_8_1, w3_8_1); ws3_8_2 = arifmetic(ws3_8_2, w3_8_2); ws3_8_3 = arifmetic(ws3_8_3, w3_8_3); ws3_8_4 = arifmetic(ws3_8_4, w3_8_4); ws3_8_5 = arifmetic(ws3_8_5, w3_8_5); ws3_8_6 = arifmetic(ws3_8_6, w3_8_6); ws3_8_7 = arifmetic(ws3_8_7, w3_8_7); ws3_8_8 = arifmetic(ws3_8_8, w3_8_8); ws3_8_9 = arifmetic(ws3_8_9, w3_8_9); ws3_1_10 = arifmetic(ws3_8_10, w3_8_10);
	ws3_9_1 = arifmetic(ws3_9_1, w3_9_1); ws3_9_2 = arifmetic(ws3_9_2, w3_9_2); ws3_9_3 = arifmetic(ws3_9_3, w3_9_3); ws3_9_4 = arifmetic(ws3_9_4, w3_9_4); ws3_9_5 = arifmetic(ws3_9_5, w3_9_5); ws3_9_6 = arifmetic(ws3_9_6, w3_9_6); ws3_9_7 = arifmetic(ws3_9_7, w3_9_7); ws3_9_8 = arifmetic(ws3_9_8, w3_9_8); ws3_9_9 = arifmetic(ws3_9_9, w3_9_9); ws3_1_10 = arifmetic(ws3_9_10, w3_9_10);
	ws3_10_1 = arifmetic(ws3_10_1, w3_10_1); ws3_10_2 = arifmetic(ws3_10_2, w3_10_2); ws3_10_3 = arifmetic(ws3_10_3, w3_10_3); ws3_10_4 = arifmetic(ws3_10_4, w3_10_4); ws3_10_5 = arifmetic(ws3_10_5, w3_10_5); ws3_10_6 = arifmetic(ws3_10_6, w3_10_6); ws3_10_7 = arifmetic(ws3_10_7, w3_10_7); ws3_10_8 = arifmetic(ws3_10_8, w3_10_8); ws3_10_9 = arifmetic(ws3_10_9, w3_10_9); ws3_10_10 = arifmetic(ws3_10_10, w3_10_10);
	ws3_11_1 = arifmetic(ws3_11_1, w3_11_1); ws3_11_2 = arifmetic(ws3_11_2, w3_11_2); ws3_11_3 = arifmetic(ws3_11_3, w3_11_3); ws3_11_4 = arifmetic(ws3_11_4, w3_11_4); ws3_11_5 = arifmetic(ws3_11_5, w3_11_5); ws3_11_6 = arifmetic(ws3_11_6, w3_11_6); ws3_11_7 = arifmetic(ws3_11_7, w3_11_7); ws3_11_8 = arifmetic(ws3_11_8, w3_11_8); ws3_11_9 = arifmetic(ws3_11_9, w3_11_9); ws3_11_10 = arifmetic(ws3_11_10, w3_11_10);
	ws3_12_1 = arifmetic(ws3_12_1, w3_12_1); ws3_12_2 = arifmetic(ws3_12_2, w3_12_2); ws3_12_3 = arifmetic(ws3_12_3, w3_12_3); ws3_12_4 = arifmetic(ws3_12_4, w3_12_4); ws3_12_5 = arifmetic(ws3_12_5, w3_12_5); ws3_12_6 = arifmetic(ws3_12_6, w3_12_6); ws3_12_7 = arifmetic(ws3_12_7, w3_12_7); ws3_12_8 = arifmetic(ws3_12_8, w3_12_8); ws3_12_9 = arifmetic(ws3_12_9, w3_12_9); ws3_12_10 = arifmetic(ws3_12_10, w3_12_10);
	ws3_13_1 = arifmetic(ws3_13_1, w3_13_1); ws3_13_2 = arifmetic(ws3_13_2, w3_13_2); ws3_13_3 = arifmetic(ws3_13_3, w3_13_3); ws3_13_4 = arifmetic(ws3_13_4, w3_13_4); ws3_13_5 = arifmetic(ws3_13_5, w3_13_5); ws3_13_6 = arifmetic(ws3_13_6, w3_13_6); ws3_13_7 = arifmetic(ws3_13_7, w3_13_7); ws3_13_8 = arifmetic(ws3_13_8, w3_13_8); ws3_13_9 = arifmetic(ws3_13_9, w3_13_9); ws3_13_10 = arifmetic(ws3_13_10, w3_13_10);
	ws3_14_1 = arifmetic(ws3_14_1, w3_14_1); ws3_14_2 = arifmetic(ws3_14_2, w3_14_2); ws3_14_3 = arifmetic(ws3_14_3, w3_14_3); ws3_14_4 = arifmetic(ws3_14_4, w3_14_4); ws3_14_5 = arifmetic(ws3_14_5, w3_14_5); ws3_14_6 = arifmetic(ws3_14_6, w3_14_6); ws3_14_7 = arifmetic(ws3_14_7, w3_14_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_14_9 = arifmetic(ws3_14_9, w3_14_9); ws3_14_10 = arifmetic(ws3_14_10, w3_14_10);
	ws3_15_1 = arifmetic(ws3_15_1, w3_15_1); ws3_15_2 = arifmetic(ws3_15_2, w3_15_2); ws3_15_3 = arifmetic(ws3_15_3, w3_15_3); ws3_15_4 = arifmetic(ws3_15_4, w3_15_4); ws3_15_5 = arifmetic(ws3_15_5, w3_15_5); ws3_15_6 = arifmetic(ws3_15_6, w3_15_6); ws3_15_7 = arifmetic(ws3_15_7, w3_15_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_15_9 = arifmetic(ws3_15_9, w3_15_9); ws3_15_10 = arifmetic(ws3_15_10, w3_15_10);
	ws3_16_1 = arifmetic(ws3_16_1, w3_16_1); ws3_16_2 = arifmetic(ws3_16_2, w3_16_2); ws3_16_3 = arifmetic(ws3_16_3, w3_16_3); ws3_16_4 = arifmetic(ws3_16_4, w3_16_4); ws3_16_5 = arifmetic(ws3_16_5, w3_16_5); ws3_16_6 = arifmetic(ws3_16_6, w3_16_6); ws3_16_7 = arifmetic(ws3_16_7, w3_16_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_16_9 = arifmetic(ws3_16_9, w3_16_9); ws3_16_10 = arifmetic(ws3_16_10, w3_16_10);
	ws3_17_1 = arifmetic(ws3_17_1, w3_17_1); ws3_17_2 = arifmetic(ws3_17_2, w3_17_2); ws3_17_3 = arifmetic(ws3_17_3, w3_17_3); ws3_17_4 = arifmetic(ws3_17_4, w3_17_4); ws3_17_5 = arifmetic(ws3_17_5, w3_17_5); ws3_17_6 = arifmetic(ws3_17_6, w3_17_6); ws3_17_7 = arifmetic(ws3_17_7, w3_17_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_17_9 = arifmetic(ws3_17_9, w3_17_9); ws3_17_10 = arifmetic(ws3_17_10, w3_17_10);
	ws3_18_1 = arifmetic(ws3_18_1, w3_18_1); ws3_18_2 = arifmetic(ws3_18_2, w3_18_2); ws3_18_3 = arifmetic(ws3_18_3, w3_18_3); ws3_18_4 = arifmetic(ws3_18_4, w3_18_4); ws3_18_5 = arifmetic(ws3_18_5, w3_18_5); ws3_18_6 = arifmetic(ws3_18_6, w3_18_6); ws3_18_7 = arifmetic(ws3_18_7, w3_18_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_18_9 = arifmetic(ws3_18_9, w3_18_9); ws3_18_10 = arifmetic(ws3_18_10, w3_18_10);
	ws3_19_1 = arifmetic(ws3_19_1, w3_19_1); ws3_19_2 = arifmetic(ws3_19_2, w3_19_2); ws3_19_3 = arifmetic(ws3_19_3, w3_19_3); ws3_19_4 = arifmetic(ws3_19_4, w3_19_4); ws3_19_5 = arifmetic(ws3_19_5, w3_19_5); ws3_19_6 = arifmetic(ws3_19_6, w3_19_6); ws3_19_7 = arifmetic(ws3_19_7, w3_19_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_19_9 = arifmetic(ws3_19_9, w3_19_9); ws3_19_10 = arifmetic(ws3_19_10, w3_19_10);
	ws3_20_1 = arifmetic(ws3_20_1, w3_20_1); ws3_20_2 = arifmetic(ws3_20_2, w3_20_2); ws3_20_3 = arifmetic(ws3_20_3, w3_20_3); ws3_20_4 = arifmetic(ws3_20_4, w3_20_4); ws3_20_5 = arifmetic(ws3_20_5, w3_20_5); ws3_20_6 = arifmetic(ws3_20_6, w3_20_6); ws3_20_7 = arifmetic(ws3_20_7, w3_20_7); ws3_14_8 = arifmetic(ws3_14_8, w3_14_8); ws3_20_9 = arifmetic(ws3_20_9, w3_20_9); ws3_20_10 = arifmetic(ws3_20_10, w3_20_10);
}
void load_base() {
	allClear();
	real_correct = results_correct[st];
	command_choose1 = first_command_correct[st];
	command_choose2 = second_command_correct[st];
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
	else if (command_choose1 == 14) ney1_14 = 1;
	else if (command_choose1 == 15) ney1_15 = 1;
	else if (command_choose1 == 16) ney1_16 = 1;
	else if (command_choose1 == 17) ney1_17 = 1;
	else if (command_choose1 == 18) ney1_18 = 1;
	else if (command_choose1 == 19) ney1_19 = 1;
	else if (command_choose1 == 20) ney1_20 = 1;

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
	else if (command_choose2 == 14) ney1_14 = 1;
	else if (command_choose2 == 15) ney1_15 = 1;
	else if (command_choose2 == 16) ney1_16 = 1;
	else if (command_choose2 == 17) ney1_17 = 1;
	else if (command_choose2 == 18) ney1_18 = 1;
	else if (command_choose2 == 19) ney1_19 = 1;
	else if (command_choose2 == 20) ney1_20 = 1;
	//stadiumn_choose = stadiumn_correct[st];
	
	/*ney1_1 = command_correct1[st];
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
	ney1_14 = command_correct14[st];*/
}
void choose_command() {
	allClear();
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
	else if (command_choose1 == 14) ney1_14 = 1;
	else if (command_choose1 == 15) ney1_15 = 1;
	else if (command_choose1 == 16) ney1_16 = 1;
	else if (command_choose1 == 17) ney1_17 = 1;
	else if (command_choose1 == 18) ney1_18 = 1;
	else if (command_choose1 == 19) ney1_19 = 1;
	else if (command_choose1 == 20) ney1_20 = 1;

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
	else if (command_choose2 == 14) ney1_14 = 1;
	else if (command_choose2 == 15) ney1_15 = 1;
	else if (command_choose2 == 16) ney1_16 = 1;
	else if (command_choose2 == 17) ney1_17 = 1;
	else if (command_choose2 == 18) ney1_18 = 1;
	else if (command_choose2 == 19) ney1_19 = 1;
	else if (command_choose2 == 20) ney1_20 = 1;
}
void stadium() {
	/*stadium_number = stadiumn_choose;
	if (stadium_number == 1) {
		ney1_1 = 2;
	}
	else if (stadium_number == 2) {
		ney1_2 = 2;
	}
	else if (stadium_number == 3) {
		ney1_3 = 2;
	}
	else if (stadium_number == 4) {
		ney1_4 = 2;
	}
	else if (stadium_number == 5) {
		ney1_5 = 2;
	}
	else if (stadium_number == 6) {
		ney1_6 = 2;
	}
	else if (stadium_number == 7) {
		ney1_7 = 2;
	}
	else if (stadium_number == 8) {
		ney1_8 = 2;
	}
	else if (stadium_number == 9) {
		ney1_9 = 2;
	}
	else if (stadium_number == 10) {
		ney1_10 = 2;
	}
	else if (stadium_number == 11) {
		ney1_11 = 2;
	}
	else if (stadium_number == 12) {
		ney1_12 = 2;
	}
	else if (stadium_number == 13) {
		ney1_13 = 2;
	}
	else if (stadium_number == 11) {
		ney1_14 = 2;
	}*/
}
int sum_com() {
	return ney4_1 + ney4_2 + ney4_3 + ney4_4 + ney4_5 + ney4_6 + ney4_7 + ney4_8 + ney4_9 + ney4_10 + ney4_11 + ney4_12 + ney4_13 + ney4_14 + ney4_15 + ney4_16 + ney4_17 + ney4_18 + ney4_19 + ney4_20;
}
bool is_autostart;
int langulange;
string check_lang;
string file_data;
int is_opened;
int reg_lang;
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "");
	if (file_data == "" || file_data == "0") {
		cout << "Welcome to Stavki Na Sport! Choose your langulange" << endl;
		wcout << L"1. Русский" << endl << "2. English" << endl;
		while (1) {
			cin >> com;
			if (com == "1") {
				langulange = 1;
				break;
			}
			else if (com == "2") {
				langulange = 2;
				break;
			}
			else {
				cout << "error" << endl;
			}

		}
		/*ofstream out("config.txt");
		out << langulange;
		out.close();*/
	}
	cout << ("******************************************") << endl;
	cout << ("****         ***   ****** ****         ***") << endl;
	cout << ("***  ***********   ****** ***  ***********") << endl;
	cout << ("****  ********** *  ***** ****  **********") << endl;
	cout << ("*****  ********* **  **** *****  *********") << endl;
	cout << ("******    ****** ***  *** ******    ******") << endl;
	cout << ("*********  ***** ****  ** *********  *****") << endl;
	cout << ("**********  **** *****  * **********  ****") << endl;
	cout << ("***********  *** ******   ***********  ***") << endl;
	cout << ("***         **** *******  ***         ****") << endl;
	cout << ("******************************************") << endl;
	cout << endl << endl;
	for (int i = 1; i <= 38; ++i) {
		cout << ("#");
		Sleep(1);
	}
	cout << endl;
	//cout << ("######################################") << endl;
	cout << ("Stavki Na Sport") << endl;
	Sleep(100);
	for (int i = 1; i <= 38; ++i) {
		cout << ("#");
		Sleep(1);
	}
	cout << endl;
	//cout << ("######################################") << endl;
	cout << ("Maded by @hacerio") << endl;
	cout << endl;
	//file >> file_data;
	/*if (file_data == "1") {
		langulange = 1;
	}
	else if (file_data == "2") {
		langulange = 2;
	}
	else {
		cout << "There are some errors with config file, now langulange is English" << endl;
		langulange = 2;
		ofstream out("config.txt");
		out << langulange;
		out.close();
	}*/
	int cores_count = thread::hardware_concurrency(); //Óçíŕĺě ę-âî ˙äĺđ
	string get_sys_info = GetCpuVendorString();
	cout << get_sys_info << endl;
	bool is_multipotok = 1;
	string multipotok;
	cout << endl << endl;
	if (langulange == 1) {
		wcout << (L"Привет. Напиши что ты хочешь делать. Для помощи !help , для выхода !exit") << endl;
	}
	else if (langulange == 2) {
		cout << ("Hello! Write a command. For help !help . For exit ! exit") << endl;
	}
	main_menu:
	while (1) {
		if (langulange == 1) {
			wcout << (L"Вы в главном меню") << endl;
		}
		else if (langulange == 2) {
			cout << ("You are in main menu") << endl;
		}
		cin >> com;
		if (com == "!help") {
			if (langulange == 1) {
				wcout << (L"Для старта обучения !start") << endl;
				wcout << (L"Настройки !settings") << endl;
				wcout << (L"Выход !exit") << endl;
			}
			else if (langulange == 2) {
				cout << ("For start !start") << endl;
				cout << ("Settings !settings") << endl;
				cout << ("Exit !exit") << endl;
			}
		}
		else if (com == "!settings") {
			while (1) {
				if (is_multipotok == 1) {
					multipotok = "On";
				}
				else {
					multipotok = "Off";
				}
				if (langulange == 1) {
					wcout << (L"Вы в настройках") << endl << endl;
					wcout << (L"Информация !info") << endl;
					wcout << (L"Автостарт после обучения !autostart") << endl;
					wcout << (L"Дебаг !debug") << endl;
					wcout << (L"Степень обучения !learning") << endl;
					wcout << (L"Глубокое обучение !deeplearning") << endl;
					wcout << (L"Закрыть настройки !exit") << endl;
				}
				else if (langulange == 2) {
					cout << ("Settings") << endl << endl;
					cout << ("Information !info") << endl;
					//cout << ("Langulange !langulange") << endl;
					cout << ("Autostart after learning !autostart") << endl;
					cout << ("Debug !debug") << endl;
					cout << ("How many program must learn !learning") << endl;
					cout << ("Deep learning !deeplearning") << endl;
					cout << ("Close settings !exit") << endl;
				}
				cin >> com;
				/*if (com == "!help") {
					if (langulange == 1) {
						wcout << (L"Информация !info") << endl;
						//cout << ("ßçűę !langulange") << endl;
						wcout << (L"Автостарт после обучения !autostart") << endl;
						wcout << (L"Дебаг !debug") << endl;
						wcout << (L"Степень обучения !learning") << endl;
						wcout << (L"Глубокое обучение !deeplearning") << endl;
						wcout << (L"Закрыть настройки !exit") << endl;
					}
					else if (langulange == 2) {
						cout << ("Information !info") << endl;
						//cout << ("Langulange !langulange") << endl;
						cout << ("Autostart after learning !autostart") << endl;
						cout << ("Debug !debug") << endl;
						cout << ("How many program must learn !learning") << endl;
						cout << ("Deep learning !deeplearning") << endl;
						cout << ("Close settings !exit") << endl;
					}
				}*/
				if (com == "!exit") {
					com == "";
					break;
				}
				else if (com == "!debug") {
					if (langulange == 1) {
						//wcout << (L"Для запуска дебага !on, чтобы не включать нажмите любую клавишу") << endl;
						wcout << (L"Функция временно не работает") << endl;
					}
					else if (langulange == 2) {
						//cout << ("For start debug !on , to not on it press any key") << endl;
						cout << ("Not working") << endl;

					}
					/*while (1) {
						cin >> com;
						if (com == "!on") {
							is_debug = 1;
							break;
						}
						else {
							is_debug = 0;
							break;
						}
					}*/
				}
				else if (com == "!deeplearning") {
					if (langulange == 1) {
						wcout << (L"В разработке") << endl;
					}
					else if (langulange == 2) {
						cout << ("In development.. Please wait") << endl;
					}
				}
				else if (com == "!info") {
					if (langulange == 1) {
						wcout << (L"Ядер ") << cores_count << endl;
						wcout << (L"CPU: ");
						cout << get_sys_info << endl;
						wcout << (L"Язык: русский") << endl;
						wcout << (L"Степень обучения˙: ");
						cout << stepin_navchania << endl;
						wcout << (L"-----------------------") << endl;
						wcout << (L"Author: hacerio") << endl;
						cout << endl;
					}
					else if (langulange == 2) {
						cout << ("CPU cores ") << cores_count << endl;
						cout << ("CPU: ") << get_sys_info << endl;
						cout << ("Langulange: English") << endl;
						cout << ("Degree of the learning: ") << stepin_navchania << endl;
						cout << ("-----------------------") << endl;
						cout << ("Author: hacerio") << endl;
						cout << endl;
					}
				}
				else if (com == "!learning") {
					if (langulange == 1) {
						wcout << L"Вкажите степень обучения 1-5. Чем больше, тем дольше будет прогроамма учится Standart - 3 " << endl;
						wcout << L"Сейчас: " << stepin_navchania << endl;
					}
					else if (langulange == 2) {
						cout << "Indicate the degree of learning of the program 1-5. Standart - 3 " << endl;
						cout << "Now: " << stepin_navchania << endl;
					}
					while (1) {
						cin >> com;
						if (com == "1") {
							stepin_navchania = 1;
							break;
						}
						else if (com == "2") {
							stepin_navchania = 2;
							break;
						}
						else if (com == "3") {
							stepin_navchania = 3;
							break;
						}
						else if (com == "4") {
							stepin_navchania = 4;
							break;
						}
						else if (com == "5") {
							stepin_navchania = 5;
							break;
						}
						else {
							cout << "error" << endl;
						}
					}
					if (langulange == 1) {
						wcout << L"Изменено на: " << stepin_navchania << endl;
						is_learning_complete = 0;
					}
					else if (langulange == 2) {
						cout << "Changed to: " << stepin_navchania << endl;
						is_learning_complete = 0;
					}
				}
				/*else if (com == "!langulange") {
					cout << "1. Đóńńęčé" << endl << "2. English" << endl;
					while (1) {
						cin >> com;
						if (com == "1") {
							langulange = 1;
							break;
						}
						else if (com == "2") {
							langulange = 2;
							break;
						}
						else {
							cout << "error" << endl;
						}
					}
					ofstream out("config.txt");
					out << langulange;
					out.close();
					ifstream file("config.txt");
					if (file.is_open()) {
						file >> check_lang;
						file.close();
						if (langulange == 1) {
							if (check_lang == "1") {
								cout << "All OK" << endl;
							}
							else {
								cout << "Error. config file is dead :(" << endl;
							}
						}
						else if (langulange == 2) {
							if (check_lang == "2") {
								cout << "All OK" << endl;
							}
							else {
								cout << "Error. config file is dead :(" << endl;
							}
						}
					}
					else {
						cout << "File is not open" << endl;
					}
				}*/
				else if (com == "!autostart") {
					if (langulange == 1) {
						wcout << L"Если включить автостарт, то сразу же после обучения програма выдаст результат" << endl;
						wcout << L"Для включения автостарта !on , чтобы не включать нажмите любую клавишу" << endl;
					}
					else if (langulange == 2) {
						cout << "In the some systems learning spend some time, you can on autostart and you can go do your affairs, and when you return result will be" << endl;
						cout << "To on autostart !on , to not on it press any key" << endl;
					}
					cin >> com;
					if (com == "!on") {
						cout << "1.Astralis" << endl;
						cout << "2.Gambit" << endl;
						cout << "3.Na`vi" << endl;
						cout << "4.Heroic" << endl;
						cout << "5.Virtus.pro" << endl;
						cout << "6.Vitality" << endl;
						cout << "7.Liquid" << endl;
						cout << "8.Spirit" << endl;
						cout << "9.fnatic" << endl;
						cout << "10.NIP" << endl;
						cout << "11.mousesport" << endl;
						cout << "12.Furia" << endl;
						cout << "13.Complexity" << endl;
						cout << "14.Faze" << endl;
						while (1) {
							if (langulange == 1) {
								wcout << (L"Номер первой команды") << endl;
							}
							else if (langulange == 2) {
								cout << ("Number of first command") << endl;
							}
							cin >> user_input;
							if (user_input == "1") {
								command_choose1 = 1;
							}
							else if (user_input == "2") {
								command_choose1 = 2;
							}
							else if (user_input == "3") {
								command_choose1 = 3;
							}
							else if (user_input == "4") {
								command_choose1 = 4;
							}
							else if (user_input == "5") {
								command_choose1 = 5;
							}
							else if (user_input == "6") {
								command_choose1 = 6;
							}
							else if (user_input == "7") {
								command_choose1 = 7;
							}
							else if (user_input == "8") {
								command_choose1 = 8;
							}
							else if (user_input == "9") {
								command_choose1 = 9;
							}
							else if (user_input == "10") {
								command_choose1 = 10;
							}
							else if (user_input == "11") {
								command_choose1 = 11;
							}
							else if (user_input == "12") {
								command_choose1 = 12;
							}
							else if (user_input == "13") {
								command_choose1 = 13;
							}
							else if (user_input == "14") {
								command_choose1 = 14;
							}
							else {
								cout << "error" << endl;
								continue;
							}
							if (langulange == 1) {
								wcout << (L"Номер второй команды") << endl;
							}
							else if (langulange == 2) {
								cout << ("Number of second command") << endl;
							}
							cin >> user_input;
							if (user_input == "1") {
								command_choose2 = 1;
							}
							else if (user_input == "2") {
								command_choose2 = 2;
							}
							else if (user_input == "3") {
								command_choose2 = 3;
							}
							else if (user_input == "4") {
								command_choose2 = 4;
							}
							else if (user_input == "5") {
								command_choose2 = 5;
							}
							else if (user_input == "6") {
								command_choose2 = 6;
							}
							else if (user_input == "7") {
								command_choose2 = 7;
							}
							else if (user_input == "8") {
								command_choose2 = 8;
							}
							else if (user_input == "9") {
								command_choose2 = 9;
							}
							else if (user_input == "10") {
								command_choose2 = 10;
							}
							else if (user_input == "11") {
								command_choose2 = 11;
							}
							else if (user_input == "12") {
								command_choose2 = 12;
							}
							else if (user_input == "13") {
								command_choose2 = 13;
							}
							else if (user_input == "14") {
								command_choose2 = 14;
							}
							else {
								cout << "error" << endl;
								continue;
							}
							if (command_choose1 == command_choose2 || command_choose1 > 14 || command_choose2 > 14 || command_choose1 < 1 || command_choose2 < 1) {
								cout << "error" << endl;
								continue;
							}
							else {
								if (langulange == 1) {
									wcout << L"Автостарт включен" << endl;
								}
								else if (langulange == 2) {
									cout << "Autostart is on" << endl;
								}
								is_autostart = 1;
								break;
							}
						}
					}
					else {
					is_autostart = 0;
					}
				}
				else {
					if (langulange == 1) {
						wcout << (L"Неизвестная команда ");
						cout << (com);
						wcout<< /*(L". Помощь !help") <<*/ endl;
					}
					else if (langulange == 1) {
						cout << ("Unknown command ") << com /* << (". To help !help") */<< endl;
					}
				}
			}
		}
		else if (com == "!start") {
			break;
		}
		else if (com == "!exit") {
		cout << "Bye" << endl;
		Sleep(500);
		return 0;
		}
		else {
			if (langulange == 1) {
				wcout << (L"Неизвестная команда ");
				cout << (com);
				wcout << (L". Помощь !help") << endl;
			}
			else if (langulange == 1) {
				cout << ("Unknown command ") << com << (". To help !help") << endl;
			}
		}
	}
		if (cores_count < 3 && is_multipotok == 1) {
			if(langulange == 1){
				wcout << (L"Ядер процесора ") << cores_count << (L"надо минимум 3") << endl;

			}
			else if (langulange == 2) {
				cout << ("CPU cores ") << cores_count << (". Need min 3") << endl;
			}
			goto main_menu;
		}
		else {
			cout << ("CPU cores: ") << cores_count << endl;
		}
		//-----------------Íŕâ÷ŕíí˙----------------------
		if (is_learning_complete == 1) {
			goto programe;
		}
		if (langulange == 1) {
			wcout << L"Програма учится, ожидайте" << endl << endl;
		}
		else {
			cout << "Programe is learning, please wait" << endl << endl;
		}
		is_autostart = 0;
	for (int i = 0; i <= 50000 * stepin_navchania; ++i) {
		if (i % (1000 * stepin_navchania) == 0) {
			cout << i / (1000 * stepin_navchania)<< endl;
		}
		if (is_multipotok == 1) {
			thread th(random1_1);
			thread th1(random1_2);
			thread th12(random1_3);
			thread th14(random1_4);
			thread th15(random1_5);
			thread th2(random2_1);
			thread th3(random2_2);
			thread th11(random2_3);
			th15.join();
			th2.join();
			th11.join();
			th.join();
			th12.join();
			th1.join();
			th14.join();
			thread th17(random2_4);
			thread th4(random3_1);
			thread th5(random3_2);
			thread th6(random3_3);
			thread th7(random3_4);
			thread th8(random3_5);
			thread th13(random3_6);
			thread th16(random3_7);
			thread th9(load_base);
			thread th10(stadium);
			th3.join();
			th4.join();
			th5.join();
			th6.join();
			th7.join();
			th8.join();
			th9.join();
			th10.join();
			th13.join();
			th16.join();
			th17.join();
		}
		stadium();
		neyro_start();
		do_correct();
		correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, ney4_16, ney4_17, ney4_18, ney4_19, ney4_20);
		allClear();
		if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
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
		++st;
	}
	times_correct = 0;
	allClear();
	//-----------------------------------------------------------Äđóăŕ-Ńňŕäł˙-Íŕâ÷ŕíí˙------------------------------------------------
	/*for (int d = 1; d < 40; ++d) {
		if (d % 2 == 0) {
		cout << d / 2 + 40<< endl;
		}

		for (int a = 0; a < 500 * stepin_navchania; ++a) {
			load_base();
			if (is_multipotok == 1) {
				thread th(random3_1);
				thread th1(random3_2);
				thread th2(random3_3);
				thread th3(random3_4);
				thread th4(random3_5);
				thread th5(random3_6);
				thread th6(random3_7);
				th.join();
				th5.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th6.join();
			}
			else {
				random3();
			}
			stadium();
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save3();
			}
			++st;
		}
		for (int b = 0; b < 500 * stepin_navchania; ++b) {
			if (is_multipotok == 1) {
				thread th(random2_1);
				thread th3(random2_2);
				thread th4(random2_3);
				thread th5(random2_4);
				thread th1(load_base);
				thread th2(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th5.join();
			}
			else {
				random2();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			st++;
		}
		for (int c = 0; c < 500 * stepin_navchania; ++c) {
			if (is_multipotok == 1) {
				thread th(random1_1);
				thread th2(random1_2);
				thread th3(random1_3);
				thread th4(random1_4);
				thread th5(random1_5);
				thread th1(load_base);
				stadium();
				th.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th5.join();
			}
			else {
				random1();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save1();
			}
			++st;
		}
	}*/
	//-----------------------------------------------------------Ňđĺň˙-Ńňŕäł˙-Íŕâ÷ŕíí˙------------------------------------------------
	for (int c = 0; c < 50000 * stepin_navchania; ++c) {
		if (c % (1000 * stepin_navchania) == 0) {
			cout << c /(500 * stepin_navchania) + 50 << endl;
		}
		if (is_multipotok == 1) {
			thread th(random1_1);
			thread th1(random1_2);
			thread th12(random1_3);
			thread th14(random1_4);
			thread th15(random1_5);
			thread th2(random2_1);
			thread th3(random2_2);
			thread th11(random2_3);
			thread th17(random2_4);
			thread th4(random3_1);
			thread th5(random3_2);
			thread th6(random3_3);
			thread th7(random3_4);
			thread th8(random3_5);
			thread th13(random3_6);
			thread th16(random3_7);
			thread th9(load_base);
			thread th10(stadium);
			th8.join();
			th9.join();
			th10.join();
			th11.join();
			th12.join();
			th13.join();
			th14.join();
			th15.join();
			th16.join();
			th17.join();
			th.join();
			th1.join();
			th2.join();
			th3.join();
			th4.join();
			th5.join();
			th6.join();
			th7.join();
		}
		else {
			allRandom();
			load_base();
			stadium();
		}
		neyro_start();
		do_correct();
		correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14, ney4_15, ney4_16, ney4_17, ney4_18, ney4_19, ney4_20);
		allClear();
		if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
			st = 0;
		}
		if (correct == real_correct) {
			save1();
			save2();
			save3();
		}
		++st;
	}
	//---------------------------------------------------------------×ĺňâĺđňŕ-Ńňŕäł˙-Íŕâ÷ŕíí˙---------------------------------------------

	/*for (int d = 0; d < 20; ++d) {
		cout << d + 80 << endl;
		for (int a = 0; a < 500 * stepin_navchania; ++a) {
			if (is_multipotok == 1) {
				thread th(random3_1);
				thread th1(random3_2);
				thread th2(random3_3);
				thread th3(random3_4);
				thread th4(random3_5);
				thread th5(random3_6);
				thread th6(random3_7);
				th.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th5.join();
				th6.join();
			}
			else {
				random3();
				load_base();
			}
			stadium();
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			++st;
			if (correct == real_correct) {
				save3();
			}
		}
		for (int b = 0; b < 500 * stepin_navchania; ++b) {
			if (is_multipotok == 1) {
				thread th(random2_1);
				thread th1(random2_2);
				thread th4(random2_3);
				thread th5(random2_4);
				thread th2(load_base);
				thread th3(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th5.join();
			}
			else {
				random2();
				load_base();
				stadium();
			}			
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			++st;
		}
		for (int c = 0; c < 500 * stepin_navchania; ++c) {
			if (is_multipotok == 1) {
				thread th(random1_1);
				thread th1(random1_2);
				thread th4(random1_3);
				thread th5(random1_4);
				thread th6(random1_5);
				thread th2(load_base);
				thread th3(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
				th4.join();
				th5.join();
				th6.join();
			}
			else {
				random1();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(ney4_1, ney4_2, ney4_3, ney4_4, ney4_5, ney4_6, ney4_7, ney4_8, ney4_9, ney4_10, ney4_11, ney4_12, ney4_13, ney4_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save1();
			}
			++st;
		}
	}
	*/
		programe:
	while (1) {
		/*cout << ("Debug? ");
		cin >> debb;*/
		//-----------------------------------------------------------------Îďčňóâŕíí˙-----------------------------------------------------
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
		if (!is_autostart) {
			cout << "1.Astralis" << endl;
			cout << "2.Gambit" << endl;
			cout << "3.Na`vi" << endl;
			cout << "4.Heroic" << endl;
			cout << "5.Virtus.pro" << endl;
			cout << "6.Vitality" << endl;
			cout << "7.Liquid" << endl;
			cout << "8.Spirit" << endl;
			cout << "9.fnatic" << endl;
			cout << "10.NIP" << endl;
			cout << "11.mousesport" << endl;
			cout << "12.Furia" << endl;
			cout << "13.Complexity" << endl;
			cout << "14.Faze" << endl;
			while (1) {
				if (langulange == 1) {
					wcout << (L"Напишите номер первой команды") << endl;
				}
				else if (langulange == 2) {
					cout << ("Write number of first command") << endl;
				}
				cin >> user_input;
				if (user_input == "1") {
					command_choose1 = 1;
				}
				else if (user_input == "2") {
					command_choose1 = 2;
				}
				else if (user_input == "3") {
					command_choose1 = 3;
				}
				else if (user_input == "4") {
					command_choose1 = 4;
				}
				else if (user_input == "5") {
					command_choose1 = 5;
				}
				else if (user_input == "6") {
					command_choose1 = 6;
				}
				else if (user_input == "7") {
					command_choose1 = 7;
				}
				else if (user_input == "8") {
					command_choose1 = 8;
				}
				else if (user_input == "9") {
					command_choose1 = 9;
				}
				else if (user_input == "10") {
					command_choose1 = 10;
				}
				else if (user_input == "11") {
					command_choose1 = 11;
				}
				else if (user_input == "12") {
					command_choose1 = 12;
				}
				else if (user_input == "13") {
					command_choose1 = 13;
				}
				else if (user_input == "14") {
					command_choose1 = 14;
				}
				else {
					cout << "error" << endl;
					continue;
				}
				if (langulange == 1) {
					wcout << (L"Номер второй команды") << endl;
				}
				else if (langulange == 2) {
					cout << "Write number of second command" << endl;
				}
				cin >> user_input;
				if (user_input == "1") {
					command_choose2 = 1;
				}
				else if (user_input == "2") {
					command_choose2 = 2;
				}
				else if (user_input == "3") {
					command_choose2 = 3;
				}
				else if (user_input == "4") {
					command_choose2 = 4;
				}
				else if (user_input == "5") {
					command_choose2 = 5;
				}
				else if (user_input == "6") {
					command_choose2 = 6;
				}
				else if (user_input == "7") {
					command_choose2 = 7;
				}
				else if (user_input == "8") {
					command_choose2 = 8;
				}
				else if (user_input == "9") {
					command_choose2 = 9;
				}
				else if (user_input == "10") {
					command_choose2 = 10;
				}
				else if (user_input == "11") {
					command_choose2 = 11;
				}
				else if (user_input == "12") {
					command_choose2 = 12;
				}
				else if (user_input == "13") {
					command_choose2 = 13;
				}
				else if (user_input == "14") {
					command_choose2 = 14;
				}
				else {
					cout << "error" << endl;
					continue;
				}
				break;
			}
		}
		/*cout << ("Write number of command, whitch play home") << endl;
		cin >> stadiumn_choose;*/
		/*if (stadiumn_choose != command_choose1 && stadiumn_choose != command_choose2 && stadiumn_choose != 0) {
			cout << "Error" << endl;
			continue;
		}*/
		/*	stadium();
			if (debb == 1) {
				debug_file(1, command_choose1);
				debug_file(1, command_choose2);
				debug_file(1, stadiumn_choose);
			}
			*/
		if (command_choose1 == command_choose2 || command_choose1 > 14 || command_choose2 > 14 || command_choose1 < 1 || command_choose2 < 1) {
			cout << "error" << endl;
			continue;
		}
		choose_command();
		//------------------------------------------------------------------Íĺéđîíč--------------------------------------------------------
		ney2_1 = neyron2(0, wsf1, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws1_1, ws1_2, ws1_3, ws1_4, ws1_5, ws1_6, ws1_7, ws1_8, ws1_9, ws1_10, ws1_11, ws1_12, ws1_13, ws1_14, ws1_15, ws1_16, ws1_17, ws1_18, ws1_19, ws1_20);
		ney2_2 = neyron2(0, wsf2, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws2_1, ws2_2, ws2_3, ws2_4, ws2_5, ws2_6, ws2_7, ws2_8, ws2_9, ws2_10, ws2_11, ws2_12, ws2_13, ws2_14, ws2_15, ws2_16, ws2_17, ws2_18, ws2_19, ws2_20);
		ney2_3 = neyron2(0, wsf3, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws3_1, ws3_2, ws3_3, ws3_4, ws3_5, ws3_6, ws3_7, ws3_8, ws3_9, ws3_10, ws3_11, ws3_12, ws3_13, ws3_14, ws3_15, ws3_16, ws3_17, ws3_18, ws3_19, ws3_20);
		ney2_4 = neyron2(0, wsf4, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws4_1, ws4_2, ws4_3, ws4_4, ws4_5, ws4_6, ws4_7, ws4_8, ws4_9, ws4_10, ws4_11, ws4_12, ws4_13, ws4_14, ws4_15, ws4_16, ws4_17, ws4_18, ws4_19, ws4_20);
		ney2_5 = neyron2(0, wsf5, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws5_1, ws5_2, ws5_3, ws5_4, ws5_5, ws5_6, ws5_7, ws5_8, ws5_9, ws5_10, ws5_11, ws5_12, ws5_13, ws5_14, ws5_15, ws5_16, ws5_17, ws5_18, ws5_19, ws5_20);
		ney2_6 = neyron2(0, wsf5, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ney1_15, ney1_16, ney1_17, ney1_18, ney1_19, ney1_20, ws6_1, ws6_2, ws6_3, ws6_4, ws6_5, ws6_6, ws6_7, ws6_8, ws6_9, ws6_10, ws6_11, ws6_12, ws6_13, ws6_14, ws6_15, ws6_16, ws6_17, ws6_18, ws6_19, ws6_20);

		/*if (debb == 1) {
			debug_file(2, ney2_1);
			debug_file(2, ney2_2);
			debug_file(2, ney2_3);
			debug_file(2, ney2_4);
			debug_file(2, ney2_5);
		}*/
		if (is_debug == 1) {
			cout << ws1_1 << " " << ws1_2 << " " << ws1_3 << " " << ws1_4 << " " << ws1_5 << " " << ws1_6 << " " << ws1_7 << " " << ws1_8 << " " << ws1_9 << " " << ws1_10 << " " << ws1_11 << " " << ws1_12 << " " << ws1_13 << " " << ws1_14 << endl;
			cout << ws2_1 << " " << ws2_2 << " " << ws2_3 << " " << ws2_4 << " " << ws2_5 << " " << ws2_6 << " " << ws2_7 << " " << ws2_8 << " " << ws2_9 << " " << ws2_10 << " " << ws2_11 << " " << ws2_12 << " " << ws2_13 << " " << ws2_14 << endl;
			cout << ws3_1 << " " << ws3_2 << " " << ws3_3 << " " << ws3_4 << " " << ws3_5 << " " << ws3_6 << " " << ws3_7 << " " << ws3_8 << " " << ws3_9 << " " << ws3_10 << " " << ws3_11 << " " << ws3_12 << " " << ws3_13 << " " << ws3_14 << endl;
			cout << ws4_1 << " " << ws4_2 << " " << ws4_3 << " " << ws4_4 << " " << ws4_5 << " " << ws4_6 << " " << ws4_7 << " " << ws4_8 << " " << ws4_9 << " " << ws4_10 << " " << ws4_11 << " " << ws4_12 << " " << ws4_13 << " " << ws4_14 << endl;
			cout << ws5_1 << " " << ws5_2 << " " << ws5_3 << " " << ws5_4 << " " << ws5_5 << " " << ws5_6 << " " << ws5_7 << " " << ws5_8 << " " << ws5_9 << " " << ws5_10 << " " << ws5_11 << " " << ws5_12 << " " << ws5_13 << " " << ws5_14 << endl;
			cout << ws6_1 << " " << ws6_2 << " " << ws6_3 << " " << ws6_4 << " " << ws6_5 << " " << ws6_6 << " " << ws6_7 << " " << ws6_8 << " " << ws6_9 << " " << ws6_10 << " " << ws6_11 << " " << ws6_12 << " " << ws6_13 << " " << ws6_14 << endl << endl;
		}
		ney3_1 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_1_1, ws2_1_2, ws2_1_3, ws2_1_4, ws2_1_5, ws2_1_6);
		ney3_2 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_2_1, ws2_2_2, ws2_2_3, ws2_2_4, ws2_2_5, ws2_2_6);
		ney3_3 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_3_1, ws2_3_2, ws2_3_3, ws2_3_4, ws2_3_5, ws2_3_6);
		ney3_4 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_4_1, ws2_4_2, ws2_4_3, ws2_4_4, ws2_4_5, ws2_4_6);
		ney3_5 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_5_1, ws2_5_2, ws2_5_3, ws2_5_4, ws2_5_5, ws2_5_6);
		ney3_6 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_6_1, ws2_6_2, ws2_6_3, ws2_6_4, ws2_6_5, ws2_6_6);
		ney3_7 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_7_1, ws2_7_2, ws2_7_3, ws2_7_4, ws2_7_5, ws2_7_6);
		ney3_8 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_8_1, ws2_8_2, ws2_8_3, ws2_8_4, ws2_8_5, ws2_8_6);
		ney3_9 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_9_1, ws2_9_2, ws2_9_3, ws2_9_4, ws2_9_5, ws2_9_6);
		ney3_10 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ney2_6, ws2_10_1, ws2_10_2, ws2_10_3, ws2_10_4, ws2_10_5, ws2_10_6);

		if (is_debug == 1) {
			cout << ws2_1_1 << " " << ws2_1_2 << " " << ws2_1_3 << " " << ws2_1_4 << " " << ws2_1_5 << " " << ws2_1_6 << endl;
			cout << ws2_2_1 << " " << ws2_2_2 << " " << ws2_2_3 << " " << ws2_2_4 << " " << ws2_2_5 << " " << ws2_2_6 << endl;
			cout << ws2_3_1 << " " << ws2_3_2 << " " << ws2_3_3 << " " << ws2_3_4 << " " << ws2_3_5 << " " << ws2_3_6 << endl;
			cout << ws2_4_1 << " " << ws2_4_2 << " " << ws2_4_3 << " " << ws2_4_4 << " " << ws2_4_5 << " " << ws2_4_6 << endl;
			cout << ws2_5_1 << " " << ws2_5_2 << " " << ws2_5_3 << " " << ws2_5_4 << " " << ws2_5_5 << " " << ws2_5_6 << endl;
			cout << ws2_6_1 << " " << ws2_6_2 << " " << ws2_6_3 << " " << ws2_6_4 << " " << ws2_6_5 << " " << ws2_6_6 << endl;
			cout << ws2_7_1 << " " << ws2_7_2 << " " << ws2_7_3 << " " << ws2_7_4 << " " << ws2_7_5 << " " << ws2_7_6 << endl;
			cout << ws2_8_1 << " " << ws2_8_2 << " " << ws2_8_3 << " " << ws2_8_4 << " " << ws2_8_5 << " " << ws2_8_6 << endl;
			cout << ws2_9_1 << " " << ws2_9_2 << " " << ws2_9_3 << " " << ws2_9_4 << " " << ws2_9_5 << " " << ws2_9_6 << endl;
			cout << ws2_10_1 << " " << ws2_10_2 << " " << ws2_10_3 << " " << ws2_10_4 << " " << ws2_10_5 << " " << ws2_10_6 << endl;
		}

		/*if (debb == 1) {
			debug_file(3, ney3_1);
			debug_file(3, ney3_2);
			debug_file(3, ney3_3);
			debug_file(3, ney3_4);
			debug_file(3, ney3_5);
			debug_file(3, ney3_6);
			debug_file(3, ney3_7);
		}*/
		ney4_1 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_1_1, ws3_1_2, ws3_1_3, ws3_1_4, ws3_1_5, ws3_1_6, ws3_1_7, ws3_1_8, ws3_1_9, ws3_1_10);
		ney4_2 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_2_1, ws3_2_2, ws3_2_3, ws3_2_4, ws3_2_5, ws3_2_6, ws3_2_7, ws3_2_8, ws3_2_9, ws3_2_10);
		ney4_3 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_3_1, ws3_3_2, ws3_3_3, ws3_3_4, ws3_3_5, ws3_3_6, ws3_3_7, ws3_3_8, ws3_3_9, ws3_3_10);
		ney4_4 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_4_1, ws3_4_2, ws3_4_3, ws3_4_4, ws3_4_5, ws3_4_6, ws3_4_7, ws3_4_8, ws3_4_9, ws3_4_10);
		ney4_5 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_5_1, ws3_5_2, ws3_5_3, ws3_5_4, ws3_5_5, ws3_5_6, ws3_5_7, ws3_5_8, ws3_5_9, ws3_5_10);
		ney4_6 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_6_1, ws3_6_2, ws3_6_3, ws3_6_4, ws3_6_5, ws3_6_6, ws3_6_7, ws3_6_8, ws3_6_9, ws3_6_10);
		ney4_7 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_7_1, ws3_7_2, ws3_7_3, ws3_7_4, ws3_7_5, ws3_7_6, ws3_7_7, ws3_7_8, ws3_7_9, ws3_7_10);
		ney4_8 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_8_1, ws3_8_2, ws3_8_3, ws3_8_4, ws3_8_5, ws3_8_6, ws3_8_7, ws3_8_8, ws3_8_9, ws3_8_10);
		ney4_9 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_9_1, ws3_9_2, ws3_9_3, ws3_9_4, ws3_9_5, ws3_9_6, ws3_9_7, ws3_9_8, ws3_9_9, ws3_9_10);
		ney4_10 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_10_1, ws3_10_2, ws3_10_3, ws3_10_4, ws3_10_5, ws3_10_6, ws3_10_7, ws3_10_8, ws3_10_9, ws3_10_10);
		ney4_11 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_11_1, ws3_11_2, ws3_11_3, ws3_11_4, ws3_11_5, ws3_11_6, ws3_11_7, ws3_11_8, ws3_11_9, ws3_11_10);
		ney4_12 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_12_1, ws3_12_2, ws3_12_3, ws3_12_4, ws3_12_5, ws3_12_6, ws3_12_7, ws3_12_8, ws3_12_9, ws3_12_10);
		ney4_13 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_13_1, ws3_13_2, ws3_13_3, ws3_13_4, ws3_13_5, ws3_13_6, ws3_13_7, ws3_13_8, ws3_13_9, ws3_13_10);
		ney4_14 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_14_1, ws3_14_2, ws3_14_3, ws3_14_4, ws3_14_5, ws3_14_6, ws3_14_7, ws3_14_8, ws3_14_9, ws3_14_10);
		ney4_15 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_15_1, ws3_15_2, ws3_15_3, ws3_15_4, ws3_15_5, ws3_15_6, ws3_15_7, ws3_15_8, ws3_15_9, ws3_15_10);
		ney4_16 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_16_1, ws3_16_2, ws3_16_3, ws3_16_4, ws3_16_5, ws3_16_6, ws3_16_7, ws3_16_8, ws3_16_9, ws3_16_10);
		ney4_17 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_17_1, ws3_17_2, ws3_17_3, ws3_17_4, ws3_17_5, ws3_17_6, ws3_17_7, ws3_17_8, ws3_17_9, ws3_17_10);
		ney4_18 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_18_1, ws3_18_2, ws3_18_3, ws3_18_4, ws3_18_5, ws3_18_6, ws3_18_7, ws3_18_8, ws3_18_9, ws3_18_10);
		ney4_19 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_19_1, ws3_19_2, ws3_19_3, ws3_19_4, ws3_19_5, ws3_19_6, ws3_19_7, ws3_19_8, ws3_19_9, ws3_19_10);
		ney4_20 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ney3_9, ney3_10, ws3_20_1, ws3_20_2, ws3_20_3, ws3_20_4, ws3_20_5, ws3_20_6, ws3_20_7, ws3_20_8, ws3_20_9, ws3_20_10);


		if (is_debug) {
			cout << ws3_1_1 << " " << ws3_1_2 << " " << ws3_1_3 << " " << ws3_1_4 << " " << ws3_1_5 << " " << ws3_1_6 << " " << ws3_1_7 << " " << ws3_1_8 << " " << ws3_1_9 << " " << ws3_1_10 << " " << endl;
			cout << ws3_2_1 << " " << ws3_2_2 << " " << ws3_2_3 << " " << ws3_2_4 << " " << ws3_2_5 << " " << ws3_2_6 << " " << ws3_2_7 << " " << ws3_2_8 << " " << ws3_2_9 << " " << ws3_2_10 << " " << endl;
			cout << ws3_3_1 << " " << ws3_3_2 << " " << ws3_3_3 << " " << ws3_3_4 << " " << ws3_3_5 << " " << ws3_3_6 << " " << ws3_3_7 << " " << ws3_3_8 << " " << ws3_3_9 << " " << ws3_3_10 << " " << endl;
			cout << ws3_4_1 << " " << ws3_4_2 << " " << ws3_4_3 << " " << ws3_4_4 << " " << ws3_4_5 << " " << ws3_4_6 << " " << ws3_4_7 << " " << ws3_4_8 << " " << ws3_4_9 << " " << ws3_4_10 << " " << endl;
			cout << ws3_5_1 << " " << ws3_5_2 << " " << ws3_5_3 << " " << ws3_5_4 << " " << ws3_5_5 << " " << ws3_5_6 << " " << ws3_5_7 << " " << ws3_5_8 << " " << ws3_5_9 << " " << ws3_5_10 << " " << endl;
			cout << ws3_6_1 << " " << ws3_6_2 << " " << ws3_6_3 << " " << ws3_6_4 << " " << ws3_6_5 << " " << ws3_6_6 << " " << ws3_6_7 << " " << ws3_6_8 << " " << ws3_6_9 << " " << ws3_6_10 << " " << endl;
			cout << ws3_7_1 << " " << ws3_7_2 << " " << ws3_7_3 << " " << ws3_7_4 << " " << ws3_7_5 << " " << ws3_7_6 << " " << ws3_7_7 << " " << ws3_7_8 << " " << ws3_7_9 << " " << ws3_7_10 << " " << endl;
			cout << ws3_8_1 << " " << ws3_8_2 << " " << ws3_8_3 << " " << ws3_8_4 << " " << ws3_8_5 << " " << ws3_8_6 << " " << ws3_8_7 << " " << ws3_8_8 << " " << ws3_8_9 << " " << ws3_8_10 << " " << endl;
			cout << ws3_9_1 << " " << ws3_9_2 << " " << ws3_9_3 << " " << ws3_9_4 << " " << ws3_9_5 << " " << ws3_9_6 << " " << ws3_9_7 << " " << ws3_9_8 << " " << ws3_9_9 << " " << ws3_9_10 << " " << endl;
			cout << ws3_10_1 << " " << ws3_10_2 << " " << ws3_10_3 << " " << ws3_10_4 << " " << ws3_10_5 << " " << ws3_10_6 << " " << ws3_10_7 << " " << ws3_10_8 << " " << ws3_10_9 << " " << ws3_10_10 << " " << endl;
			cout << ws3_11_1 << " " << ws3_11_2 << " " << ws3_11_3 << " " << ws3_11_4 << " " << ws3_11_5 << " " << ws3_11_6 << " " << ws3_11_7 << " " << ws3_11_8 << " " << ws3_11_9 << " " << ws3_11_10 << " " << endl;
			cout << ws3_12_1 << " " << ws3_12_2 << " " << ws3_12_3 << " " << ws3_12_4 << " " << ws3_12_5 << " " << ws3_12_6 << " " << ws3_12_7 << " " << ws3_12_8 << " " << ws3_12_9 << " " << ws3_12_10 << " " << endl;
			cout << ws3_13_1 << " " << ws3_13_2 << " " << ws3_13_3 << " " << ws3_13_4 << " " << ws3_13_5 << " " << ws3_13_6 << " " << ws3_13_7 << " " << ws3_13_8 << " " << ws3_13_9 << " " << ws3_13_10 << " " << endl;
			cout << ws3_14_1 << " " << ws3_14_2 << " " << ws3_14_3 << " " << ws3_14_4 << " " << ws3_14_5 << " " << ws3_14_6 << " " << ws3_14_7 << " " << ws3_14_8 << " " << ws3_14_9 << " " << ws3_14_10 << " " << endl;

		}
		do_correct();
		
		if (ney1_1) {
			//cout << "Astralis: " << neyr3_1 << " power points." << endl;
			cout << "Chance of win Astralis " << ney4_1 / sum_com() * 100 << endl << endl;
		}
		if (ney1_2) {
			//cout << "Gambit: " << neyr3_2 << "power points." << endl;
			cout << "Chance of win Gambit " << ney4_2 / sum_com() * 100 << endl << endl;
		}
		if (ney1_3) {
			//cout << "Na`vi: " << neyr3_3 << " power points." << endl;
			cout << "Chance of win Na`vi " << ney4_3 / sum_com() * 100 << endl << endl;
		}
		if (ney1_4) {
			//cout << "Heroic: " << neyr3_4 << " power points." << endl;
			cout << "Chance of win Heroic" << ney4_4 / sum_com() * 100 << endl << endl;
		}
		if (ney1_5) {
			//cout << "Virtus.pro: " << neyr3_5 << " power points." << endl;
			cout << "Chance of win Virtus.pro " << ney4_5 / sum_com() * 100 << endl << endl;
		}
		if (ney1_6) {
			//cout << "Vitality: " << neyr3_6 << " power points." << endl;
			cout << "Chance of win Vitality " << ney4_6 / sum_com() * 100 << endl << endl;
		}
		if (ney1_7) {
			//cout << "Liquid: " << neyr3_7  << " power points." << endl;
			cout << "Chance of win Liquid " << ney4_7 / sum_com() * 100 << endl << endl;
		}
		if (ney1_8) {
			//cout << "Spirit: " << neyr3_8  << " power points." << endl;
			cout << "Chance of win Spirit " << ney4_8 / sum_com() * 100 << endl << endl;
		}
		if (ney1_9) {
			//cout << "fnatic: " << neyr3_9  <<" power points." << endl;
			cout << "Chance of win fnatic " << ney4_9 / sum_com() * 100 << endl << endl;
		}
		if (ney1_10) {
			//cout << "NIP: " << neyr3_10  << " power points." << endl;
			cout << "Chance of win NIP " << ney4_10 / sum_com() * 100 << endl << endl;
		}
		if (ney1_11) {
			//cout << "mousesports: " << neyr3_11  << " power points." << endl;
			cout << "Chance of win mousesports " << ney4_11 / sum_com() * 100 << endl << endl;
		}
		if (ney1_12) {
			//cout << "Furia: " << neyr3_12 << " power points." << endl;
			cout << "Chance of win Furia " << ney4_12 / sum_com() * 100 << endl << endl;
		}
		if (ney1_13) {
			//cout << "Complexity: " << neyr3_13  << " power points." << endl;
			cout << "Chance of win Complexity " << ney4_13 / sum_com() * 100 << endl << endl;
		}
		if (ney1_14) {
			//cout << "Faze: " << neyr3_14  << " power points." << endl;
			cout << "Chance of win Faze " << ney4_14 / sum_com() * 100 << endl << endl;
		}
		if (ney1_15) {

		}
		if (ney1_16) {

		}
		if (ney1_17) {

		}
		if (ney1_18) {

		}
		if (ney1_19) {

		}
		if (ney1_20) {

		}
		is_autostart = 0;
		is_learning_complete = 1;
		again:
		goto main_menu;
	}
	end:
		cout << "Press any key to continue" << endl;
		_getch();
return 0;
}
