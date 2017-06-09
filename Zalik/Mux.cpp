#include "stdafx.h"
#include <iostream>
#include "Mux.h"

using namespace std;

void Mux::init(void)
{
	cout << "IN_0:";
	cin >> m_in[0];
	cout << "IN_1:";
	cin >> m_in[1];
	cout << "IN_2:";
	cin >> m_in[2];
	cout << "IN_3:";
	cin >> m_in[3];

	cout << "Adres[0]:";
	cin >> m_adres[0];

	cout << "Adres[1]:";
	cin >> m_adres[1];

	cout << "EN:";
	cin >> m_EN;

}

void Mux::multiplex()
{
	if (m_EN) {
		switch (m_adres[0]*1 + m_adres[1]*2)
		{
			case 0: 
			{
				m_out = m_in[0];
				break;
			}
			case 1: 
			{
				m_out = m_in[1];
				break;
			}
			case 2: 
			{
				m_out = m_in[2];
				break;
			}
			case 3: 
			{
				m_out = m_in[3];
				break;
			}
		}
	}
	else {
		m_out = 0;
	}
}

void Mux::showRes()
{
	cout << "Out result:" << m_out << endl;
}