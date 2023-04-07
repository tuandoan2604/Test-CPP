#include <iostream>
#include <vector>
using namespace std;
class CanBo
{
protected:
    string hoVaTen;
    int tuoi;
    string gioiTinh;
    string diaChi;

public:
    CanBo()
    {
    }
    CanBo(string hoVaTen, int tuoi, string gioiTinh, string diaChi)
    {
        this->hoVaTen = hoVaTen;
        this->tuoi = tuoi;
        this->gioiTinh = gioiTinh;
        this->diaChi = diaChi;
    }
    string getHoVaten()
    {
        return hoVaTen;
    }
    void setHoVaTen(string hoVaTen)
    {
        this->hoVaTen = hoVaTen;
    }
    int getTuoi()
    {
        return tuoi;
    }
    void setTuoi(int tuoi)
    {
        this->tuoi = tuoi;
    }
    string getGioiTinh()
    {
        return gioiTinh;
    }
    void setGioiTinh(string gioiTinh)
    {
        this->gioiTinh = gioiTinh;
    }
    string getDiaChi()
    {
        return diaChi;
    }
    void setDiaCHi(string diaChi)
    {
        this->diaChi = diaChi;
    }
    void display()
    {
        cout << "Ten can bo: " << hoVaTen << endl;
        cout << "Tuoi can bo: " << tuoi << endl;
        cout << "Gioi tinh: " << gioiTinh << endl;
        cout << "Dia chi : " << diaChi << endl;
    }
};
class CongNhan : public CanBo
{
protected:
    int bac;

public:
    CongNhan()
    {
    }
    CongNhan(string hoVaten, int tuoi, string gioiTinh, string diaChi, int bac) : CanBo(hoVaTen, tuoi, gioiTinh, diaChi)
    {
        this->bac = bac;
    }
    int getBac()
    {
        return bac;
    }
    void setBac(int bac)
    {
        this->bac = bac;
    }
};
class KySu : public CanBo
{
protected:
    string nghanhLamViec;

public:
    KySu()
    {
    }
    KySu(string hoVaten, int tuoi, string gioiTinh, string diaChi, string nghanhLamViec) : CanBo(hoVaTen, tuoi, gioiTinh, diaChi)
    {
        this->nghanhLamViec = nghanhLamViec;
    }
    string getNghanhLamViec()
    {
        return nghanhLamViec;
    }
    void setNganhLamViec(string nghanhLamViec)
    {
        this->nghanhLamViec = nghanhLamViec;
    }
};
class NhanVien : public CanBo
{
protected:
    string congViec;

public:
    NhanVien()
    {
    }
    NhanVien(string hoVaten, int tuoi, string gioiTinh, string diaChi, string congViec) : CanBo(hoVaTen, tuoi, gioiTinh, diaChi)
    {
        this->congViec = congViec;
    }
    string getCongViec()
    {
        return congViec;
    }
    void setCongViec(string congViec)
    {
        this->congViec = congViec;
    }
};
class QLCB
{
    vector<CanBo> danhSachCanBo;

public:
    QLCB()
    {
    }
    void themCanBo(CanBo canBo)
    {
        danhSachCanBo.push_back(canBo);
    }
    void timTheoTen()
    {
        bool check = true;
        string ten;

        cout << "Nhap ten can bo can tim: ";
        cin >> ten;

        for (int i = 0; i < danhSachCanBo.size(); i++)
        {

            if (danhSachCanBo[i].getHoVaten() == ten)
            {
                cout << "thong tin can bo co ten " << ten << " la :" << endl;
                danhSachCanBo[i].display();
                check = false;
            }
            if (check)
            {
                cout << "khong co can bo cung ten" << endl;
            }
        }
    }
    void lietKeDanhSach()
    {
        for (int i = 0; i < danhSachCanBo.size(); i++)
        {
            danhSachCanBo[i].display();
            cout<<"---------------"<<endl;
        }
    }
};
