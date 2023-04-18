/*Để quản lý các hộ dân cư trong một khu phố, người ta cần các thông tin sau: 
Số thành viên trong gia đình, Số nhà, thông tin mỗi cá nhân trong gia đình. 
Với mỗi cá nhân, người ta quản lý các thông tin sau: Họ tên, Tuổi, Nghề nghiệp, số chứng minh nhân dân(duy nhất cho mỗi người).

Yêu cầu 1: Hãy xây dựng lớp Nguoi để quản lý thông tin của mỗi cá nhân.

Yêu cầu 2: Xây dựng lớp HoGiaDinh để quản lý thông tin của từng hộ gia đình.

Yêu cầu 2: Xây dựng lớp KhuPho để quản lý các thông tin của từng hộ gia đình.

Yêu cầu 3: Nhập n hộ dân. (n nhập từ bàn phím), hiển thị thông tin của các hộ trong khu phố.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Nguoi{
    private:
        string HoTen;
        int Tuoi;
        string NgheNghiep;
        string CMND;
    public:
        Nguoi( string HoTen, int Tuoi, string NgheNghiep, string CMND ):
            HoTen(HoTen), Tuoi(Tuoi), NgheNghiep(NgheNghiep), CMND(CMND){}

        string GetHoTen() const {
                return HoTen;
        }

        void SetHoTen(string HoTen) {
                this->HoTen = HoTen;
        }

        int GetTuoi() const {
                return Tuoi;
        }

        void SetTuoi(int Tuoi) {
                this->Tuoi = Tuoi;
        }

        string GetNgheNghiep() const {
                return NgheNghiep;
        }

        void SetNgheNghiep(string NgheNghiep) {
                this->NgheNghiep = NgheNghiep;
        }

        string GetCMND() const {
                return CMND;
        }

        void SetCMND(string CMND) {
                this->CMND = CMND;
        }
        void HienThiThongTin(){
            cout << "Ho ten: " << HoTen << endl;
            cout << "Tuoi: " << Tuoi << endl;
            cout << "Nghe nghiep: " << NgheNghiep << endl;
            cout << "So CMND: " << CMND << endl;
        }
};

class HoGiaDinh{
    private:
        int SoThanhVien; 
        int SoNha;
        vector <Nguoi * > Ds_ThanhVien;
    
    public:
        HoGiaDinh(int SoThanhVien, int SoNha):
            SoThanhVien(SoThanhVien), SoNha(SoNha){}
            
        void ThemThanhVien( Nguoi* ng){
            Ds_ThanhVien.push_back(ng);
        }
        int GetSoThanhVien() const {
                return SoThanhVien;
        }

        void SetSoThanhVien(int SoThanhVien) {
                this->SoThanhVien = SoThanhVien;
        }

        int GetSoNha() const {
                return SoNha;
        }

        void SetSoNha(int SoNha) {
                this->SoNha = SoNha;
        }
        void HienThiThongTin(){
            for (Nguoi * ng : Ds_ThanhVien){
                ng->HienThiThongTin();
            }
        }
};

class KhuPho{
    private:
        int SoHoGiaDinh;
        vector <HoGiaDinh*> Ds_HoGiaDinh;

    public:
        KhuPho( int SoHoGiaDinh):
            SoHoGiaDinh(SoHoGiaDinh){}

        int GetSoHoGiaDinh() const {
            return SoHoGiaDinh;
        }

        void SetSoHoGiaDinh(int SoHoGiaDinh) {
            this->SoHoGiaDinh = SoHoGiaDinh;
        }

        void ThemHoGiaDinh(HoGiaDinh* hgd){
            Ds_HoGiaDinh.push_back(hgd);
        }
        void HienThiThongTin(){
            for(int i = 0 ; i< Ds_HoGiaDinh.size(); i++){
                cout<< "=======Ho gia dinh thu "<< i+1 <<endl; 
                Ds_HoGiaDinh[i]->HienThiThongTin();
            }
        }
};

int main(){

    int n;
    cout << "Nhap so Ho Gia Dinh: ";
    cin >>n;

    KhuPho khupho1(n);

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin ho gia dinh thu " << i + 1 << ":" << endl;
        int soThanhVien, soNha;
        cout << "Nhap so thanh vien trong ho: ";
        cin >> soThanhVien;
        cout << "Nhap so nha: ";
        cin >> soNha;

        HoGiaDinh* hoGiaDinh = new HoGiaDinh(soThanhVien, soNha);

    return 0;
}