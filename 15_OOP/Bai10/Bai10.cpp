/*Bài tập tự luyện

Để xử lý văn bản người ta xây dựng lớp Text  có thuộc tính riêng là một xâu ký tự.

Yêu cầu 1: Xây dựng hàm khởi tạo Text(), Text(String st).

Yêu cầu 2: Xây dựng phương thức đếm số từ của văn bản.

Yêu cầu 3: Xây dựng phương thức đếm số lượng ký tự A( không phân biệt hoa thường) của văn bản.

Yêu cầu 4: Chuẩn hoá văn bản theo tiêu chuẩn sau: 
Ở đầu và cuối sâu không có ký tự trống, ở giữa sâu không có 2 hoặc nhiều hơn các ký tự khoảng trắng kiền kề nhau.*/

#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Text {
private:
    string text;
public:
    Text() {}
    Text(string st) {
        text = st;
    }
    int countWords() {

        regex pattern("\\b\\w+\\b");
        smatch matches;
        int count = 0;

        string tx = text;
        regex_search(tx, matches, pattern);

        while (regex_search(tx, matches, pattern)) {
            count++;
            tx = matches.suffix().str();
        }
        return count;
    }
    int countA() {
        regex pattern("A|a");
        smatch matches;
        string tx = text;
        int count = 0;
        while (regex_search(tx, matches, pattern)) {
            count++;
            tx = matches.suffix().str();
        }
        return count;
    }
    void normalizeText() {
        // Remove leading/trailing spaces
        text = regex_replace(text, regex("^\\s+|\\s+$"), "");

        // Replace multiple consecutive spaces with a single space
        text = regex_replace(text, regex("\\s+"), " ");
    }
    string Get_Text(){ return text;}
};

int main() {
    string inputText = "Hoc lap  trinh .df c++ can ban.";
    // cout << "Enter text: ";
    // getline(cin, inputText);

    Text text(inputText);

    text.normalizeText();
    cout << "Normalized text: " << text.Get_Text() << endl;

    cout << "Number of words: " << text.countWords() << endl;
    cout << "Number of 'A' characters: " << text.countA() << endl;

    return 0;
}