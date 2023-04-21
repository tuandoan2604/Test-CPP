#include <vector>
#include <iostream>
#include <stack>

template <typename T>
std::vector<T> stackToVector( std::stack<T> stack, bool reverseItems )
{
    std::vector<T> items(stack.size());

    while (stack.size() > 0)
    {
        T item = stack.top();
        stack.pop();

        if(reverseItems){
            items.insert( items.begin() , items);
        }
        else{
            items.push_back(item);
        }
    }
    return items;
    
}


/*
Select the computational complexity of the stackToVector function if the reverseItems argument is false:
 O(1)
 O(n)  => chọn đáp án này 
 O(n*log(n))
 O(n^2)
Giải thích: Lý do là hàm lặp qua toàn bộ ngăn xếp và đẩy từng phần tử về phía sau vectơ bằng cách sử dụng push_back(),
hàm này có độ phức tạp thời gian không đổi là O(1), nhưng nó được thực hiện n lần trong đó n là kích thước của ngăn xếp,
dẫn đến độ phức tạp thời gian là O(n).
Select the computational complexity of the stackToVector function if the reverseItems argument is true:
 O(1)
 O(n)
 O(n*log(n))
 O(n^2) => Chọn đáp án này
Giải thích: Hàm insert có độ phức tạp O(n), nhưng vì nó được thực hiện n lần trong đó n là kích thước của ngăn xếp , 
độ phức tạp thời gian tổng thể trở thành O(n^2).
*/