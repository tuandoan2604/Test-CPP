#include <iostream>

class Object {
public:
    Object() {
        id_ = next_id_; // Gán giá trị của next_id_ cho id_ và tăng giá trị của next_id_
        next_id_++;
    }

    int getID() const {
        return id_;
    }

private:
    static int next_id_; // Biến static để lưu giá trị ID tiếp theo
    int id_; // Biến để lưu giá trị ID của đối tượng

};

// Khởi tạo giá trị đầu tiên cho next_id_
int Object::next_id_ = 1;

int main() {
    Object obj1;
    Object obj2;
    Object obj3;

    std::cout << "ID cua obj1: " << obj1.getID() << std::endl;
    std::cout << "ID cua obj3: " << obj3.getID() << std::endl;
    std::cout << "ID cua obj2: " << obj2.getID() << std::endl;
    

    return 0;
}
