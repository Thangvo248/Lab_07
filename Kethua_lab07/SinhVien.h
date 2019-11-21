#pragma once
#include<iostream>
using namespace std;
#include<string>

class SinhVien {

private:
	string _name;
	int _age;
	long _MSSV;
	int _regsub;//so luong mon moi dang ky
	int _oldsub;//so luong mon dang ky thi lai
	int _againsub;//so luong mon dang ky hoc lai
public:
	string GetName() { return _name; }
	int GetAge() { return _age; }
	long GetMSSV() { return _MSSV; }
	int GetRegSub() { return _regsub; }
	int GetOldSub() { return _oldsub; }
	int GetAgainsub() { return _againsub; }

	void SetName(string value) { _name = value; }
	void SetAge(int value) { _age = value; }
	void SetMSSV(long value) { value = _MSSV; }
	void SetRegSub(int value) { value = _regsub; }
	void SetOldSub(int value) { value = _oldsub; }
	void SetAgainSub(int value) { value = _againsub; }
public:
	SinhVien();
	~SinhVien();
public:
	void Nhap();
	void Xuat();
	double tinhhocphi();
};
