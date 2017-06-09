// Zalik.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Mux.h"

using namespace std;

int main()
{
	Mux mux1;
	mux1.init();
	mux1.multiplex();
	mux1.showRes();


    return 0;
}

