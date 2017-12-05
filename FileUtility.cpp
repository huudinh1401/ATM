#include "FileUtility.h"
#include "string"
#include "iostream"
#include "windows.h"
#include "sstream"
#include "fstream"
#include "conio.h"
using namespace std;



void FileUtility::Nhap()
{
	stringstream ss;
	system("color B");
	int i = 0, k = 0;
	cout << "\n\t\t* * * * * * * * * * * * * * * * *";
	cout << "\n\n\t\t*\tDANG NHAP HE THONG\t*";
	cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
	while (k < 3)
	{
		
		char Pin = 0, xPin[15];
		fflush(stdin);
		cout << "\n\n\n\t\tID: "; fflush(stdin); getline(cin, m_cID);
		cout << "\n\t\tPin: ";

		while(1)
		{
			Pin = getch();
			if (Pin == 13)
			{
				break;
			}
			else 
			{
				xPin [i++]= Pin;
				cout << "*" ;
			}
		}
		xPin [i] = '\0';
		ss << xPin;
		ss >> m_cPass;

		
		if (m_cID.compare(m_cIdHT) == 0 && m_cPass.compare(m_cPassHT) == 0)
		{
			system("cls");
			cout << "\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\t*\tDANG NHAP HE THONG\t*";
			cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
			cout << endl << "\n\n\t\tDang nhap thanh cong!";
			Sleep(1000);
			break;
		}
		else
			{
				system("cls");
				cout << "\n\t\t* * * * * * * * * * * * * * * * *";
				cout << "\n\n\t\t*\tDANG NHAP HE THONG\t*";
				cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
				cout << endl << "\n\n\t\tMat khau sai!" << endl;
				k++;
			}
	} 
	if (k > 2 ) 
	{
		system("cls");
		cout << "\n\t\t* * * * * * * * * * * * * * * * *";
		cout << "\n\n\t\t*\tDANG NHAP HE THONG\t*";
		cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
		cout <<"\n\n\tNhap sai 3 lan, vui long thu lai sau!"<<endl;
		Sleep(1500);
		exit(1);
	}
}

void FileUtility::Doc()
{ 

	ifstream fis("TheTu.dat", ios::in);
	ifstream fix("ten.dat", ios::in);
	getline (fis, m_cIdHT, '#');
	fis >> m_cPassHT;
	getline (fix, m_cTen, ',');
	getline (fix, m_cChuoiTien, '#');
	fix >> m_cLoaiTien;
	fis.close();
	fix.close();
}




long FileUtility::getTien()
{
	return atoi (m_cChuoiTien.c_str());
}

FileUtility::FileUtility(void)
{
}


FileUtility::~FileUtility(void)
{
}
