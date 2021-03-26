#include <iostream>
using namespace std;

class IntArray {
private:
    int* m_arr = nullptr;   // 근데 그냥 vector를 써버리면 소멸자도 필요 없지!
    int m_length = 0;
    
public:
    IntArray(const int length_in) {
        m_length = length_in;
        m_arr = new int[m_length];

        cout << "Constructor " << endl;
    }

    ~IntArray() {
        if(m_arr != nullptr) // null ptr을 지우려고하면 문제가되니 이렇게 null ptr이 아닐 떄 지운다
            delete[] m_arr;
    }

    int size() { return m_length; }
};

int main()
{
    while (true) {
        IntArray my_int_arr(10000);
    }
    return 0;
}