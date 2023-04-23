#ifndef MANAGERCARD_H
#define MANAGERCARD_H

#include "card.h"
#include <unordered_map>

using namespace std;

class ManagerCard
{
private:
    unordered_map<string, Card> cardList;
public:
    void addCard()
    {
        Card card;
        cardList.insert(make_pair(card.getId(), card));
    }

    void deleteCard(string id)
    {
        cardList.erase(id);
    }

    void displayAllCard()
    {
        for (auto it : cardList)
        {
            it.second.displayCard();
            cout << endl;
        }
    }

    ~ManagerCard() {cardList.clear();}
};

#endif