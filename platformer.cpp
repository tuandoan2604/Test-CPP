#include <iostream>
#include <stdexcept>
using namespace std;

class Platformer{
    private: 
        int n;
        int position;
    public:
        Platformer(int n, int position){
            if(n<0 || position<0 || position>n){
                throw std::logic_error("n va postion phai lon hon hoac bang 0!");
            }
            this->n = n;
            this->position = position;
        }
        void jumpLeft(){
            if(this->position==0){
                cout<<"can't jump";
            }else{
                position -= 1;
            }
        }
        void jumpRight(){
            if(this->position==this->n){
                cout<<"cant jump";
            }else{
                position+=1;
            }
        }
        int position(){
            return this->position;
        }
};

int main(){
    return 0;
}
