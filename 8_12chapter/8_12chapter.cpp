// 친구함수와 c클래스 friend
#include <iostream>
using namespace std;

class A;    // 전방선언, forward declaration -> 디버깅하고 코드 읽을 때 좋지않다. 

class B {
private:
    int m_value = 2;

public:
    // 함수 내용을 class내부에 넣게되면 friend로 생각하고 friend를 진행하려고해도
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
    friend void B::doSomething(A& a);   // class B가 모든걸 다 해주기가 좀 그렇다보니 이렇게 될까 해봐도 안된다.
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