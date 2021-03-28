///////////////////
//	   Maded	 //
//		by		 //
//				 //
// @viiiiiiiitya //
// @HaceR tg	 //
//				 // 
//				 //
///////////////////
long license_value = -1;
int days;
float chance_win;
int again;
int stadium_number;
int debb;
/*string main_langulange[] = {
	"Your CPU have","cores.Need 4 or more cores","CPU cores: ","Hello! Write command what you whant to do. To help write !help","To start write !start","To open settings write !settings","To change languange write !lang","To close settings write !exit","Programe is learning. Please wait","Write number of first command","Write number of second command","Write number of command, whitch play home","Number of winning command: "
};
string english_langulange[] = {
	"Your CPU have","cores.Need 4 or more cores","CPU cores: ","Hello! Write command what you whant to do. To help write !help","To start write !start","To open settings write !settings","To change languange write !lang","To close settings write !exit","Programe is learning. Please wait","Write number of first command","Write number of second command","Write number of command, whitch play home","Number of winning command: "
};
string russian_langulange[] = {
	"У твоего CPU","ядер. Надо минимум 4","Ядер процесора: ","Здраствуй! Введи что ты хочешь делать. Для помощи напиши !help","Для начала напишите !start","Для открытия настроек напиши !settings","Для выбора языка нипиши !lang","Чтобы закрыть настройки напиши !exit","Програма учится, подождите","Напиши номер первой команды","Напиши номер второй команды","Напиши номер команды, которая и грает дома","Номер команды, которая выиграла"
};*/

//База данних
/* Alpha-Testing Data-Base
int results_correct[] = {//Результати
	1 , 0 , 2 , 4 , 0 ,10 , 6 , 4 ,11 , 6 , 8 , 3 , 5 , 7 , 0 , 9 , 5 , 6 , 0 ,11 , 2 , 0 , 6 , 0 , 9 , 2 , 0 , 1 , 0 , 1 , 0 , 7 , 7 , 3 , 6 ,11 , 0 , 3 , 4 , 4 , 0 , 8 , 1 ,12 , 8 ,13 , 4 , 7 ,13 , 9 , 9 , 0 ,14 , 0 , 0 , 6 , 9 ,14 , 0 ,11 ,10 ,10 , 0 ,10
};
int command_correct1[] = { //Команда 1 Ювентус
	1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 
};
int command_correct2[] = { //Команда 2 Реал Мадрид
	0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct3[] = { //Команда 3 Барселона
	1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct4[] = { //Команда 4 Манчестер Юнайтед
	0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0
};
int command_correct5[] = { //Команда 5 Арсенал
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct6[] = { //Команда 6 Баварія
	0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct7[] = { //Команда 7 Ліверпуль
	0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct8[] = { //Команда 8 Боусія Д
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct9[] = { //Команда 9 Манчестер Сіті
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 0 , 1 , 0 , 0 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1
};
int command_correct10[] = { //Команда 10 Челсі
	0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 0 , 1
};
int command_correct11[] = { //Команда 11 Мілан
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 0 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct12[] = {//Команда 12 Байєр
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
};
int command_correct13[] = {//Команда 13 Лестер Сіті
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
};
int command_correct14[] = {//Команда 14 Тоттенгем
	0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0
};*/
int results_correct[] = {
	14, 1 , 1 , 1 , 11 , 6 , 0 , 0 , 9 , 2 , 9 , 10, 0 , 3
};
int first_command_correct[] = {
	1 , 1 , 1 , 12, 11 , 2 , 2 , 2 , 9 , 2 , 2 , 3 , 8 , 8
};
int second_command_correct[] = {
	14, 12, 11 , 1 , 1 , 6 , 5 , 3 , 2 , 3 , 9 , 10, 3 , 3
};
int stadiumn_correct[] = {
	1 , 1 , 1 , 1 , 11 , 6 , 2 , 3 , 2 , 2 , 9 , 3 , 8 , 3
};
/* -------------Future updates
int first_command_result_correct[] = {
	2 , 3 , 1 , 0 , 11, 1 , 2 , 2 , 0 , 2 , 1 , 1 , 0 , 1
};
int second_command_result_correct[] = {
	3 , 0 , 0 , 2 , 1 , 3 , 2 , 1 , 0 , 0 , 2 , 2 , 0 , 3
};*/

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
	//12 Байєр
	//13 Лестер Сіті
	//14 Тоттенгем
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
#include <thread>
#include <fstream>
#include <Windows.h>
#include<Psapi.h>
#include <intrin.h>
using namespace std;

int correct;
int st;
int real_correct;
int times_correct;
string com;
//Нова механіка вибору команд
int command_choose1;
int command_choose2;
//Змінні для зберігання данних нейронів
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
int ney2_1;
int ney2_2;
int ney2_3;
int ney2_4;
int ney2_5;

int ney3_1;
int ney3_2;
int ney3_3;
int ney3_4;
int ney3_5;
int ney3_6;
int ney3_7;
int ney3_8;
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

double wf1; double w1_1; double w1_2; double w1_3; double w1_4; double w1_5; double w1_6; double w1_7; double w1_8; double w1_9; double w1_10; double w1_11; double w1_12; double w1_13; double w1_14;
double wf2; double w2_1; double w2_2; double w2_3; double w2_4; double w2_5; double w2_6; double w2_7; double w2_8; double w2_9; double w2_10; double w2_11; double w2_12; double w2_13; double w2_14;
double wf3; double w3_1; double w3_2; double w3_3; double w3_4; double w3_5; double w3_6; double w3_7; double w3_8; double w3_9; double w3_10; double w3_11; double w3_12; double w3_13; double w3_14;
double wf4; double w4_1; double w4_2; double w4_3; double w4_4; double w4_5; double w4_6; double w4_7; double w4_8; double w4_9; double w4_10; double w4_11; double w4_12; double w4_13; double w4_14;
double wf5; double w5_1; double w5_2; double w5_3; double w5_4; double w5_5; double w5_6; double w5_7; double w5_8; double w5_9; double w5_10; double w5_11; double w5_12; double w5_13; double w5_14;

double w2_1_1; double w2_1_2; double w2_1_3; double w2_1_4; double w2_1_5;
double w2_2_1; double w2_2_2; double w2_2_3; double w2_2_4; double w2_2_5;
double w2_3_1; double w2_3_2; double w2_3_3; double w2_3_4; double w2_3_5;
double w2_4_1; double w2_4_2; double w2_4_3; double w2_4_4; double w2_4_5;
double w2_5_1; double w2_5_2; double w2_5_3; double w2_5_4; double w2_5_5;
double w2_6_1; double w2_6_2; double w2_6_3; double w2_6_4; double w2_6_5;
double w2_7_1; double w2_7_2; double w2_7_3; double w2_7_4; double w2_7_5;
double w2_8_1; double w2_8_2; double w2_8_3; double w2_8_4; double w2_8_5;

double w3_1_1; double w3_1_2; double w3_1_3; double w3_1_4; double w3_1_5; double w3_1_6; double w3_1_7; double w3_1_8;
double w3_2_1; double w3_2_2; double w3_2_3; double w3_2_4; double w3_2_5; double w3_2_6; double w3_2_7; double w3_2_8;
double w3_3_1; double w3_3_2; double w3_3_3; double w3_3_4; double w3_3_5; double w3_3_6; double w3_3_7; double w3_3_8;
double w3_4_1; double w3_4_2; double w3_4_3; double w3_4_4; double w3_4_5; double w3_4_6; double w3_4_7; double w3_4_8;
double w3_5_1; double w3_5_2; double w3_5_3; double w3_5_4; double w3_5_5; double w3_5_6; double w3_5_7; double w3_5_8;
double w3_6_1; double w3_6_2; double w3_6_3; double w3_6_4; double w3_6_5; double w3_6_6; double w3_6_7; double w3_6_8;
double w3_7_1; double w3_7_2; double w3_7_3; double w3_7_4; double w3_7_5; double w3_7_6; double w3_7_7; double w3_7_8;
double w3_8_1; double w3_8_2; double w3_8_3; double w3_8_4; double w3_8_5; double w3_8_6; double w3_8_7; double w3_8_8;
double w3_9_1; double w3_9_2; double w3_9_3; double w3_9_4; double w3_9_5; double w3_9_6; double w3_9_7; double w3_9_8;
double w3_10_1; double w3_10_2; double w3_10_3; double w3_10_4; double w3_10_5; double w3_10_6; double w3_10_7; double w3_10_8;
double w3_11_1; double w3_11_2; double w3_11_3; double w3_11_4; double w3_11_5; double w3_11_6; double w3_11_7; double w3_11_8;
double w3_12_1; double w3_12_2; double w3_12_3; double w3_12_4; double w3_12_5; double w3_12_6; double w3_12_7; double w3_12_8;
double w3_13_1; double w3_13_2; double w3_13_3; double w3_13_4; double w3_13_5; double w3_13_6; double w3_13_7; double w3_13_8;
double w3_14_1; double w3_14_2; double w3_14_3; double w3_14_4; double w3_14_5; double w3_14_6; double w3_14_7; double w3_14_8;
//Ініціалізація весов для збереження

double wsf1; double ws1_1; double ws1_2; double ws1_3; double ws1_4; double ws1_5; double ws1_6; double ws1_7; double ws1_8; double ws1_9; double ws1_10; double ws1_11; double ws1_12; double ws1_13; double ws1_14;
double wsf2; double ws2_1; double ws2_2; double ws2_3; double ws2_4; double ws2_5; double ws2_6; double ws2_7; double ws2_8; double ws2_9; double ws2_10; double ws2_11; double ws2_12; double ws2_13; double ws2_14;
double wsf3; double ws3_1; double ws3_2; double ws3_3; double ws3_4; double ws3_5; double ws3_6; double ws3_7; double ws3_8; double ws3_9; double ws3_10; double ws3_11; double ws3_12; double ws3_13; double ws3_14;
double wsf4; double ws4_1; double ws4_2; double ws4_3; double ws4_4; double ws4_5; double ws4_6; double ws4_7; double ws4_8; double ws4_9; double ws4_10; double ws4_11; double ws4_12; double ws4_13; double ws4_14;
double wsf5; double ws5_1; double ws5_2; double ws5_3; double ws5_4; double ws5_5; double ws5_6; double ws5_7; double ws5_8; double ws5_9; double ws5_10; double ws5_11; double ws5_12; double ws5_13; double ws5_14;

double ws2_1_1; double ws2_1_2; double ws2_1_3; double ws2_1_4; double ws2_1_5;
double ws2_2_1; double ws2_2_2; double ws2_2_3; double ws2_2_4; double ws2_2_5;
double ws2_3_1; double ws2_3_2; double ws2_3_3; double ws2_3_4; double ws2_3_5;
double ws2_4_1; double ws2_4_2; double ws2_4_3; double ws2_4_4; double ws2_4_5;
double ws2_5_1; double ws2_5_2; double ws2_5_3; double ws2_5_4; double ws2_5_5;
double ws2_6_1; double ws2_6_2; double ws2_6_3; double ws2_6_4; double ws2_6_5;
double ws2_7_1; double ws2_7_2; double ws2_7_3; double ws2_7_4; double ws2_7_5;
double ws2_8_1; double ws2_8_2; double ws2_8_3; double ws2_8_4; double ws2_8_5;

double ws3_1_1; double ws3_1_2; double ws3_1_3; double ws3_1_4; double ws3_1_5; double ws3_1_6; double ws3_1_7; double ws3_1_8;
double ws3_2_1; double ws3_2_2; double ws3_2_3; double ws3_2_4; double ws3_2_5; double ws3_2_6; double ws3_2_7; double ws3_2_8;
double ws3_3_1; double ws3_3_2; double ws3_3_3; double ws3_3_4; double ws3_3_5; double ws3_3_6; double ws3_3_7; double ws3_3_8;
double ws3_4_1; double ws3_4_2; double ws3_4_3; double ws3_4_4; double ws3_4_5; double ws3_4_6; double ws3_4_7; double ws3_4_8;
double ws3_5_1; double ws3_5_2; double ws3_5_3; double ws3_5_4; double ws3_5_5; double ws3_5_6; double ws3_5_7; double ws3_5_8;
double ws3_6_1; double ws3_6_2; double ws3_6_3; double ws3_6_4; double ws3_6_5; double ws3_6_6; double ws3_6_7; double ws3_6_8;
double ws3_7_1; double ws3_7_2; double ws3_7_3; double ws3_7_4; double ws3_7_5; double ws3_7_6; double ws3_7_7; double ws3_7_8;
double ws3_8_1; double ws3_8_2; double ws3_8_3; double ws3_8_4; double ws3_8_5; double ws3_8_6; double ws3_8_7; double ws3_8_8;
double ws3_9_1; double ws3_9_2; double ws3_9_3; double ws3_9_4; double ws3_9_5; double ws3_9_6; double ws3_9_7; double ws3_9_8;
double ws3_10_1; double ws3_10_2; double ws3_10_3; double ws3_10_4; double ws3_10_5; double ws3_10_6; double ws3_10_7; double ws3_10_8;
double ws3_11_1; double ws3_11_2; double ws3_11_3; double ws3_11_4; double ws3_11_5; double ws3_11_6; double ws3_11_7; double ws3_11_8;
double ws3_12_1; double ws3_12_2; double ws3_12_3; double ws3_12_4; double ws3_12_5; double ws3_12_6; double ws3_12_7; double ws3_12_8;
double ws3_13_1; double ws3_13_2; double ws3_13_3; double ws3_13_4; double ws3_13_5; double ws3_13_6; double ws3_13_7; double ws3_13_8;
double ws3_14_1; double ws3_14_2; double ws3_14_3; double ws3_14_4; double ws3_14_5; double ws3_14_6; double ws3_14_7; double ws3_14_8;

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

int* debug_arr = new int[1000];
int debug_arr_inf;
void debug_file(int debug_code, int debug_status) {
	ofstream fout("debug_log.txt");
	if (debug_code == 1) {
		debug_arr[debug_arr_inf] = 111;
		debug_arr_inf++;
		debug_arr[debug_arr_inf] = debug_status;
		debug_arr_inf++;
	}
	else if (debug_code == 2) {
		debug_arr[debug_arr_inf] = 211;
		debug_arr_inf++;
		debug_arr[debug_arr_inf] = debug_status;
		debug_arr_inf++;
	}
	else if (debug_code == 3) {
		debug_arr[debug_arr_inf] = 311;
		debug_arr_inf++;
		debug_arr[debug_arr_inf] = debug_status;
		debug_arr_inf++;
	}
	else if (debug_code == 4) {
		debug_arr[debug_arr_inf] = 411;
		debug_arr_inf++;
		debug_arr[debug_arr_inf] = debug_status;
		debug_arr_inf++;
	}
	else if (debug_code == 5) {
		debug_arr[debug_arr_inf] = 511;
		debug_arr_inf++;
		debug_arr[debug_arr_inf] = debug_status;
		debug_arr_inf++;
	}
	else {
		fout << debug_arr;
		fout.close();
	}
	
}

void neyro_start() {
/*	neyron2_1(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w1_1, w1_2, w1_3, w1_4, w1_5, w1_6, w1_7, w1_8, w1_9, w1_10, w1_11, w1_12, w1_13, w1_14);
	neyron2_2(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w2_1, w2_2, w2_3, w2_4, w2_5, w2_6, w2_7, w2_8, w2_9, w2_10, w2_11, w2_12, w2_13, w2_14);
	neyron2_3(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w3_1, w3_2, w3_3, w3_4, w3_5, w3_6, w3_7, w3_8, w3_9, w3_10, w3_11, w3_12, w3_13, w3_14);
	neyron2_4(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w4_1, w4_2, w4_3, w4_4, w4_5, w4_6, w4_7, w4_8, w4_9, w4_10, w4_11, w4_12, w4_13, w4_14);
	neyron2_5(ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w5_1, w5_2, w5_3, w5_4, w5_5, w5_6, w5_7, w5_8, w5_9, w5_10, w5_11, w5_12, w5_13, w5_14);
*/
	ney2_1 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w1_1, w1_2, w1_3, w1_4, w1_5, w1_6, w1_7, w1_8, w1_9, w1_10, w1_11, w1_12, w1_13, w1_14);
	ney2_2 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w2_1, w2_2, w2_3, w2_4, w2_5, w2_6, w2_7, w2_8, w2_9, w2_10, w2_11, w2_12, w2_13, w2_14);
	ney2_3 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w3_1, w3_2, w3_3, w3_4, w3_5, w3_6, w3_7, w3_8, w3_9, w3_10, w3_11, w3_12, w3_13, w3_14);
	ney2_4 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w4_1, w4_2, w4_3, w4_4, w4_5, w4_6, w4_7, w4_8, w4_9, w4_10, w4_11, w4_12, w4_13, w4_14);
	ney2_5 = neyron2(0, 0, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, w5_1, w5_2, w5_3, w5_4, w5_5, w5_6, w5_7, w5_8, w5_9, w5_10, w5_11, w5_12, w5_13, w5_14);
	
	ney3_1 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_1_1, w2_1_2, w2_1_3, w2_1_4, w2_1_5);
	ney3_2 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_2_1, w2_2_2, w2_2_3, w2_2_4, w2_2_5);
	ney3_3 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_3_1, w2_3_2, w2_3_3, w2_3_4, w2_3_5);
	ney3_4 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_4_1, w2_4_2, w2_4_3, w2_4_4, w2_4_5);
	ney3_5 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_5_1, w2_5_2, w2_5_3, w2_5_4, w2_5_5);
	ney3_6 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_6_1, w2_6_2, w2_6_3, w2_6_4, w2_6_5);
	ney3_7 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_7_1, w2_7_2, w2_7_3, w2_7_4, w2_7_5);
	ney3_8 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, w2_8_1, w2_8_2, w2_8_3, w2_8_4, w2_8_5);

	neyr3_1 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_1_1, w3_1_2, w3_1_3, w3_1_4, w3_1_5, w3_1_6, w3_1_7, w3_1_8);
	neyr3_2 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_2_1, w3_2_2, w3_2_3, w3_2_4, w3_2_5, w3_2_6, w3_2_7, w3_2_8);
	neyr3_3 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_3_1, w3_3_2, w3_3_3, w3_3_4, w3_3_5, w3_3_6, w3_3_7, w3_3_8);
	neyr3_4 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_4_1, w3_4_2, w3_4_3, w3_4_4, w3_4_5, w3_4_6, w3_4_7, w3_4_8);
	neyr3_5 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_5_1, w3_5_2, w3_5_3, w3_5_4, w3_5_5, w3_5_6, w3_5_7, w3_5_8);
	neyr3_6 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_6_1, w3_6_2, w3_6_3, w3_6_4, w3_6_5, w3_6_6, w3_6_7, w3_6_8);
	neyr3_7 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_7_1, w3_7_2, w3_7_3, w3_7_4, w3_7_5, w3_7_6, w3_7_7, w3_7_8);
	neyr3_8 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_8_1, w3_8_2, w3_8_3, w3_8_4, w3_8_5, w3_8_6, w3_8_7, w3_8_8);
	neyr3_9 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_9_1, w3_9_2, w3_9_3, w3_9_4, w3_9_5, w3_9_6, w3_9_7, w3_9_8);
	neyr3_10 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_10_1, w3_10_2, w3_10_3, w3_10_4, w3_10_5, w3_10_6, w3_10_7, w3_10_8);
	neyr3_11 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_11_1, w3_11_2, w3_11_3, w3_11_4, w3_11_5, w3_11_6, w3_11_7, w3_11_8);
	neyr3_12 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_12_1, w3_12_2, w3_12_3, w3_12_4, w3_12_5, w3_12_6, w3_12_7, w3_12_8);
	neyr3_13 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_13_1, w3_13_2, w3_13_3, w3_13_4, w3_13_5, w3_13_6, w3_13_7, w3_13_8);
	neyr3_14 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, w3_14_1, w3_14_2, w3_14_3, w3_14_4, w3_14_5, w3_14_6, w3_14_7, w3_14_8);

	/*neyron3_1(w2_1_1, w2_1_2, w2_1_3, w2_1_4, w2_1_5);
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
	neyr3_14 = neyron4_14(w3_14_1, w3_14_2, w3_14_3, w3_14_4, w3_14_5, w3_14_6, w3_14_7);*/
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
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran();
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran();
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran();
	wf4 = ran(); w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran(); w4_12 = ran(); w4_13 = ran(); w4_14 = ran();
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran();

	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran();
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran();

	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran();
}
void random1() {
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran();
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran();
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran();
	wf4 = ran(); w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran(); w4_12 = ran(); w4_13 = ran(); w4_14 = ran();
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran();
}
void random1_1() {
	wf1 = ran(); w1_1 = ran(); w1_2 = ran(); w1_3 = ran(); w1_4 = ran(); w1_5 = ran(); w1_6 = ran(); w1_7 = ran(); w1_8 = ran(); w1_9 = ran(); w1_10 = ran(); w1_11 = ran(); w1_12 = ran(); w1_13 = ran(); w1_14 = ran();
	wf2 = ran(); w2_1 = ran(); w2_2 = ran(); w2_3 = ran(); w2_4 = ran(); w2_5 = ran(); w2_6 = ran(); w2_7 = ran(); w2_8 = ran(); w2_9 = ran(); w2_10 = ran(); w2_11 = ran(); w2_12 = ran(); w2_13 = ran(); w2_14 = ran();
}
void random1_2() {
	wf3 = ran(); w3_1 = ran(); w3_2 = ran(); w3_3 = ran(); w3_4 = ran(); w3_5 = ran(); w3_6 = ran(); w3_7 = ran(); w3_8 = ran(); w3_9 = ran(); w3_10 = ran(); w3_11 = ran(); w3_12 = ran(); w3_13 = ran(); w3_14 = ran();
	wf4 = ran(); w4_1 = ran(); w4_2 = ran(); w4_3 = ran(); w4_4 = ran(); w4_5 = ran(); w4_6 = ran(); w4_7 = ran(); w4_8 = ran(); w4_9 = ran(); w4_10 = ran(); w4_11 = ran(); w4_12 = ran(); w4_13 = ran(); w4_14 = ran();
	wf5 = ran(); w5_1 = ran(); w5_2 = ran(); w5_3 = ran(); w5_4 = ran(); w5_5 = ran(); w5_6 = ran(); w5_7 = ran(); w5_8 = ran(); w5_9 = ran(); w5_10 = ran(); w5_11 = ran(); w5_12 = ran(); w5_13 = ran(); w5_14 = ran();
}
void random2() {
	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran();
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran();
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran();
}
void random2_1() {
	w2_1_1 = ran(); w2_1_2 = ran(); w2_1_3 = ran(); w2_1_4 = ran();  w2_1_5 = ran();
	w2_2_1 = ran(); w2_2_2 = ran(); w2_2_3 = ran(); w2_2_4 = ran();  w2_2_5 = ran();
	w2_3_1 = ran(); w2_3_2 = ran(); w2_3_3 = ran(); w2_3_4 = ran();  w2_3_5 = ran();
	w2_4_1 = ran(); w2_4_2 = ran(); w2_4_3 = ran(); w2_4_4 = ran();  w2_4_5 = ran();
}
void random2_2() {
	w2_5_1 = ran(); w2_5_2 = ran(); w2_5_3 = ran(); w2_5_4 = ran();  w2_5_5 = ran();
	w2_6_1 = ran(); w2_6_2 = ran(); w2_6_3 = ran(); w2_6_4 = ran();  w2_6_5 = ran();
	w2_7_1 = ran(); w2_7_2 = ran(); w2_7_3 = ran(); w2_7_4 = ran();  w2_7_5 = ran();
	w2_8_1 = ran(); w2_8_2 = ran(); w2_8_3 = ran(); w2_8_4 = ran();  w2_8_5 = ran();
}
void random3() {
	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran();
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran();
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran();

}
void random3_1() {
	w3_1_1 = ran(); w3_1_2 = ran(); w3_1_3 = ran(); w3_1_4 = ran(); w3_1_5 = ran(); w3_1_6 = ran(); w3_1_7 = ran(); w3_1_8 = ran();
	w3_2_1 = ran(); w3_2_2 = ran(); w3_2_3 = ran(); w3_2_4 = ran(); w3_2_5 = ran(); w3_2_6 = ran(); w3_2_7 = ran(); w3_2_8 = ran();
	w3_3_1 = ran(); w3_3_2 = ran(); w3_3_3 = ran(); w3_3_4 = ran(); w3_2_5 = ran(); w3_3_6 = ran(); w3_3_7 = ran(); w3_3_8 = ran();
	w3_4_1 = ran(); w3_4_2 = ran(); w3_4_3 = ran(); w3_4_4 = ran(); w3_4_5 = ran(); w3_4_6 = ran(); w3_4_7 = ran(); w3_4_8 = ran();
	w3_5_1 = ran(); w3_5_2 = ran(); w3_5_3 = ran(); w3_5_4 = ran(); w3_5_5 = ran(); w3_5_6 = ran(); w3_5_7 = ran(); w3_5_8 = ran();
}
void random3_2() {
	w3_6_1 = ran(); w3_6_2 = ran(); w3_6_3 = ran(); w3_6_4 = ran(); w3_6_5 = ran(); w3_6_6 = ran(); w3_6_7 = ran(); w3_6_8 = ran();
	w3_7_1 = ran(); w3_7_2 = ran(); w3_7_3 = ran(); w3_7_4 = ran(); w3_7_5 = ran(); w3_7_6 = ran(); w3_7_7 = ran(); w3_7_8 = ran();
	w3_8_1 = ran(); w3_8_2 = ran(); w3_8_3 = ran(); w3_8_4 = ran(); w3_8_5 = ran(); w3_8_6 = ran(); w3_8_7 = ran(); w3_8_8 = ran();
	w3_9_1 = ran(); w3_9_2 = ran(); w3_9_3 = ran(); w3_9_4 = ran(); w3_9_5 = ran(); w3_9_6 = ran(); w3_9_7 = ran(); w3_9_8 = ran();
	w3_10_1 = ran(); w3_10_2 = ran(); w3_10_3 = ran(); w3_10_4 = ran(); w3_10_5 = ran(); w3_10_6 = ran(); w3_10_7 = ran(); w3_10_8 = ran();
}
void random3_3() {
	w3_11_1 = ran(); w3_11_2 = ran(); w3_11_3 = ran(); w3_11_4 = ran(); w3_11_5 = ran(); w3_11_6 = ran(); w3_11_7 = ran(); w3_11_8 = ran();
	w3_12_1 = ran(); w3_12_2 = ran(); w3_12_3 = ran(); w3_12_4 = ran(); w3_12_5 = ran(); w3_12_6 = ran(); w3_12_7 = ran(); w3_12_8 = ran();
	w3_13_1 = ran(); w3_13_2 = ran(); w3_13_3 = ran(); w3_13_4 = ran(); w3_13_5 = ran(); w3_13_6 = ran(); w3_13_7 = ran(); w3_13_8 = ran();
	w3_14_1 = ran(); w3_14_2 = ran(); w3_14_3 = ran(); w3_14_4 = ran(); w3_14_5 = ran(); w3_14_6 = ran(); w3_14_7 = ran(); w3_14_8 = ran();
}
void save_first() {
	wsf1 = wf1; ws1_1 = w1_1; ws1_2 = w1_2; ws1_3 = w1_3; ws1_4 = w1_4; ws1_5 = w1_5; ws1_6 = w1_6; ws1_7 = w1_7; ws1_8 = w1_8; ws1_9 = w1_9; ws1_10 = w1_10; ws1_11 = w1_11; ws1_12 = w1_12; ws1_13 = w1_13; ws1_14 = w1_14;
	wsf2 = wf2; ws2_1 = w2_1; ws2_2 = w2_2; ws2_3 = w2_3; ws2_4 = w2_4; ws2_5 = w2_5; ws2_6 = w2_6; ws2_7 = w2_7; ws2_8 = w2_8; ws2_9 = w2_9; ws2_10 = w2_10; ws2_11 = w2_11; ws2_12 = w2_12; ws2_13 = w2_13; ws2_14 = w2_14;
	wsf3 = wf3; ws3_1 = w3_1; ws3_2 = w3_2; ws3_3 = w3_3; ws3_4 = w3_4; ws3_5 = w3_5; ws3_6 = w3_6; ws3_7 = w3_7; ws3_8 = w3_8; ws3_9 = w3_9; ws3_10 = w3_10; ws3_11 = w3_11; ws3_12 = w3_12; ws3_13 = w3_13; ws3_14 = w3_14;
	wsf4 = wf4; ws4_1 = w4_1; ws4_2 = w4_2; ws4_3 = w4_3; ws4_4 = w4_4; ws4_5 = w4_5; ws4_6 = w4_6; ws4_7 = w4_7; ws4_8 = w4_8; ws4_9 = w4_9; ws4_10 = w4_10; ws4_11 = w4_11; ws4_12 = w4_12; ws4_13 = w4_13; ws4_14 = w4_14;
	wsf5 = wf5; ws5_1 = w5_1; ws5_2 = w5_2; ws5_3 = w5_3; ws5_4 = w5_4; ws5_5 = w5_5; ws5_6 = w5_6; ws5_7 = w5_7; ws5_8 = w5_8; ws5_9 = w5_9; ws5_10 = w5_10; ws5_11 = w5_11; ws5_12 = w5_12; ws5_13 = w5_13; ws5_14 = w5_14;

	ws2_1_1 = w2_1_1; ws2_1_2 = w2_1_2; ws2_1_3 = w2_1_3; ws2_1_4 = w2_1_4; ws2_1_5 = w2_1_5;
	ws2_2_1 = w2_2_1; ws2_2_2 = w2_2_2; ws2_2_3 = w2_2_3; ws2_2_4 = w2_2_4; ws2_2_4 = w2_2_4;
	ws2_3_1 = w2_3_1; ws2_3_2 = w2_3_2; ws2_3_3 = w2_3_3; ws2_3_4 = w2_3_4; ws2_3_4 = w2_3_4;
	ws2_4_1 = w2_4_1; ws2_4_2 = w2_4_2; ws2_4_3 = w2_4_3; ws2_4_4 = w2_4_4; ws2_4_4 = w2_4_4;
	ws2_5_1 = w2_5_1; ws2_5_2 = w2_5_2; ws2_5_3 = w2_5_3; ws2_5_4 = w2_5_4; ws2_5_4 = w2_5_4;
	ws2_6_1 = w2_6_1; ws2_6_2 = w2_6_2; ws2_6_3 = w2_6_3; ws2_6_4 = w2_6_4; ws2_6_4 = w2_6_4;
	ws2_7_1 = w2_7_1; ws2_7_2 = w2_7_2; ws2_7_3 = w2_7_3; ws2_7_4 = w2_7_4; ws2_7_4 = w2_7_4;
	ws2_8_1 = w2_8_1; ws2_8_2 = w2_8_2; ws2_8_3 = w2_8_3; ws2_8_4 = w2_8_4; ws2_8_4 = w2_8_4;

	ws3_1_1 = w3_1_1; ws3_1_2 = w3_1_2; ws3_1_3 = w3_1_3; ws3_1_4 = w3_1_4; ws3_1_5 = w3_1_5; ws3_1_6 = w3_1_6; ws3_1_7 = w3_1_7; ws3_1_8 = w3_1_8;
	ws3_2_1 = w3_2_1; ws3_2_2 = w3_2_2; ws3_2_3 = w3_2_3; ws3_2_4 = w3_2_4; ws3_2_5 = w3_2_5; ws3_2_6 = w3_2_6; ws3_2_7 = w3_2_7; ws3_2_8 = w3_2_8;
	ws3_3_1 = w3_3_1; ws3_3_2 = w3_3_2; ws3_3_3 = w3_3_3; ws3_3_4 = w3_3_4; ws3_3_5 = w3_3_5; ws3_3_6 = w3_3_6; ws3_3_7 = w3_3_7; ws3_3_8 = w3_3_8;
	ws3_4_1 = w3_4_1; ws3_4_2 = w3_4_2; ws3_4_3 = w3_4_3; ws3_4_4 = w3_4_4; ws3_4_5 = w3_4_5; ws3_4_6 = w3_4_6; ws3_4_7 = w3_4_7; ws3_4_8 = w3_4_8;
	ws3_5_1 = w3_5_1; ws3_5_2 = w3_5_2; ws3_5_3 = w3_5_3; ws3_5_4 = w3_5_4; ws3_5_5 = w3_5_5; ws3_5_6 = w3_5_6; ws3_5_7 = w3_5_7; ws3_5_8 = w3_5_8;
	ws3_6_1 = w3_6_1; ws3_6_2 = w3_6_2; ws3_6_3 = w3_6_3; ws3_6_4 = w3_6_4; ws3_6_5 = w3_6_5; ws3_6_6 = w3_6_6; ws3_6_7 = w3_6_7; ws3_6_8 = w3_6_8;
	ws3_7_1 = w3_7_1; ws3_7_2 = w3_7_2; ws3_7_3 = w3_7_3; ws3_7_4 = w3_7_4; ws3_7_5 = w3_7_5; ws3_7_6 = w3_7_6; ws3_7_7 = w3_7_7; ws3_7_8 = w3_7_8;
	ws3_8_1 = w3_8_1; ws3_8_2 = w3_8_2; ws3_8_3 = w3_8_3; ws3_8_4 = w3_8_4; ws3_8_5 = w3_8_5; ws3_8_6 = w3_8_6; ws3_8_7 = w3_8_7; ws3_8_8 = w3_8_8;
	ws3_9_1 = w3_9_1; ws3_9_2 = w3_9_2; ws3_9_3 = w3_9_3; ws3_9_4 = w3_9_4; ws3_9_5 = w3_9_5; ws3_9_6 = w3_9_6; ws3_9_7 = w3_9_7; ws3_9_8 = w3_9_8;
	ws3_10_1 = w3_10_1; ws3_10_2 = w3_10_2; ws3_10_3 = w3_10_3; ws3_10_4 = w3_10_4; ws3_10_5 = w3_10_5; ws3_10_6 = w3_10_6; ws3_10_7 = w3_10_7; ws3_10_8 = w3_10_8;
	ws3_11_1 = w3_11_1; ws3_11_2 = w3_11_2; ws3_11_3 = w3_11_3; ws3_11_4 = w3_11_4; ws3_11_5 = w3_11_5; ws3_11_6 = w3_11_6; ws3_11_7 = w3_11_7; ws3_11_8 = w3_11_8;
	ws3_12_1 = w3_12_1; ws3_12_2 = w3_12_2; ws3_12_3 = w3_12_3; ws3_12_4 = w3_12_4; ws3_12_5 = w3_12_5; ws3_12_6 = w3_12_6; ws3_12_7 = w3_12_7; ws3_12_8 = w3_12_8;
	ws3_13_1 = w3_13_1; ws3_13_2 = w3_13_2; ws3_13_3 = w3_13_3; ws3_13_4 = w3_13_4; ws3_13_5 = w3_13_5; ws3_13_6 = w3_13_6; ws3_13_7 = w3_13_7; ws3_13_8 = w3_13_8;
	ws3_14_1 = w3_14_1; ws3_14_2 = w3_14_2; ws3_14_3 = w3_14_3; ws3_14_4 = w3_14_4; ws3_14_5 = w3_14_5; ws3_14_6 = w3_14_6; ws3_14_7 = w3_14_7; ws3_14_8 = w3_14_8;
}
void save1() {
	wsf1 = arifmetic(wf1, wsf1); ws1_1 = arifmetic(ws1_1, w1_1); ws1_2 = arifmetic(ws1_2, w1_2); ws1_3 = arifmetic(ws1_3, w1_3); ws1_4 = arifmetic(ws1_4, w1_4); ws1_5 = arifmetic(ws1_5, w1_5); ws1_6 = arifmetic(ws1_6, w1_6); ws1_7 = arifmetic(ws1_7, w1_7); ws1_8 = arifmetic(ws1_8, w1_8); ws1_9 = arifmetic(ws1_9, w1_9); ws1_10 = arifmetic(ws1_10, w1_10); ws1_11 = arifmetic(ws1_11, w1_11); ws1_12 = arifmetic(ws1_12, w1_12); ws1_13 = arifmetic(ws1_13, w1_13); ws1_14 = arifmetic(ws1_14, w1_14);
	wsf2 = arifmetic(wf2, wsf2); ws2_1 = arifmetic(ws2_1, w2_1); ws2_2 = arifmetic(ws2_2, w2_2); ws2_3 = arifmetic(ws2_3, w2_3); ws2_4 = arifmetic(ws2_4, w2_4); ws2_5 = arifmetic(ws2_5, w2_5); ws2_6 = arifmetic(ws2_6, w2_6); ws2_7 = arifmetic(ws2_7, w2_7); ws2_8 = arifmetic(ws2_8, w2_8); ws2_9 = arifmetic(ws2_9, w2_9); ws2_10 = arifmetic(ws2_10, w2_10); ws2_11 = arifmetic(ws2_11, w2_11); ws2_12 = arifmetic(ws2_12, w2_12); ws2_13 = arifmetic(ws2_13, w2_13); ws2_14 = arifmetic(ws2_14, w2_14);
	wsf3 = arifmetic(wf3, wsf3); ws3_1 = arifmetic(ws3_1, w3_1); ws2_2 = arifmetic(ws3_2, w3_2); ws3_3 = arifmetic(ws3_3, w3_3); ws3_4 = arifmetic(ws3_4, w3_4); ws3_5 = arifmetic(ws3_5, w3_5); ws3_6 = arifmetic(ws3_6, w3_6); ws3_7 = arifmetic(ws3_7, w3_7); ws3_8 = arifmetic(ws3_8, w3_8); ws3_9 = arifmetic(ws3_9, w3_9); ws3_10 = arifmetic(ws3_10, w3_10); ws3_11 = arifmetic(ws3_11, w3_11); ws3_12 = arifmetic(ws3_12, w3_12); ws3_13 = arifmetic(ws3_13, w3_13); ws3_14 = arifmetic(ws3_14, w3_14);
	wsf4 = arifmetic(wf4, wsf4); ws4_1 = arifmetic(ws4_1, w4_1); ws4_2 = arifmetic(ws4_2, w4_2); ws4_3 = arifmetic(ws4_3, w4_3); ws4_4 = arifmetic(ws4_4, w4_4); ws4_5 = arifmetic(ws4_5, w4_5); ws4_6 = arifmetic(ws4_6, w4_6); ws4_7 = arifmetic(ws4_7, w4_7); ws4_8 = arifmetic(ws4_8, w4_8); ws4_9 = arifmetic(ws4_9, w4_9); ws4_10 = arifmetic(ws4_10, w4_10); ws4_11 = arifmetic(ws4_11, w4_11); ws4_12 = arifmetic(ws4_12, w4_12); ws4_13 = arifmetic(ws4_13, w4_13); ws4_14 = arifmetic(ws4_14, w4_14);
	wsf5 = arifmetic(wf5, wsf5); ws5_1 = arifmetic(ws5_1, w5_1); ws5_2 = arifmetic(ws5_2, w5_2); ws5_3 = arifmetic(ws5_3, w5_3); ws5_4 = arifmetic(ws5_4, w5_4); ws5_5 = arifmetic(ws5_5, w5_5); ws5_6 = arifmetic(ws5_6, w5_6); ws5_7 = arifmetic(ws5_7, w5_7); ws5_8 = arifmetic(ws5_8, w5_8); ws5_9 = arifmetic(ws5_9, w5_9); ws5_10 = arifmetic(ws5_10, w5_10); ws5_11 = arifmetic(ws5_11, w5_11); ws5_12 = arifmetic(ws5_12, w5_12); ws5_13 = arifmetic(ws5_13, w5_13); ws5_14 = arifmetic(ws5_14, w5_14);
}
void save2() {
	ws2_1_1 = arifmetic(ws2_1_1, w2_1_1); ws2_1_2 = arifmetic(ws2_1_2, w2_1_2); ws2_1_3 = arifmetic(ws2_1_3, w2_1_3); ws2_1_4 = arifmetic(ws2_1_4, w2_1_4); ws2_1_5 = arifmetic(ws2_1_5, w2_1_5);
	ws2_2_1 = arifmetic(ws2_2_1, w2_2_1); ws2_2_2 = arifmetic(ws2_2_2, w2_2_2); ws2_2_3 = arifmetic(ws2_2_3, w2_2_3); ws2_2_4 = arifmetic(ws2_2_4, w2_2_4); ws2_2_5 = arifmetic(ws2_2_5, w2_2_5);
	ws2_3_1 = arifmetic(ws2_3_1, w2_3_1); ws2_3_2 = arifmetic(ws2_3_2, w2_3_2); ws2_3_3 = arifmetic(ws2_3_3, w2_3_3); ws2_3_4 = arifmetic(ws2_3_4, w2_3_4); ws2_3_5 = arifmetic(ws2_3_5, w2_3_5);
	ws2_4_1 = arifmetic(ws2_4_1, w2_4_1); ws2_4_2 = arifmetic(ws2_4_2, w2_4_2); ws2_4_3 = arifmetic(ws2_4_3, w2_4_3); ws2_4_4 = arifmetic(ws2_4_4, w2_4_4); ws2_4_5 = arifmetic(ws2_4_5, w2_4_5);
	ws2_5_1 = arifmetic(ws2_5_1, w2_5_1); ws2_5_2 = arifmetic(ws2_5_2, w2_5_2); ws2_5_3 = arifmetic(ws2_5_3, w2_5_3); ws2_5_4 = arifmetic(ws2_5_4, w2_5_4); ws2_5_5 = arifmetic(ws2_5_5, w2_5_5);
	ws2_6_1 = arifmetic(ws2_6_1, w2_6_1); ws2_6_2 = arifmetic(ws2_6_2, w2_6_2); ws2_6_3 = arifmetic(ws2_6_3, w2_6_3); ws2_6_4 = arifmetic(ws2_6_4, w2_6_4); ws2_6_5 = arifmetic(ws2_6_5, w2_6_5);
	ws2_7_1 = arifmetic(ws2_7_1, w2_7_1); ws2_7_2 = arifmetic(ws2_7_2, w2_7_2); ws2_7_3 = arifmetic(ws2_7_3, w2_7_3); ws2_7_4 = arifmetic(ws2_7_4, w2_7_4); ws2_7_5 = arifmetic(ws2_7_5, w2_7_5);
	ws2_8_1 = arifmetic(ws2_8_1, w2_8_1); ws2_8_2 = arifmetic(ws2_8_2, w2_8_2); ws2_8_3 = arifmetic(ws2_8_3, w2_8_3); ws2_8_4 = arifmetic(ws2_8_4, w2_8_4); ws2_8_5 = arifmetic(ws2_8_5, w2_8_5);
}

void save3() {
	ws3_1_1 = arifmetic(ws3_1_1, w3_1_1); ws3_1_2 = arifmetic(ws3_1_2, w3_1_2); ws3_1_3 = arifmetic(ws3_1_3, w3_1_3); ws3_1_4 = arifmetic(ws3_1_4, w3_1_4); ws3_1_5 = arifmetic(ws3_1_5, w3_1_5); ws3_1_6 = arifmetic(ws3_1_6, w3_1_6); ws3_1_7 = arifmetic(ws3_1_7, w3_1_7); ws3_1_7 = arifmetic(ws3_1_8, w3_1_8);
	ws3_2_1 = arifmetic(ws3_2_1, w3_2_1); ws3_2_2 = arifmetic(ws3_2_2, w3_2_2); ws3_2_3 = arifmetic(ws3_2_3, w3_2_3); ws3_2_4 = arifmetic(ws3_2_4, w3_2_4); ws3_2_5 = arifmetic(ws3_2_5, w3_2_5); ws3_2_6 = arifmetic(ws3_2_6, w3_2_6); ws3_2_7 = arifmetic(ws3_2_7, w3_2_7); ws3_2_7 = arifmetic(ws3_2_8, w3_2_8);
	ws3_3_1 = arifmetic(ws3_3_1, w3_3_1); ws3_3_2 = arifmetic(ws3_3_2, w3_3_2); ws3_3_3 = arifmetic(ws3_3_3, w3_3_3); ws3_3_4 = arifmetic(ws3_3_4, w3_3_4); ws3_3_5 = arifmetic(ws3_3_5, w3_3_5); ws3_3_6 = arifmetic(ws3_3_6, w3_3_6); ws3_3_7 = arifmetic(ws3_3_7, w3_3_7); ws3_3_7 = arifmetic(ws3_3_8, w3_3_8);
	ws3_4_1 = arifmetic(ws3_4_1, w3_4_1); ws3_4_2 = arifmetic(ws3_4_2, w3_4_2); ws3_4_3 = arifmetic(ws3_4_3, w3_4_3); ws3_4_4 = arifmetic(ws3_4_4, w3_4_4); ws3_4_5 = arifmetic(ws3_4_5, w3_4_5); ws3_4_6 = arifmetic(ws3_4_6, w3_4_6); ws3_4_7 = arifmetic(ws3_4_7, w3_4_7); ws3_4_7 = arifmetic(ws3_4_8, w3_4_8);
	ws3_5_1 = arifmetic(ws3_5_1, w3_5_1); ws3_5_2 = arifmetic(ws3_5_2, w3_5_2); ws3_5_3 = arifmetic(ws3_5_3, w3_5_3); ws3_5_4 = arifmetic(ws3_5_4, w3_5_4); ws3_5_5 = arifmetic(ws3_5_5, w3_5_5); ws3_5_6 = arifmetic(ws3_5_6, w3_5_6); ws3_5_7 = arifmetic(ws3_5_7, w3_5_7); ws3_5_7 = arifmetic(ws3_5_8, w3_5_8);
	ws3_6_1 = arifmetic(ws3_6_1, w3_6_1); ws3_6_2 = arifmetic(ws3_6_2, w3_6_2); ws3_6_3 = arifmetic(ws3_6_3, w3_6_3); ws3_6_4 = arifmetic(ws3_6_4, w3_6_4); ws3_6_5 = arifmetic(ws3_6_5, w3_6_5); ws3_6_6 = arifmetic(ws3_6_6, w3_6_6); ws3_6_7 = arifmetic(ws3_6_7, w3_6_7); ws3_6_7 = arifmetic(ws3_6_8, w3_6_8);
	ws3_7_1 = arifmetic(ws3_7_1, w3_7_1); ws3_7_2 = arifmetic(ws3_7_2, w3_7_2); ws3_7_3 = arifmetic(ws3_7_3, w3_7_3); ws3_7_4 = arifmetic(ws3_7_4, w3_7_4); ws3_7_5 = arifmetic(ws3_7_5, w3_7_5); ws3_7_6 = arifmetic(ws3_7_6, w3_7_6); ws3_7_7 = arifmetic(ws3_7_7, w3_7_7); ws3_7_7 = arifmetic(ws3_7_8, w3_7_8);
	ws3_8_1 = arifmetic(ws3_8_1, w3_8_1); ws3_8_2 = arifmetic(ws3_8_2, w3_8_2); ws3_8_3 = arifmetic(ws3_8_3, w3_8_3); ws3_8_4 = arifmetic(ws3_8_4, w3_8_4); ws3_8_5 = arifmetic(ws3_8_5, w3_8_5); ws3_8_6 = arifmetic(ws3_8_6, w3_8_6); ws3_8_7 = arifmetic(ws3_8_7, w3_8_7); ws3_8_7 = arifmetic(ws3_8_8, w3_8_8);
	ws3_9_1 = arifmetic(ws3_9_1, w3_9_1); ws3_9_2 = arifmetic(ws3_9_2, w3_9_2); ws3_9_3 = arifmetic(ws3_9_3, w3_9_3); ws3_9_4 = arifmetic(ws3_9_4, w3_9_4); ws3_9_5 = arifmetic(ws3_9_5, w3_9_5); ws3_9_6 = arifmetic(ws3_9_6, w3_9_6); ws3_9_7 = arifmetic(ws3_9_7, w3_9_7); ws3_9_7 = arifmetic(ws3_9_8, w3_9_8);
	ws3_10_1 = arifmetic(ws3_10_1, w3_10_1); ws3_10_2 = arifmetic(ws3_10_2, w3_10_2); ws3_10_3 = arifmetic(ws3_10_3, w3_10_3); ws3_10_4 = arifmetic(ws3_10_4, w3_10_4); ws3_10_5 = arifmetic(ws3_10_5, w3_10_5); ws3_10_6 = arifmetic(ws3_10_6, w3_10_6); ws3_10_7 = arifmetic(ws3_10_7, w3_10_7); ws3_10_7 = arifmetic(ws3_10_8, w3_10_8);
	ws3_11_1 = arifmetic(ws3_11_1, w3_11_1); ws3_11_2 = arifmetic(ws3_11_2, w3_11_2); ws3_11_3 = arifmetic(ws3_11_3, w3_11_3); ws3_11_4 = arifmetic(ws3_11_4, w3_11_4); ws3_11_5 = arifmetic(ws3_11_5, w3_11_5); ws3_11_6 = arifmetic(ws3_11_6, w3_11_6); ws3_11_7 = arifmetic(ws3_11_7, w3_11_7); ws3_11_7 = arifmetic(ws3_11_8, w3_11_8);
	ws3_12_1 = arifmetic(ws3_12_1, w3_12_1); ws3_12_2 = arifmetic(ws3_12_2, w3_12_2); ws3_12_3 = arifmetic(ws3_12_3, w3_12_3); ws3_12_4 = arifmetic(ws3_12_4, w3_12_4); ws3_12_5 = arifmetic(ws3_12_5, w3_12_5); ws3_12_6 = arifmetic(ws3_12_6, w3_12_6); ws3_12_7 = arifmetic(ws3_12_7, w3_12_7); ws3_12_7 = arifmetic(ws3_12_8, w3_12_8);
	ws3_13_1 = arifmetic(ws3_13_1, w3_13_1); ws3_13_2 = arifmetic(ws3_13_2, w3_13_2); ws3_13_3 = arifmetic(ws3_13_3, w3_13_3); ws3_13_4 = arifmetic(ws3_13_4, w3_13_4); ws3_13_5 = arifmetic(ws3_13_5, w3_13_5); ws3_13_6 = arifmetic(ws3_13_6, w3_13_6); ws3_13_7 = arifmetic(ws3_13_7, w3_13_7); ws3_13_7 = arifmetic(ws3_13_8, w3_13_8);
	ws3_14_1 = arifmetic(ws3_14_1, w3_14_1); ws3_14_2 = arifmetic(ws3_14_2, w3_14_2); ws3_14_3 = arifmetic(ws3_14_3, w3_14_3); ws3_14_4 = arifmetic(ws3_14_4, w3_14_4); ws3_14_5 = arifmetic(ws3_14_5, w3_14_5); ws3_14_6 = arifmetic(ws3_14_6, w3_14_6); ws3_14_7 = arifmetic(ws3_14_7, w3_14_7); ws3_14_7 = arifmetic(ws3_14_8, w3_14_8);
}
void load_base() {
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
	stadiumn_choose = stadiumn_correct[st];
	
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
void stadium() {
	stadium_number = stadiumn_choose;
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
	}
}
int main(int argc, char* argv[]) {
	cout << ("***************************************") << endl;
	cout << ("****00000000****0********0***00000*****") << endl;
	cout << ("***00***********0*******00***0****0****") << endl;
	cout << ("****00**********0******000***0****00***") << endl;
	cout << ("*****00*********0*****00*0***0*****0***") << endl;
	cout << ("******0000******0****00**0***0*****0***") << endl;
	cout << ("*********00*****0***00***0***0****0****") << endl;
	cout << ("**********00****0**00****0***00000*****") << endl;
	cout << ("***********00***0*00*****0***0*********") << endl;
	cout << ("****00000000****000******0***0*********") << endl;
	cout << ("***************************************") << endl;
	cout << endl << endl;
	cout << ("######################################") << endl;
	cout << ("Stavki Na sPort Beta 1.0") << endl;
	cout << ("######################################") << endl;
	cout << ("Maded by HaceR") << endl;
	cout << endl;
	int cores_count = thread::hardware_concurrency(); //Узнаем к-во ядер
	string get_sys_info = GetCpuVendorString();
	cout << get_sys_info << endl;
	bool is_multipotok = 1;
	string multipotok;
	cout << endl << endl;
	cout << endl << endl;
	setlocale(LC_ALL, "rus");
	cout << ("Hello! Write command what you whant to do. To help write !help") << endl;
	main_menu:
	while (1) {

		cin >> com;
		if (com == "!help") {
			cout << ("To start write !start") << endl;
			cout << ("To open settings write !settings") << endl;
		}
		else if (com == "!settings") {
			while (1) {
				if (is_multipotok == 1) {
					multipotok = "On";
				}
				else {
					multipotok = "Off";
				}
				cin >> com;
				if (com == "!help") {
					//cout << ("To change languange write !lang") << endl;
					cout << ("To check info write !info") << endl;
					cout << ("To close settings write !exit") << endl;
				}
				else if (com == "!exit") {
					com == "";
					break;
				}
				else if (com == "!info") {
					cout << ("Cpu cores") << cores_count << endl;
				}
				else {
					cout << ("Unknown command ") << com << (". Write !help") << endl;
				}
			}
		}
		else if (com == "!start") {
			break;
		}
		else {
			cout << ("Unknown command ") << com << (". Write !help") << endl;
		}
	}
		if (cores_count < 4 && is_multipotok == 1) {
		cout << ("Your CPU have") << cores_count << ("cores. For working multithread must be at least 4 cores. Please turn off it in settings") << endl;
		goto main_menu;
	}
		else {
			cout << ("CPU cores: ") << cores_count << (" Multithread:")<< multipotok<<endl;
	}/*ofstream fout("data_base", ios_base::trunc);
	/*ifstream fin("data_base" , ios_base::in); // открыли файл для чтения
	fin >> lmasive;
	fin.close();*/
	//-----------------Ліцензія----------------------
		/*time_t seconds;
		seconds = time(NULL);
		days = seconds / 60 / 60 /24;
		license_value = 18629 + license_value;
		if (days >= license_value && license_value != -1) {
			cout<<("Please buy a new license")<<endl;
			/*cout << ("Full Edition 24.99$ per mouth: ") << endl;
			cout << ("Have big Data-Base, all updates is free") << endl << endl;
			cout << ("Medium Edition  14.99$ per mouth") << endl;
			cout << ("Have medium Data-Base, some updates are paid") << endl;
			cout << ("Updates are cost 0.99$ - 4.99$") << endl << endl;
			cout << ("Basic Edition 9.99$ per mouth") << endl;
			cout << ("Have small Data-Base, all updates are paid") << endl;
			cout << ("Updates are cost 0.99$ - 9.99$") << endl;*/
		/*}
		if (license_value != -1) {
			cout << ("You can use this programe: ") << license_value - days << (" days") << endl;
		}
		else {
			cout << ("You have unlimited license") << endl;
		}*/

		//-----------------Навчання----------------------

	cout << "Programe is learning. Please wait"<< endl << endl;
//#pragma omp parallel for
	for (int i = 0; i <= 2000; i++) {
		if (i % 50 == 0) {
			cout << i / 50 << endl;
		}
		if (is_multipotok == 1) {
			thread th(random1_1);
			thread th1(random1_2);
			thread th2(random2_1);
			thread th3(random2_2);
			thread th4(random3_1);
			thread th5(random3_2);
			thread th6(random3_3);
			thread th7(load_base);
			thread th8(stadium);
			th.join();
			th1.join();
			th2.join();
			th3.join();
			th4.join();
			th5.join();
			th6.join();
			th7.join();
			th8.join();
		}
		stadium();
		neyro_start();
		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
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
		st++;
	}
	times_correct = 0;
	allClear();
	//-----------------------------------------------------------Друга-Стадія-Навчання------------------------------------------------
	for (int d = 1; d < 40; d++) {
		if (d % 2 == 0) {
		cout << d / 2 + 40<< endl;
		}

		for (int a = 0; a < 200; a++) {
			load_base();
			if (is_multipotok == 1) {
				thread th(random3_1);
				thread th1(random3_2);
				thread th2(random3_3);
				th.join();
				th1.join();
				th2.join();
			}
			else {
				random3();
			}
			stadium();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save3();
			}
			st++;
		}
		for (int b = 0; b < 200; b++) {
			if (is_multipotok == 1) {
				thread th(random2_1);
				thread th3(random2_2);
				thread th1(load_base);
				thread th2(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
			}
			else {
				random2();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			st++;
		}
		for (int c = 0; c < 200; c++) {
			if (is_multipotok == 1) {
				thread th(random1_1);
				thread th2(random1_2);
				thread th1(load_base);
				stadium();
				th.join();
				th1.join();
				th2.join();
			}
			else {
				random1();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save1();
			}
			st++;
		}
	}
	//-----------------------------------------------------------Третя-Стадія-Навчання------------------------------------------------

	for (int c = 0; c < 5000; c++) {
		if (c % 250 == 0) {
			cout << c / 250 + 60 << endl;
		}
		if (is_multipotok == 1) {
			thread th(random1_1);
			thread th1(random1_2);
			thread th2(random2);
			thread th3(random3_1);
			thread th4(random3_2);
			thread th5(random3_3);
			thread th6(load_base);
			stadium();
			th.join();
			th1.join();
			th2.join();
			th3.join();
			th4.join();
			th5.join();
			th6.join();
		}
		else {
			allRandom();
			load_base();
			stadium();
		}
		neyro_start();
		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
		allClear();
		if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
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

	for (int d = 0; d < 20; d++) {
		cout << d + 80 << endl;
		for (int a = 0; a < 100; a++) {
			if (is_multipotok == 1) {
				thread th(random3_1);
				thread th1(random3_2);
				thread th2(random3_3);
				thread th3(load_base);
				th.join();
				th1.join();
				th2.join();
				th3.join();
			}
			else {
				random3();
				load_base();
			}
			stadium();
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			st++;
			if (correct == real_correct) {
				save3();
			}
		}
		for (int b = 0; b < 100; b++) {
			if (is_multipotok == 1) {
				thread th(random2_1);
				thread th1(random2_2);
				thread th2(load_base);
				thread th3(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
			}
			else {
				random2();
				load_base();
				stadium();
			}			
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
				st = 0;
			}
			if (correct == real_correct) {
				save2();
			}
			st++;
		}
		for (int c = 0; c < 100; c++) {
			if (is_multipotok == 1) {
				thread th(random1_1);
				thread th1(random1_2);
				thread th2(load_base);
				thread th3(stadium);
				th.join();
				th1.join();
				th2.join();
				th3.join();
			}
			else {
				random1();
				load_base();
				stadium();
			}
			neyro_start();
			do_correct();
			correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
			allClear();
			if (st >= sizeof(first_command_correct) / sizeof(first_command_correct[0])) {
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
	
	for (int i = 0; i > -1; i++) {
		/*cout << ("Debug? ");
		cin >> debb;*/
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
		cout << ("Write number of command, whitch play home") << endl;
		cin >> stadiumn_choose;
		if (stadiumn_choose != command_choose1 && stadiumn_choose != command_choose2 && stadiumn_choose != 0) {
			cout << "Error" << endl;
			continue;
		}
		stadium();
		if (debb == 1) {
			debug_file(1, command_choose1);
			debug_file(1, command_choose2);
			debug_file(1, stadiumn_choose);
		}

		if (command_choose1 == command_choose2 || command_choose1 > 14 || command_choose2 > 14 || command_choose1 < 1 || command_choose2 < 1) {
			cout << "error" << endl;
			continue;
		}
		choose_command();
		//------------------------------------------------------------------Нейрони--------------------------------------------------------
		ney2_1 = neyron2(0, wsf1, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws1_1, ws1_2, ws1_3, ws1_4, ws1_5, ws1_6, ws1_7, ws1_8, ws1_9, ws1_10, ws1_11, ws1_12, ws1_13, ws1_14);
		ney2_2 = neyron2(0, wsf2, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws2_1, ws2_2, ws2_3, ws2_4, ws2_5, ws2_6, ws2_7, ws2_8, ws2_9, ws2_10, ws2_11, ws2_12, ws2_13, ws2_14);
		ney2_3 = neyron2(0, wsf3, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws3_1, ws3_2, ws3_3, ws3_4, ws3_5, ws3_6, ws3_7, ws3_8, ws3_9, ws3_10, ws3_11, ws3_12, ws3_13, ws3_14);
		ney2_4 = neyron2(0, wsf4, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws4_1, ws4_2, ws4_3, ws4_4, ws4_5, ws4_6, ws4_7, ws4_8, ws4_9, ws4_10, ws4_11, ws4_12, ws4_13, ws4_14);
		ney2_5 = neyron2(0, wsf5, ney1_1, ney1_2, ney1_3, ney1_4, ney1_5, ney1_6, ney1_7, ney1_8, ney1_9, ney1_10, ney1_11, ney1_12, ney1_13, ney1_14, ws5_1, ws5_2, ws5_3, ws5_4, ws5_5, ws5_6, ws5_7, ws5_8, ws5_9, ws5_10, ws5_11, ws5_12, ws5_13, ws5_14);
		if (debb == 1) {
			debug_file(2, ney2_1);
			debug_file(2, ney2_2);
			debug_file(2, ney2_3);
			debug_file(2, ney2_4);
			debug_file(2, ney2_5);
		}


		ney3_1 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_1_1, ws2_1_2, ws2_1_3, ws2_1_4, ws2_1_5);
		ney3_2 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_2_1, ws2_2_2, ws2_2_3, ws2_2_4, ws2_2_5);
		ney3_3 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_3_1, ws2_3_2, ws2_3_3, ws2_3_4, ws2_3_5);
		ney3_4 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_4_1, ws2_4_2, ws2_4_3, ws2_4_4, ws2_4_5);
		ney3_5 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_5_1, ws2_5_2, ws2_5_3, ws2_5_4, ws2_5_5);
		ney3_6 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_6_1, ws2_6_2, ws2_6_3, ws2_6_4, ws2_6_5);
		ney3_7 = neyron3(ney2_1, ney2_2, ney2_3, ney2_4, ney2_5, ws2_7_1, ws2_7_2, ws2_7_3, ws2_7_4, ws2_7_5);
		if (debb == 1) {
			debug_file(3, ney3_1);
			debug_file(3, ney3_2);
			debug_file(3, ney3_3);
			debug_file(3, ney3_4);
			debug_file(3, ney3_5);
			debug_file(3, ney3_6);
			debug_file(3, ney3_7);
		}
		neyr3_1 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_1_1, ws3_1_2, ws3_1_3, ws3_1_4, ws3_1_5, ws3_1_6, ws3_1_7, ws3_1_8);
		neyr3_2 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_2_1, ws3_2_2, ws3_2_3, ws3_2_4, ws3_2_5, ws3_2_6, ws3_2_7, ws3_2_8);
		neyr3_3 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_3_1, ws3_3_2, ws3_3_3, ws3_3_4, ws3_3_5, ws3_3_6, ws3_3_7, ws3_3_8);
		neyr3_4 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_4_1, ws3_4_2, ws3_4_3, ws3_4_4, ws3_4_5, ws3_4_6, ws3_4_7, ws3_4_8);
		neyr3_5 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_5_1, ws3_5_2, ws3_5_3, ws3_5_4, ws3_5_5, ws3_5_6, ws3_5_7, ws3_5_8);
		neyr3_6 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_6_1, ws3_6_2, ws3_6_3, ws3_6_4, ws3_6_5, ws3_6_6, ws3_6_7, ws3_6_8);
		neyr3_7 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_7_1, ws3_7_2, ws3_7_3, ws3_7_4, ws3_7_5, ws3_7_6, ws3_7_7, ws3_7_8);
		neyr3_8 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_8_1, ws3_8_2, ws3_8_3, ws3_8_4, ws3_8_5, ws3_8_6, ws3_8_7, ws3_8_8);
		neyr3_9 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_9_1, ws3_9_2, ws3_9_3, ws3_9_4, ws3_9_5, ws3_9_6, ws3_9_7, ws3_9_8);
		neyr3_10 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_10_1, ws3_10_2, ws3_10_3, ws3_10_4, ws3_10_5, ws3_10_6, ws3_10_7, ws3_10_8);
		neyr3_11 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_11_1, ws3_11_2, ws3_11_3, ws3_11_4, ws3_11_5, ws3_11_6, ws3_11_7, ws3_11_8);
		neyr3_12 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_12_1, ws3_12_2, ws3_12_3, ws3_12_4, ws3_12_5, ws3_12_6, ws3_12_7, ws3_12_8);
		neyr3_13 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_13_1, ws3_13_2, ws3_13_3, ws3_13_4, ws3_13_5, ws3_13_6, ws3_13_7, ws3_13_8);
		neyr3_14 = neyron4(ney3_1, ney3_2, ney3_3, ney3_4, ney3_5, ney3_6, ney3_7, ney3_8, ws3_14_1, ws3_14_2, ws3_14_3, ws3_14_4, ws3_14_5, ws3_14_6, ws3_14_7, ws3_14_8);

		if (debb == 1) {
			debug_file(4, ney4_1);
			debug_file(4, ney4_2);
			debug_file(4, ney4_3);
			debug_file(4, ney4_4);
			debug_file(4, ney4_5);
			debug_file(4, ney4_6);
			debug_file(4, ney4_7);
			debug_file(4, ney4_8);
			debug_file(4, ney4_9);
			debug_file(4, ney4_10);
			debug_file(4, ney4_11);
			debug_file(4, ney4_12);
			debug_file(4, ney4_13);
			debug_file(4, ney4_14);
		}

		do_correct();
		correct = maximum(neyr3_1, neyr3_2, neyr3_3, neyr3_4, neyr3_5, neyr3_6, neyr3_7, neyr3_8, neyr3_9, neyr3_10, neyr3_11, neyr3_12, neyr3_13, neyr3_14);
		if (correct != 0) {
			cout << "Number of winning command: " << correct << endl;

		}
		if (debb == 1) {
			debug_file(5, correct);
		}
		//Кінцевий вивід
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
			cout << "Liverpoul: " << neyr3_7  << " power points." << endl;
			cout << "Chance of win Liverpoul " << neyr3_7 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_8) {
			cout << "Borussia D: " << neyr3_8  << " power points." << endl;
			cout << "Chance of win Borussia D " << neyr3_8 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_9) {
			cout << "Manchester City: " << neyr3_9  <<" power points." << endl;
			cout << "Chance of win Manchester City " << neyr3_9 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_10) {
			cout << "Chelsi: " << neyr3_10  << " power points." << endl;
			cout << "Chance of win Chelsi " << neyr3_10 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_11) {
			cout << "Milan: " << neyr3_11  << " power points." << endl;
			cout << "Chance of win Milan " << neyr3_11 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_12) {
			cout << "Bayer: " << neyr3_12 << " power points." << endl;
			cout << "Chance of win Bayer " << neyr3_12 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_13) {
			cout << "Lester: " << neyr3_13  << " power points." << endl;
			cout << "Chance of win Lester " << neyr3_13 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		if (ney1_14) {
			cout << "Tottenham: " << neyr3_14  << " power points." << endl;
			cout << "Chance of win Tottenham " << neyr3_14 / (neyr3_1 + neyr3_2 + neyr3_3 + neyr3_4 + neyr3_5 + neyr3_6 + neyr3_7 + neyr3_8 + neyr3_9 + neyr3_10 + neyr3_11 + neyr3_12 + neyr3_13 + neyr3_14) * 100 << endl << endl;
		}
		again:
		cout << ("Again") << endl;
		cin >> again;
		if (!again) {
			break;
		}
	}
	end:
		cout << "Press any key to continue" << endl;
		_getch();
		debug_file(6, 0);
return 0;
}