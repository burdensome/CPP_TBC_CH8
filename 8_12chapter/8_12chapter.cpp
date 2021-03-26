// ģ���Լ��� cŬ���� friend
#include <iostream>
using namespace std;

class A;    // ���漱��, forward declaration -> ������ϰ� �ڵ� ���� �� �����ʴ�. 

class B {
private:
    int m_value = 2;

public:
    // �Լ� ������ class���ο� �ְԵǸ� friend�� �����ϰ� friend�� �����Ϸ����ص�
    /*void doSomething(A& a) {
        cout << a.m_value << endl;
    }*/

    void doSomething(A& a);
    //friend void doSomething(A& a, B& b);
};

class A
{
private:
    int m_value = 1;

    //friend class B;
    //friend void doSomething(A& a, B& b);
    friend void B::doSomething(A& a);   // class B�� ���� �� ���ֱⰡ �� �׷��ٺ��� �̷��� �ɱ� �غ��� �ȵȴ�.
};


void B::doSomething(A& a) {
    cout << a.m_value << endl;
}

//void doSomething(A& a, B& b) {
//    cout << a.m_value << " " << b.m_value << endl;
//}

int main()
{
    A a;
    B b;
    b.doSomething(a);

    return 0;
}