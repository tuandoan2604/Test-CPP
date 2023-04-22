#include <stdexcept>
#include <iostream>
#include <vector>
#include <stdexcept>

class Platformer {
public:
    Platformer(int n, int position) {
        tiles = std::vector<bool>(n , true);
        currentPos = position;
    }

    void jumpLeft() {
        tiles[currentPos] = false;
        // Biến đếm cho 2 lần dịch chuyển hợp lệ
        int temp = 2;
        // Lưu lại lịch sử nếu nó không di chuyển được
        int prePos = currentPos;

        while (temp > 0 && currentPos >= 0 )
        {
            currentPos--;
            if( tiles[currentPos] == true){
                temp--;
            }
        }
        if( currentPos < 0 ){
            currentPos = prePos;
        }
    }

    void jumpRight() {
        tiles[currentPos] = false;
        // Biến đếm cho 2 lần dịch chuyển hợp lệ
        int temp = 2;
        // Lưu lại lịch sử nếu nó không di chuyển được
        int prePos = currentPos;

        while (temp > 0 && currentPos < tiles.size() )
        {
            currentPos++;
            if( tiles[currentPos] == true){
                temp--;
            }
        }
        if( currentPos >=tiles.size()  ){
            currentPos = prePos;
        }
    }

    int position() {
        return currentPos;
    }
private:
    std::vector<bool> tiles;
    int currentPos;
};

#ifndef RunTests
int main()
{
    Platformer platformer(6, 3);
    std::cout << platformer.position() << std::endl; // should print 3
    platformer.jumpLeft();
    std::cout << platformer.position() << std::endl; // should print 1
    platformer.jumpRight();
    std::cout << platformer.position() << std::endl; // should print 4
}
#endif
