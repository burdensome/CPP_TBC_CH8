#include <iostream>
using namespace std;

class Something {
public:
    int m_value = 0;

    // copy constructor로 불리는데
    // 아래와 같이 default copy constructor가 
    // 생성되게 된다. 
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
    // 멤버function이 const라고 박아놔야 아래 선언된 외부 함수에서 const 파라미터로 사용 가능하다.
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