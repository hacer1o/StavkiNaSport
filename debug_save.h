#pragma once
#ifndef debug_save
#define debug_save
#include "stdafx.h"
#include <fstream>
using namespace std;
void debug_file (int debug_code, int debug_status) {
	ofstream fout("debug_log.bug");
	if (debug_code == 1) {
		fout << "������ �������" << debug_status << endl;
	}
	else if (debug_code == 2) {
		fout << "2 ����" << debug_status << endl;
	}
	else if (debug_code == 3) {
		fout << "3 ����" << debug_status << endl;
	}
	else if (debug_code == 4) {
		fout << "4 ����" << debug_status << endl;
	}
	else if (debug_code == 5) {
		fout << "����" << debug_status << endl;
	}
	fout.close();
}
#ednif