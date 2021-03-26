#include <iostream>
using namespace std;

class Something {
public:
    int m_value = 0;

    // copy constructor�� �Ҹ��µ�
    // �Ʒ��� ���� default copy constructor�� 
    // �����ǰ� �ȴ�. 
    Something(const Something& st_in) {
        m_value = st_in.m_value;

        cout << "Copy constructor" << endl;
    }

    Something() {
        cout << "Constructor" << endl;
    }

    void setValue(int value) 
    {
        m_value = value;
    }
    // ���function�� const��� �ھƳ��� �Ʒ� ����� �ܺ� �Լ����� const �Ķ���ͷ� ��� �����ϴ�.
    int getValue() const{
        return m_value;
    }
};

void print(const Something &st) {
    cout << &st << endl;
    cout << st.getValue() << endl;
}

int main()
{
    Something something;
    ////something.setValue(3);
    //cout << something.getValue() << endl;
    cout << &something << endl;
    print(something);
    return 0;
}