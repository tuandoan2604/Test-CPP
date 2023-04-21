#pragma once
#include "document.h"
#include "book.h"
#include "magazine.h"
#include "newspaper.h"
#include <vector>

class ManageDocument{
    private:
        vector<Document*> listDocument;
    public:
        void insertDocument();
        void deleteDocument();
        void showInformation();
        void searchByType();
        ~ManageDocument(){
            cout<<"Destruct Manage Document"<<endl;
            for(auto *document:listDocument){
                delete document;
            }
            listDocument.clear();
        }
};

void ManageDocument::insertDocument(){
    int type;
    Cin_int(type);
    Document* document;
    if(type==1){
        document=new Book();
    }else if(type==2){
        document=new Magazine();
    }else if(type==3){
        document = new Newspaper();
    }else{
        std::cout<<"Loi"<<endl;
        return;
    }

    document->input();
    listDocument.push_back(document);
}

void ManageDocument::deleteDocument(){
    int idDocument;
    cout<<"Enter id document to delete";
    cin>>idDocument;
    for(int i = 0; i < listDocument.size(); i++){
        if(listDocument[i]->getIdDocument()==idDocument){
            delete listDocument[i];
            listDocument.erase(listDocument.begin()+i);
        }
    }
}

void ManageDocument::showInformation(){
    for(auto document:listDocument){
        document->showInformation();
    }
}

void ManageDocument::searchByType(){
    int type;
    Cin_int(type);
    for(auto document:listDocument){
        if(document->getType()==type){
            document->showInformation();
        }
    }
}