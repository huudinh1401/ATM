#include "iostream"
#include "fstream"
#include "string"
#include "UserTransaction.h"
#include "FileUtility.h"
#include "windows.h"

using namespace std;

void main()
{

	UserTransaction User;
	User.Doc();
	int nChon;
	User.Nhap();
	do
	{
		system("cls");
		cout << "\n\t\t* * * * * * * * * * * * * * * * *";
		cout << "\n\n\t\t*      \t    MENU    \t        *";
		cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
		cout << "\n\n\t\t1.Rut Tien";
		cout << "\n\t\t2.Chuyen Tien";
		cout << "\n\t\t3.Thoat";
		cout << "\n\t\tMoi Ban Chon: ";
		cin >> nChon;
		switch (nChon)
		{
		case 1:
			User.Rut();
			break;
		case 2:
			User.Chuyen();
			break;
		case 3:
			system("cls");
			cout << "\t\tHan Hanh Phuc Vu Quy Khach!";
			cout << "\n\t\tMoi Quy Khach Nhan Lai The!";
			Sleep(1500);
			exit(1);
		}
	} while (nChon > 0 && nChon < 3);
	
	cout << endl << endl;
	system ("pause");
}