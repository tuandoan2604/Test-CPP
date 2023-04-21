#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Document{
    private:
        string id;
        string nxb;
        int number;

    public:
        Document(string id, string nxb, int number){
            this->id = id;
            this->nxb = nxb;
            this->number = number;
        }

        string getId(){
            return this->id;
        }

        void setId(string id){
            this->id = id;
        }

        string getNxb(){
            return this->nxb;
        }

        void setNxb(string nxb){
            this->nxb = nxb;
        }

        int getNumber(){
            return this->number;
        }

        void setNumber(int number){
            this->number = number;
        }
};

class Book : public Document{
    private:
        string author;
        int numerPage;
    public:
        Book(string id, string nxb, int number, string author, int numerPage){
            Document(id, nxb, number);
            this->author = author;
            this->numerPage = numerPage;
        }

        string getAuthor(){
            return this->author;
        }

        void setAuthor(){
            this->author = author;
        }

        int getNumerPage(){
            return this->numerPage;
        }

        void setNumerPage(int numberPage){
            this->numerPage = numerPage;
        }
};

class Journal : public Document{
    private:
        int issueNumber;
        int monthIssue;
    public:
        Journal(string id, string nxb, int number, int issueNumber, int monthIssue){
            Document(id, nxb, number);
            this->issueNumber = issueNumber;
            this->monthIssue = monthIssue;
        }

        int getIssueNumber(){
            return this->issueNumber;
        }

        void setIssueNumber(int issueNumber){
            this->issueNumber = issueNumber;
        }

        int getMonthIssue(){
            return this->monthIssue;
        }

        void setMonthIssue(int monthIssue){
            this->monthIssue = monthIssue;
        }
};      

class NewsPaper : public Document{
    private:
        int dayIssue;
    public:
        NewsPaper(string id, string nxb, int number, int dayIssue){
            Document(id, nxb, number);
            this->dayIssue = dayIssue;
        }

        int getDayIssue(){
            return this->dayIssue;
        }

        void setDayIssue(int dayIssue){
            this->dayIssue = dayIssue;
        }

};

class ManageDocument{
    private:
        std::vector<Document> documents;
    public:
        ManageDocument(){}

        void addDocument(Document document){
            this->documents.push_back(document);
        }

        bool deleteDocument(std::string id) {
            for(int i = 0; i < documents.size(); i++){
                Document doc = documents.at(i);
                if(doc.getId()==id){
                    documents.erase(documents.begin()+i);
                    return true;
                }else{
                    return false;
                }
                }
            }   

        void showInfo(){
            for (const Document& doc : documents){
                s
            }    
        }

        void searchByBook(){

        }     
};

int main(){{

}}