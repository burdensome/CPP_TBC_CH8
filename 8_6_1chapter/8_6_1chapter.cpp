#include <iostream>
using namespace std;

class IntArray {
private:
    int* m_arr = nullptr;   // �ٵ� �׳� vector�� ������� �Ҹ��ڵ� �ʿ� ����!
    int m_length = 0;
    
public:
    IntArray(const int length_in) {
        m_length = length_in;
        m_arr = new int[m_length];

        cout << "Constructor " << endl;
    }

    ~IntArray() {
        if(m_arr != nullptr) // null ptr�� ��������ϸ� �������Ǵ� �̷��� null ptr�� �ƴ� �� �����
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