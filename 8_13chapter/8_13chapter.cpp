// 객체를 사용 할 떄 이름이 붙은 변수를 선언하지 않고 바로 사용하는 익명객체에 대한 설명
#include <iostream>
using namespace std;

class A {
public:
    int m_value;

    A(const int& input)
        : m_value(input)
    {
        cout << "Constructor" << endl;
    }

    ~A() {
        cout << "Destructor" << endl;
    }

    void print() {
        cout << m_value << endl;
    }
};

int main()
{
    //아래 내용이 번거롭다라고 생각 될 떄가 있음
    /*A a;
    a.print();*/
    //그래서 아래와 같이 작업을 할 수 있음
    //대신 아래와 같이 하면 매번 생성자와 소멸자가 생성되게 된다.
   /* A().print();
    A().print();*/
    // 그래서 아래와 같이하면 생성자 생성한번하고 마지막에 소멸자 호출~
  /*  A a(1);
    a.print();
    a.print();*/
    //아래는 익명객체와 인스턴스 객체를 같이 사용하면
    A a(1);
    a.print();
    A(1).print();

    return 0;
}