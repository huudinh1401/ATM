#include "FileUtility.h"
#pragma once
class UserTransaction
{
	long m_lRutTien, m_lSoDu, m_lTienChuyen;
	string m_cTKCanChuyen;
	FileUtility File[1];
public:
	void Nhap();
	void Doc();
	void Rut();
	void Chuyen();
	void Xuat();
	long getTien();
	UserTransaction(void);
	~UserTransaction(void);
};

