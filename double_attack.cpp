#include <iostream>
#include <vector>

using namespace std;
class Sach {
private:
    string NhaXuatBan; // Dữ liệu thành viên của lớp

public:
    // Constructor
    Sach(string nxb) {
        NhaXuatBan = nxb;
    }

    // Phương thức không thay đổi giá trị của đối tượng
    string GetNhaXuatBan() const {
        return NhaXuatBan;
    }

    // Phương thức thay đổi giá trị của đối tượng
    void SetNhaXuatBan(string nxb) {
        NhaXuatBan = nxb;
    }
};

int main() {
    int x = 4;
    int y =5 ; 

    vector<int > next_pos1;
    vector<int > next_pos2;

    vector<int> enemy = {1, 2 ,2 ,1};

    if( x-2 >0 && y-1>0  ) {
        next_pos1.push_back(x-2);
        next_pos1.push_back(y-1);
    }
    if( x-2 >0 && y+1<9  ) {
        next_pos1.push_back(x-2);
        next_pos1.push_back(y+1);
    }
    if( x-1 >0 && y-2>0  ) {
        next_pos1.push_back(x-1);
        next_pos1.push_back(y-2);
    }
    if( x+1 <9 && y-2>0  ) {
        next_pos1.push_back(x+1);
        next_pos1.push_back(y-2);
    }
    if( x+2 <9 && y-1>0  ) {
        next_pos1.push_back(x+2);
        next_pos1.push_back(y-1);
    }
    if( x+2 <9 && y+1<9  ) {
        next_pos1.push_back(x+2);
        next_pos1.push_back(y+1);
    }

    if( x+1 <9 && y+2<9  ) {
        next_pos1.push_back(x+1);
        next_pos1.push_back(y+2);
    }
    if( x-1 >0 && y+2<9  ) {
        next_pos1.push_back(x-1);
        next_pos1.push_back(y+2);
    }

    for (int i= 0 ; i < next_pos1.size(); i = i+2 ){
        if( x-2 >0 && y-1>0  ) {
            next_pos2.push_back(next_pos1[i]-2);
            next_pos2.push_back(next_pos1[i+1]-1);
        }
        if( x-2 >0 && y+1<9  ) {
            next_pos2.push_back(next_pos1[i]-2);
            next_pos2.push_back(next_pos1[i+1]+1);
        }
        if( x-1 >0 && y-2>0  ) {
            next_pos2.push_back(next_pos1[i]-1);
            next_pos2.push_back(next_pos1[i+1]-2);
        }
        if( x+1 <9 && y-2>0  ) {
            next_pos2.push_back(next_pos1[i]+1);
            next_pos2.push_back(next_pos1[i+1]-2);
        }
        if( x+2 <9 && y-1>0  ) {
            next_pos2.push_back(next_pos1[i]+2);
            next_pos2.push_back(next_pos1[i+1]-1);
        }
        if( x+2 <9 && y+1<9  ) {
            next_pos2.push_back(next_pos1[i]+2);
            next_pos2.push_back(next_pos1[i+1]+1);
        }

        if( x+1 <9 && y+2<9  ) {
            next_pos2.push_back(next_pos1[i]+1);
            next_pos1.push_back(next_pos1[i+1]+2);
        }
        if( x-1 >0 && y+2<9  ) {
            next_pos2.push_back(next_pos1[i]-1);
            next_pos2.push_back(next_pos1[i+1]+2);
        } 
    }

    int attack =0;
    for (int i = 0; i < next_pos2.size(); i = i+2){
        
        if(next_pos2[i] != x || next_pos2[i+1] !=y){
            int tmp = 0;
            for( int j = 0; j < enemy.size(); j = j+2){
                if( next_pos2[i] == enemy[j] && next_pos2[i+1] == enemy[j+1] ){
                    tmp ++;
                }
            }
            if(tmp >=2) attack++;
        }
    }
    cout<< attack;

    return 0;
}