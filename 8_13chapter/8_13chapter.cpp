// ��ü�� ��� �� �� �̸��� ���� ������ �������� �ʰ� �ٷ� ����ϴ� �͸�ü�� ���� ����
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
    //�Ʒ� ������ ���ŷӴٶ�� ���� �� ���� ����
    /*A a;
    a.print();*/
    //�׷��� �Ʒ��� ���� �۾��� �� �� ����
    //��� �Ʒ��� ���� �ϸ� �Ź� �����ڿ� �Ҹ��ڰ� �����ǰ� �ȴ�.
   /* A().print();
    A().print();*/
    // �׷��� �Ʒ��� �����ϸ� ������ �����ѹ��ϰ� �������� �Ҹ��� ȣ��~
  /*  A a(1);
    a.print();
    a.print();*/
    //�Ʒ��� �͸�ü�� �ν��Ͻ� ��ü�� ���� ����ϸ�
    A a(1);
    a.print();
    A(1).print();

    return 0;
}