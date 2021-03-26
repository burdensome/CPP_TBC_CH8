// this �����Ϳ� ���� ȣ��
// this�� ���� �޸𸮰� ���� ��ü�� instance�� �ּҰ��� ���Ѵ�.
// ������ �ش� �ּҰ����� �����͸� ��ġ class�� ����ġ�� �Ͱ� ������
// �׷��ٸ� this->(���⿣ ���� class�� ����ִ� public�� ����ĥ �� �ִ�.
// �� �׷��ٸ� (*this)�� �Ѵٸ� ��ġ (*this).�Ҷ�Ҷ� �� ����. 2ȸ������ �� ������ �Ǿ��ְ���?
#include <iostream>
using namespace std;

class Simple {
private:
    int m_id;
    
public:
    Simple(int id) {
        // ���� �ּҸ� �������ִ� instance���� setID�� �Լ��� ����Ѵٴ� �ǹ̷� �����ϸ� ��.
        this->setID(id);    // this�� ��������. �׳� setID(id);�� ����ص� �Ǵµ� �̷��� ��������
        this->m_id;

        cout << this << endl;   // �ڱ� �ڽ��� �ּҸ� ������ִ� this
    }

    void setID(int id) { m_id = id; }
    int getID() { return m_id; }
};

int main()
{
    Simple s1(1), s2(2);
    s1.setID(2);
    s2.setID(4);


    cout << &s1 << " " << &s2 << endl;


    return 0;
}
