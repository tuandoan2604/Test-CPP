/*hần mềm quản lý nhân viên của công ty được mô tả nghiệp vụ như sau:

Mỗi nhân viên (Employee) được công ty chia thành 3 loại sau: Nhân viên có kinh nghiệm lâu năm (Experience), nhân viên mới ra trường (Fresher) , Nhân viên thực tập (Intern)

            Tất cả các Employee đều có các thuộc tính là: ID, FullName, BirthDay,Phone, Email, Employee_type,Employee_count và phương thức là ShowInfo để hiển thị thông tin của nhân viên đó (hiển thị thông tin nhân viên ra màn hình console).

                        Trong đó :

Employee_typecó giá trị tương ứng là 0: Experience, 1: Fresher , 2: Intern  (tùy vào người dùng nhập vào ứng viên loại nào)

 Employee_count dùng để người dùng đếm số lượng nhân viên trong một đợt người dùng nhập nhân viên mới  vào cơ sở dữ liệu. (mỗi lần người dùng nhập thêm mới nhân viên thì thuộc tính Employee_count của class Employee sẽ tăng lên 1)

Ngoài ra :

            Đối với nhân viên Experience có thêm thuộc tính: Số năm kinh nghiệm (ExpInYear), Kỹ năng chuyên môn (ProSkill)

            Đối với nhân viênn Fresher có thêm thuộc tính: Thời gian tốt nghiệp(Graduation_date), Xếp loại tốt nghiệp (Graduation_rank) , Trường tốt nghiệp (Education)

            Đối với nhân viên Intern có thêm thuộc tính: Chuyên ngành đang học (Majors), Học kì đang học (Semester), Tên trường đang học (University_name)

Lưu ý: Tùy mỗi loại nhân viên, phương thức showMe sẽ được bổ sung thêm các thuộc tính của riêng loại nhân viên đó.

** Ngoài ra mỗi nhân viên khi vào làm cần phải nộp bằng cấp nghề nghiệp đi kèm, bộ phận tuyển dụng cần quản lý các bằng cấp này. Một nhân viên có thể có nhiều bằng cấp (Certificate)

Với mỗi bằng cấp có các thông tin bao gồm : CertificatedID, CertificateName, CertificateRank, CertificatedDate.

Yêu cầu

Hãy thiết kế và viết code của chương trình trên làm sao để tuân thủ theo đúng mô hình OOP đã học, áp dụng đầy đủ 4 tính chất : bao đóng (encapsulation) , kế thừa (inheritance) , đa hình (polymorphism) , trừu tượng (abstraction).
Xác định và viết code constructor cho tất cả các class.
Xác định và viết code cho các abstract method, abstract class, override/overload method, static field.
Xác định Is A, Has A relationship trong phần thiết kế code đã viết ở trên.
Sử dụng và giải thích được ý nghĩa của 2 keyword: super, this trong phần thiết kế code ở trên.
Hãy giải thích ý nghĩa của toán tử instanceof, hãy ứng dụng instanceof để downcasting 1 object Employee trở thành các object Experience, Fresher hoặc intern trong các yêu cầu 2, yêu cầu 3, yêu cầu 4 bên dưới.
Viết chức năng cho phép thêm, sửa (Nhập ID để xác định một nhân viên, nếu tồn tại cho phép người dùng chỉnh sửa thông tin của nhân viên), xóa(xóa theo ID) các loại nhân viên trên.
Viết các hàm kiểm tra tính hợp lệ của ngày sinh, email, tên và số điện thoại của nhân viên. Áp dụng các hàm này vào chức năng số 7.
Viết chương trình tìm tất cả các nhân viên intern.
Viết chương trình tìm tất cả các nhân viên experience .
Viết chương trình tìm tất cả các nhân viên fresher.
Tạo ra các BirthDayException, PhoneException, EmailException, FullNameException để ném ra ngoại lệ trong trường hợp birthday, email, và phone người dùng nhập vào không hợp lệ.
Source code tham khảo: Employee Management

Note: Do nhiều bạn hỏi quá nên mình để bản mẫu ở đây, các bạn lưu ý đây không phải bài giải hoàn chỉnh nhưng nó chứa đầy đủ ý để các bạn có hướng giải quyết cho bài này. Chúc các bạn thành công!*/



#include "Exception.h"
#include "Manage_Employee.h"
#define INSERT 1
#define EDIT 2
#define DELETE 3
#define SHOW 4
#define EXIT 5
int main(){

    int option;

    Manage_Employee manage_Employee;

    bool exit_loop = true;
    while (exit_loop)
    {
        cout << "======= List options ========\n";
        cout << "   1.Insert Employee\n";
        cout << "   2.Edit Employee \n";
        cout << "   3.Delete Employee \n";
        cout << "   4.Search by type  \n";
        cout << "   5.Exit \n";
        cout << "   Choose options: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case INSERT:
            manage_Employee.Insert_Employee();
            break;
        case EDIT:
            manage_Employee.Edit_Employee();
            break;
        case DELETE:
            manage_Employee.Delete_Employee();
            break;
        case SHOW:
            manage_Employee.Search_By_Type();
            break;
        case EXIT:
            exit_loop = false;
            break;
        default:
            cout << "Try again!!!\n";
            break;
        }
    }
    return 0;
}

