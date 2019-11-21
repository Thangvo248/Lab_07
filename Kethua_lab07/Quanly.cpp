#include"Quanly.h"

void Quanly::Nhapdanhsach()
{
	int n = 0;
	cout << "Nhap thong tin Sinh Vien CTTT: \n";
	cout << "Nhap so luong sinh vien CTTT: ";
	cin >> n;
	if(n<1)
	{
		cout << "Ban nhap sai! Xin moi chay lai";
		return;
	}
	DsCTTT.resize(n);
	for (int i = 0; i < DsCTTT.size(); i++)
	{
		cout << "Nhap sinh vien thu " << i + 1 << endl;
		DsCTTT[i].Nhap();
	}
	n = 0;
	cout << "\nNhap thong tin Sinh Vien CNTN: \n";
	cout << "Nhap so luong sinh vien CNTN: ";
	cin >> n;
	if (n < 1)
	{
		cout << "Ban nhap sai! Xin moi chay lai";
		return;
	}
	DsCNTN.resize(n);
	for (int i = 0; i < DsCNTN.size(); i++)
	{
		cout << "Nhap sinh vien thu " << i + 1 << endl;
		DsCNTN[i].Nhap();
	}
}
void Quanly::Xuatdanhsach()
{
	cout << "Danh sach sinh vien CTTT \n";
	for (int i = 0; i < DsCTTT.size(); i++)
	{
		DsCTTT[i].Xuat();
	}
	cout << "\n Danh sach sinh vien CNTN\n";
	for (int i = 0; i < DsCNTN.size(); i++)
	{
		DsCNTN[i].Xuat();
	}
}
double Quanly::tonghocphi()
{
	double sum = 0;
	for (int i = 0; i < DsCTTT.size(); i++)
	{
		if (DsCTTT[i].tinhhocphi() != -1)
			sum += DsCTTT[i].tinhhocphi();
	}
	for (int i = 0; i < DsCNTN.size(); i++)
	{
		if (DsCNTN[i].tinhhocphi() != -1)
			sum += DsCNTN[i].tinhhocphi();
	}
	return sum;
}