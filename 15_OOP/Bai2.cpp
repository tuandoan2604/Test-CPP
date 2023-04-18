/*'Một thư viện cần quản lý các tài liệu bao gồm Sách, Tạp chí, Báo. Mỗi tài liệu gồm có các thuộc tính sau: 
Mã tài liệu(Mã tài liệu là duy nhất), Tên nhà xuất bản, số bản phát hành.

Các loại sách cần quản lý thêm các thuộc tính: tên tác giả, số trang.

Các tạp chí cần quản lý thêm: Số phát hành, tháng phát hành.

Các báo cần quản lý thêm: Ngày phát hành.

Yêu cầu 1: Xây dựng các lớp để quản lý tài liệu cho thư viện một cách hiệu quả.

Yêu cầu 2: Xây dựng lớp QuanLySach có các chức năng sau

Thêm mới tài liêu: Sách, tạp chí, báo.
Xoá tài liệu theo mã tài liệu.
Hiện thị thông tin về tài liệu.
Tìm kiếm tài liệu theo loại: Sách, tạp chí, báo.
Thoát khỏi chương trình.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class TaiLieu{
    private:
        string MaTaiLieu;
        string NhaXuatBan;
        int SoBanPhatHanh;
    
    public:
        TaiLieu(string MaTaiLieu ,string NhaXuatBan, int SoBanPhatHanh ):
            MaTaiLieu(MaTaiLieu), NhaXuatBan(NhaXuatBan), SoBanPhatHanh(SoBanPhatHanh){}

        string GetMaTaiLieu() const {
                return MaTaiLieu;
        }

        void SetMaTaiLieu(string MaTaiLieu) {
                this->MaTaiLieu = MaTaiLieu;
        }

        string GetNhaXuatBan() const {
                return NhaXuatBan;
        }

        void SetNhaXuatBan(string NhaXuatBan) {
                this->NhaXuatBan = NhaXuatBan;
        }

        int GetSoBanPhatHanh() const {
                return SoBanPhatHanh;
        }

        void SetSoBanPhatHanh(int SoBanPhatHanh) {
                this->SoBanPhatHanh = SoBanPhatHanh;
        }

        virtual void HienThiThongTin(){
            cout<< GetMaTaiLieu() <<"       "<<GetNhaXuatBan() <<"      "<< GetSoBanPhatHanh()<<endl;
        }

};
class Sach: public TaiLieu{
    private:
        string TenTacGia;
        int SoTrang;
    public:
        Sach(string MaTaiLieu ,string NhaXuatBan, int SoBanPhatHanh, string TenTacGia , int SoTrang):
            TaiLieu(MaTaiLieu, NhaXuatBan , SoBanPhatHanh ), TenTacGia(TenTacGia), SoTrang(SoTrang){}

        string GetTenTacGia() const {
                return TenTacGia;
        }

        void SetTenTacGia(string TenTacGia) {
            this->TenTacGia = TenTacGia;
        }

        int GetSoTrang() const {
            return SoTrang;
        }

        void SetSoTrang(int SoTrang) {
            this->SoTrang = SoTrang;
        }
        void HienThiThongTin(){
            TaiLieu::HienThiThongTin();
            cout<<"     Ten tac gia: "<< GetTenTacGia() << "        So trang: "<<GetSoTrang() <<endl;
        }
};

class TapChi: public TaiLieu{
    private:
        int ThangPhatHanh ;
    public:   
        TapChi(string MaTaiLieu ,string NhaXuatBan, int SoBanPhatHanh, int ThangPhatHanh):
            TaiLieu(MaTaiLieu, NhaXuatBan , SoBanPhatHanh ), ThangPhatHanh(ThangPhatHanh){}

        int GetThangPhatHanh() const {
            return ThangPhatHanh;
        }

        void SetThangPhatHanh(int ThangPhatHanh) {
            this->ThangPhatHanh = ThangPhatHanh;
        }
        void HienThiThongTin(){
            TaiLieu::HienThiThongTin();
            cout<< "    Thang phat hanh: "<<GetThangPhatHanh()<<endl;
        }
};
        
class Bao: public TaiLieu{
    private:
        int NgayPhatHanh;
    public:
        Bao(string MaTaiLieu ,string NhaXuatBan, int SoBanPhatHanh, int NgayPhatHanh):
            TaiLieu(MaTaiLieu, NhaXuatBan , SoBanPhatHanh ), NgayPhatHanh(NgayPhatHanh){}
        int GetNgayPhatHanh() const {
            return NgayPhatHanh;
        }

        void SetNgayPhatHanh(int NgayPhatHanh) {
            this->NgayPhatHanh = NgayPhatHanh;
        }   
        void HienThiThongTin(){
            TaiLieu::HienThiThongTin();
            cout<< "    Ngay phat hanh: " << GetNgayPhatHanh() <<endl;
        }
};

class QuanLySach{
    private:
        vector <TaiLieu*> List_TaiLieu;
    
    public:
        void ThemMoiTaiLieu( TaiLieu * tl){
            List_TaiLieu.push_back(tl);
        }
        void XoaTaiLieu(string MaTaiLieu){
            for (int i = 0; i < List_TaiLieu.size(); i ++ ){
                if(List_TaiLieu[i]->GetMaTaiLieu() == MaTaiLieu){
                    // Giải phóng bộ nhớ heap
                    delete List_TaiLieu[i];
                    // Xóa phần tử trong vector
                    List_TaiLieu.erase( List_TaiLieu.begin() + i);
                }
            }
        }
        void HienThiThongTinTaiLieu(){
            cout<< "=========== Danh sach tai lieu ==============\n";
            for(TaiLieu * tl : List_TaiLieu){
                tl->HienThiThongTin();
            }
        }
        void TimKiemTaiLieuTheoLoai(const type_info& TypeInfo){   
            cout<< "=========== Thong tin sau khi tim kiem ==============\n";
            for(TaiLieu *tl : List_TaiLieu){
                if( typeid(*tl) == TypeInfo ){
                    tl->HienThiThongTin();
                }
            }
        }
        ~QuanLySach(){
            for (TaiLieu * t1: List_TaiLieu){
                delete t1;
            }
        }

};
int main(){
    QuanLySach QLS;

    Sach* sach1 = new Sach("TL001", "Nha Xuat Ban A", 100, "Tac Gia 1", 200);
    TapChi* tapChi1 = new TapChi("TL002", "Nha Xuat Ban B", 200, 5);
    Bao* bao1 = new Bao("TL003", "Nha Xuat Ban C", 150, 29);
    Bao* bao2 = new Bao("TL004", "Nha Xuat Ban D", 170, 30);

    QLS.ThemMoiTaiLieu(sach1);
    QLS.ThemMoiTaiLieu(tapChi1);
    QLS.ThemMoiTaiLieu(bao1);
    QLS.ThemMoiTaiLieu(bao2);

    QLS.HienThiThongTinTaiLieu();

    QLS.TimKiemTaiLieuTheoLoai(typeid(Sach));

    QLS.XoaTaiLieu("TL001");

    QLS.HienThiThongTinTaiLieu();
    return 0;
}
