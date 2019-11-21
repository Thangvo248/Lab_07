#pragma once
#include"CNTN.h"
#include"CTTT.h"
#include<vector>
class Quanly
{
private:
	vector<CNTN> DsCNTN;
	vector<CTTT> DsCTTT;
public:
	void Nhapdanhsach();
	void Xuatdanhsach();
	double tonghocphi();//ham tinh tong hoc phi
};