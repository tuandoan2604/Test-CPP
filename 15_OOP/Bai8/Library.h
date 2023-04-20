#pragma once
#include "Card.h"
#include <vector>
using namespace std;

class Library{
    private:
        vector <Card* > List_Card;
    public:
        void Insert_Card(){
            Card * card = new Card();
            card->Input();
            List_Card.push_back(card);
        }

        void Delete_Card(){
            int ID_Card;
            cout << "Enter ID card: ";
            cin >> ID_Card;
            for ( int i =0 ; i< List_Card.size() ; i ++ ){
                if( List_Card[i]->Get_ID() == ID_Card  ){
                    delete List_Card[i];
                    List_Card.erase(List_Card.begin() + i);
                }
            }
        }
        void Show_Information(){
            for( Card * card : List_Card ){
                card->Show_Information();
            }
        }

        ~Library(){
            cout << "=>Destructor Libarry!!!\n";
            for( Card * card : List_Card ){
                delete card;
            }
            List_Card.clear();
        }

};