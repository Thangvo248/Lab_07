#include"CTTT.h"
CTTT::CTTT()
{
	SinhVien::SinhVien();
}
CTTT::~CTTT()
{
	SinhVien::~SinhVien();
}
double CTTT::tinhhocphi()
{
	SinhVien::tinhhocphi();
	if ((this->GetRegSub() + this->GetAgainsub()) < 3)
		return -1;
	return 10000+ (this->GetRegSub() * 1000) + (this->GetOldSub() * 100) + (this->GetAgainsub() * 500);
}
void CTTT::Xuat()
{
	SinhVien::Xuat();
	cout << "Hoc phi: " << tinhhocphi()<<"000"<<endl;
}