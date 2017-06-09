#pragma once

class Mux {
	//enum Bit{ZERO, ONE};
//	Bit m_in[4];
	bool m_in[4];
	bool m_out;
	bool m_adres[2];
	bool m_EN;
public:
	 void init(void);
	 void multiplex();
	 void showRes();
	//~Mux();
};
