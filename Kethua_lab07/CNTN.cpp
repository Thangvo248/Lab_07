#include"CNTN.h"
CNTN::CNTN()
{
	SinhVien::SinhVien();
}
CNTN::~CNTN()
{
	SinhVien::~SinhVien();
}
double CNTN::tinhhocphi()
{
	SinhVien::tinhhocphi();
	if ((this->GetRegSub() + this->GetAgainsub()) < 5)
		return -1;
	return 500+ (this->GetRegSub() * 200) + (this->GetOldSub() * 50) + (this->GetAgainsub() * 100);

}
void CNTN::Xuat()
{
	SinhVien::Xuat();
	cout << "Hoc phi: "<<tinhhocphi()<<"000"<<endl;
}