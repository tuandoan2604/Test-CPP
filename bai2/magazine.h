#pragma once
#include "document.h"

class Magazine : public Document{
    private:
        int releaseMonth;
    public:
        int getReleaseMonth() const;
        void setReleaseMonth();
        int getType(){return 2;}
        void input();
        void showInformation();
        ~Magazine(){
            cout<<"destruct magazine";
        }
};

int Magazine::getReleaseMonth() const{
    return releaseMonth;
}
void Magazine::setReleaseMonth(){
    Cin_int(releaseMonth);
}
void Magazine::input(){
    Document::input();
    setReleaseMonth();
}
void Magazine::showInformation(){
    Document::showInformation();
    cout<<"Release month: "<<getReleaseMonth()<<endl;
}
