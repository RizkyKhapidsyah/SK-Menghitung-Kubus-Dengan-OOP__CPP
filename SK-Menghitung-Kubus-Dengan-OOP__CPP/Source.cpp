#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

#define pi 3.14

class BangunRuang {
public:
	double Luas, Volume, s, la, jst, ls, r, t;

	void Kubus() {
		cout << "=====================" << endl;
		cout << "LUAS DAN VOLUME KUBUS" << endl;
		cout << "=====================" << endl;
		cout << "Masukkan Nilai Sisi Kubus  : "; cin >> s;

		Luas = 6 * s * s;
		Volume = s * s * s;

		cout << "Luas Kubus    = " << Luas << endl;
		cout << "Volume Kubus  =" << Volume << endl << endl;
	}

	void Limas() {
		cout << "=====================" << endl;
		cout << "LUAS DAN VOLUME LIMAS" << endl;
		cout << "=====================" << endl;
		cout << "Input Luas Alas           : "; cin >> la;
		cout << " Input Jumlah Sisi Tegak  : "; cin >> jst;

		Luas = la * jst;
		Volume = 0.33 * jst;

		cout << "Luas Limas    = " << Luas << endl;
		cout << "Volume Limas  = " << Volume << endl << endl;
	}

	void Kerucut() {
		cout << "=======================" << endl;
		cout << "LUAS DAN VOLUME KERUCUT" << endl;
		cout << "=======================" << endl;
		cout << "Input Luas Alas       : "; cin >> la;
		cout << "Input Luas Selimut    : "; cin >> ls;
		cout << "Input Jari-Jari       : "; cin >> r;
		cout << "Input Tinggi Kerucut  : "; cin >> t;

		Luas = la * ls;
		Volume = 0.33 * pi * r * r * t;

		cout << "Luas Kerucut    = " << Luas << endl;
		cout << "Volume Kerucut  = " << Volume << endl << endl;
	}
};

int main() {
	int Pilihan;

atas:
	BangunRuang X;
	cout << "==============================" << endl;
	cout << "\t\tMAIN PROGRAM" << endl;
	cout << "==============================" << endl;
	cout << "Menu Pilihan :" << endl;
	cout << "1. Luas dan Volume Kubus" << endl;
	cout << "2. Luas dan Volume Limas" << endl;
	cout << "3. Luas dan Volume Kerucut" << endl;
	cout << "4. Exit Program " << endl << endl;
	
	cout << "Input Nomor Menu Pilihan = "; cin >> Pilihan;
	cout << endl;

	switch (Pilihan) {
	case 1: 
		X.Kubus();
		goto atas;
		break;
	case 2:
		X.Limas();
		goto atas;
		break;
	case 3:
		X.Kerucut();
		goto atas;
		break;
	case 4:
	exit:
		cout << "Anda Kembali ke Halaman Program" << endl;
		break;
	default:
		cout << "Anda salah input pilihan" << endl;
		goto atas;
	}

	_getch();
	return 0;
}