#include"SinhVien.h"

SinhVien::SinhVien()
{
	_name = "NULL";
	_age = 0;
	_MSSV = 0;
	_regsub = 0;
	_oldsub = 0;
	_againsub = 0;
}
SinhVien::~SinhVien()
{

}
void SinhVien::Nhap()
{
	cout << "Nhap Ma so sinh vien: ";
	cin >> _MSSV;
	cout << "Nhap ho ten sinh vien: ";
	cin.ignore();
	getline(cin, _name);
	cout << "Nhap tuoi sinh vien: ";
	cin >> _age;
	cout << "Nhap so luong mon moi dang ky: ";
	cin >> _regsub;
	cout << "Nhap so luong mon dang ky thi lai: ";
	cin >> _oldsub;
	cout << "Nhap so luong mon dang ky hoc lai: ";
	cin >> _againsub;
}
void SinhVien::Xuat()
{
	cout << "Ho va ten sinh vien: " << _name << endl;
	cout << "Tuoi: " << _age << endl;
	cout << "Ma so sinh vien: " << _MSSV << endl;
	cout << "So luong mon dang ky: " << _regsub << endl;
	cout << "So luong mon dang ky thi lai: " << _oldsub << endl;
	cout << "So luong mon dang ky hoc lai: " << _againsub << endl;
}
double SinhVien::tinhhocphi()
{
	return 0;
}