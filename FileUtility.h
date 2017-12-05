#include "string"
#include "iostream"
#include "fstream"
using namespace std;
#pragma once

class FileUtility
{
private:
	string m_cID, m_cPass, m_cIdHT, m_cPassHT;
	string m_cTen, m_cLoaiTien;
	string m_cIDTT, m_cChuoiTien;
	long m_lTien;
public:
	void Nhap();
	void Doc();

	long getTien();

	FileUtility(void);
	~FileUtility(void);
};

