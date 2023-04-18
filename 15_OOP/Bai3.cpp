/*Các thí sinh dự thi đại học bao gồm các thí sinh thi khối A, B, và khối C. 
Các thí sinh cần quản lý các thông tin sau: Số báo danh, họ tên, địa chỉ, mức ưu tiên.

Thí sinh thi khối A thi các môn: Toán, Lý, Hoá.

Thí sinh thi khối B thi các môn: Toán, Hoá, Sinh.

Thí sinh thi khối C thi các môn: Văn, Sử, Địa.

Yêu cầu 1: Xây dựng các lớp để quản lý các thi sinh dự thi đại học.

Yêu cầu 2: Xây dựng lớp TuyenSinh có các chức năng:

Thêm mới thí sinh.
Hiện thị thông tin của thí sinh và khối thi của thí sinh.
Tìm kiếm theo số báo danh.
Thoát khỏi chương trình.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ThiSinh{
    private:
        string SBD;
        string HoTen;
        string DiaChi;
        int MucUuTien;
    public:
        ThiSinh( string SBD,  string HoTen ,string DiaChi ,int MucUuTien):
            SBD(SBD), HoTen(HoTen), DiaChi(DiaChi), MucUuTien(MucUuTien){}
        string GetSBD() const {
            return SBD;
        }

        void SetSBD(string SBD) {
            this->SBD = SBD;
        }

        string GetHoTen() const {
            return HoTen;
        }

        void SetHoTen(string HoTen) {
            this->HoTen = HoTen;
        }

        string GetDiaChi() const {
            return DiaChi;
        }

        void SetDiaChi(string DiaChi) {
            this->DiaChi = DiaChi;
        }

        int GetMucUuTien() const {
            return MucUuTien;
        }

        void SetMucUuTien(int MucUuTien) {
            this->MucUuTien = MucUuTien;
        }
        virtual void HienThiThongTin(){
            cout<<GetSBD()<<"   "<<GetHoTen()<< "    " <<GetDiaChi()<<"     "<<GetMucUuTien() <<endl;
        }
};
class ThiSinhKhoi_A: public ThiSinh{
    private:
        int Toan; 
        int Ly ;
        int Hoa ;

    public:
        ThiSinhKhoi_A(string SBD,  string HoTen ,string DiaChi ,int MucUuTien, int Toan, int Ly , int Hoa):
            ThiSinh(SBD, HoTen, DiaChi, MucUuTien), Toan(Toan), Ly(Ly), Hoa(Hoa){}
        int GetToan() const {
                return Toan;
        }

        void SetToan(int Toan) {
                this->Toan = Toan;
        }

        int GetLy() const {
                return Ly;
        }

        void SetLy(int Ly) {
                this->Ly = Ly;
        }

        int GetHoa() const {
                return Hoa;
        }

        void SetHoa(int Hoa) {
                this->Hoa = Hoa;
        }
        void HienThiThongTin(){
            ThiSinh::HienThiThongTin();
            cout<<"Toan: " <<GetToan() << " Ly: " <<GetLy()<<"  Hoa: "<<GetHoa() <<endl;
        }
};
class ThiSinhKhoi_B: public ThiSinh{
    private:
        int Toan; 
        int Hoa ;
        int Sinh ;

    public:
        ThiSinhKhoi_B(string SBD,  string HoTen ,string DiaChi ,int MucUuTien, int Toan, int Hoa , int Sinh):
            ThiSinh(SBD, HoTen, DiaChi, MucUuTien), Toan(Toan),  Hoa(Hoa), Sinh(Sinh){}
        int GetToan() const {
                return Toan;
        }

        void SetToan(int Toan) {
                this->Toan = Toan;
        }

        int GetHoa() const {
                return Hoa;
        }

        void SetHoa(int Hoa) {
                this->Hoa = Hoa;
        }

        int GetSinh() const {
                return Sinh;
        }

        void SetSinh(int Sinh) {
                this->Sinh = Sinh;
        }
        void HienThiThongTin(){
            ThiSinh::HienThiThongTin();
            cout<<"Toan: " <<GetToan() << " Hoa: " <<GetHoa()<<"    Sinh: "<<GetSinh() <<endl;
        }
};
class ThiSinhKhoi_C: public ThiSinh{
    private:
        int Van ;
        int Su;
        int Dia;
    public:
        ThiSinhKhoi_C( string SBD,  string HoTen ,string DiaChi ,int MucUuTien, int Van, int Su, int Dia):
            ThiSinh(SBD, HoTen, DiaChi, MucUuTien), Van(Van), Su(Su) , Dia(Dia){}

        int GetVan() const {
                return Van;
        }

        void SetVan(int Van) {
                this->Van = Van;
        }

        int GetSu() const {
                return Su;
        }

        void SetSu(int Su) {
                this->Su = Su;
        }

        int GetDia() const {
                return Dia;
        }

        void SetDia(int Dia) {
                this->Dia = Dia;
        }
        void HienThiThongTin(){
            ThiSinh::HienThiThongTin();
            cout<< "Van: "<<GetVan() <<"    Su: " <<GetSu() <<"     Dia: "<< GetDia()<<endl;
        }

};
class TuyenSinh{
    private:
        vector<ThiSinh*> DSTS;
    public:
        void ThemMoiThiSinh( ThiSinh * ts ){
            DSTS.push_back(ts);
        }
        void HienThiThongTin(){
            cout<<"========= Thong tin thi sinh =============="<<endl;
            for(ThiSinh* ts : DSTS){
                ts->HienThiThongTin();
            }
        }
        void TimKiemTheoSoBaoDanh(string SBD){
            cout <<"=========Thong tin tim kiem =============="<<endl;
            for(ThiSinh * ts: DSTS){
                if( ts->GetSBD() == SBD ){
                    ts->HienThiThongTin();
                }
            }
        }
        ~TuyenSinh(){
            for(ThiSinh *ts : DSTS ){
                delete ts;
            }
            DSTS.clear();
        }
};
int main(){
    TuyenSinh ts;

    ThiSinh *Ts1 = new ThiSinhKhoi_A( "0001","Tran Van A", "Hoang Mai", 1, 10,9,10  );
    ThiSinh *Ts2 = new ThiSinhKhoi_B( "0002","Tran Thi B", "Hai Ba Trung", 2,10,9,9);
    ThiSinh *Ts3 = new ThiSinhKhoi_C( "0003","Tran Van C", "Thanh Xuan", 0, 7,8,9);

    ts.ThemMoiThiSinh(Ts1);
    ts.ThemMoiThiSinh(Ts2);
    ts.ThemMoiThiSinh(Ts3);

    ts.HienThiThongTin();

    ts.TimKiemTheoSoBaoDanh("0002");

    return 0;
}