#include "UserTransaction.h"
#include "string"
#include "iostream"
#include "windows.h"
#include "fstream"

using namespace std;

void UserTransaction::Nhap()
{
	File[0].Nhap();
	m_lSoDu = getTien();
}
void UserTransaction::Doc()
{
	File[0].Doc();
}
void UserTransaction::Rut()
{
	system("color F");
	system("cls");
	cout << "\n\t\t* * * * * * * * * * * * * * * * *";
	cout << "\n\n\t\t*      \t    RUT TIEN\t        *";
	cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
	cout << "\n\n\t\tNhap So Tien Can Rut: "; cin >> m_lRutTien;
	while ((m_lRutTien > m_lSoDu - 50000) || (m_lRutTien < 50000))
	{
		if (m_lRutTien > m_lSoDu)
		{
			cout << "\t\tSo Tien Vuot Qua So Du, Moi Nhap Lai!!";
			Sleep(1500);
			system("cls");
			cout << "\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\t*      \t    RUT TIEN\t        *";
			cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\tNhap So Tien Can Rut: "; cin >> m_lRutTien;
		}
		else 
		{
			cout << "\t\tVui Long Nhap So Tien Lon Hon 50000!!";
			Sleep(1500);
			system("cls");
			cout << "\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\t*      \t    RUT TIEN\t        *";
			cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\tNhap So Tien Can Rut: "; cin >> m_lRutTien;
		}
	}
	m_lSoDu = m_lSoDu - m_lRutTien;
	cout << "\n\t\tBan chon tiep tuc!!! ";
	cout << "\n\t\tBan Rut Thanh Cong " << m_lRutTien << " VND";
	cout << "\n\t\tSo Du Con Lai " << m_lSoDu << " VND";
	ofstream fo;
	fo.open("GiaoDich.dat", ios::app);
	fo << "\n\t\tBan chon tiep tuc!!! ";
	fo << "\n\t\tBan Rut Thanh Cong " << m_lRutTien << " VND";
	fo << "\n\t\tSo Du Con Lai " << m_lSoDu << " VND";
	fo.close();
	Sleep(1500);

	int nChon;
	do
	{
		cout << "\n\t\tBan muon tiep tuc chu???";
		cout << "\n\t\t1.Tiep Tuc";
		cout << "\n\t\t2.Thoat";
		cout << "\n\t\tMoi Ban Chon: ";
		cin >> nChon;
		switch (nChon)
		{
		case 1:

			break;
		case 2:
			cout << "\n\t\tBan chon thoat!!! ";
			break;
		}
	} while (nChon < 0 || nChon > 2);
}
void UserTransaction::Chuyen()
{
	system("color D");
	system("cls");
	cout << "\n\t\t* * * * * * * * * * * * * * * * *";
	cout << "\n\n\t\t*      \t CHUYEN TIEN\t        *";
	cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
	cout << "\n\n\t\tNhap So Tai Khoan Thu Huong: "; fflush(stdin);
	getline(cin, m_cTKCanChuyen);
	while (m_cTKCanChuyen.size() != 14)
	{
		system("cls");
		cout << "\n\t\t* * * * * * * * * * * * * * * * *";
		cout << "\n\n\t\t*      \t CHUYEN TIEN\t        *";
		cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
		cout << "\n\n\t\tSo Tai Khoan Sai. Nhap Lai: "; fflush(stdin);
		getline(cin, m_cTKCanChuyen);
	}
	cout << "\n\n\t\tNhap So Tien Can Chuyen: ";
	cin >> m_lTienChuyen;
	while ((m_lTienChuyen > m_lSoDu - 50000) || (m_lTienChuyen < 50000))
	{
		if (m_lTienChuyen > m_lSoDu)
		{
			cout << "\t\tSo Tien Vuot Qua So Du, Moi Nhap Lai!!";
			Sleep(1500);
			system("cls");
			cout << "\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\t*      \t CHUYEN TIEN\t        *";
			cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\tNhap So Tien Can Chuyen: "; cin >> m_lTienChuyen;
		}
		else 
		{
			cout << "\t\tVui Long Nhap So Tien Lon Hon 50000!!";
			Sleep(1500);
			system("cls");
			cout << "\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\t*      \t CHUYEN TIEN\t        *";
			cout << "\n\n\t\t* * * * * * * * * * * * * * * * *";
			cout << "\n\n\t\tNhap So Tien Can Chuyen: "; cin >> m_lTienChuyen;
		}
	}
	m_lSoDu = m_lSoDu - m_lTienChuyen;
	cout << "\n\t\tBan chon tiep tuc!!! ";
	cout << "\n\t\tBan Chuyen Thanh Cong " << m_lTienChuyen << " VND";
	cout << "\n\t\tSo Du Con Lai " << m_lSoDu << " VND";
	ofstream fo;
	fo.open("GiaoDich.dat", ios::app);
	fo << "\n\t\tBan chon tiep tuc!!! ";
	fo << "\n\t\tBan Chuyen Thanh Cong " << m_lTienChuyen << " VND";
	fo << "\n\t\tSo Du Con Lai " << m_lSoDu << " VND";
	fo.close();
	Sleep(1500);

	int nChon;
	do
	{
		cout << "\n\t\tBan muon tiep tuc chu???";
		cout << "\n\t\t1.Tiep Tuc";
		cout << "\n\t\t2.Thoat";
		cout << "\n\t\tMoi Ban Chon: ";
		cin >> nChon;
		switch (nChon)
		{
		case 1:

			break;
		case 2:
			cout << "\n\t\tBan chon thoat!!! ";
			break;
		}
	} while (nChon < 0 || nChon > 2);
}
long UserTransaction:: getTien()
{
	return File[0].getTien();
}
UserTransaction::UserTransaction(void)
{
}


UserTransaction::~UserTransaction(void)
{
}
