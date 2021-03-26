#include <iostream>
using namespace std;

class Something {
public:
    //static const int m_value = 1;
    static constexpr int m_value = 1;   // single turn?? 이란 설명을 해주셨는데 뭔소린지 ㅎㅎ
};

// int Something::m_value = 1; // statci 변수일 경우에 cpp파일에 정의해야함. define in cpp

int main()
{
    cout << &Something::m_value << " " << Something::m_value << endl;

    Something st1;
    Something st2;

    //st1.m_value = 2;


    cout << &st1.m_value << " " << st1.m_value << endl;
    cout << &st2.m_value << " " << st2.m_value << endl;

    //Something::m_value = 1024;

    cout << &Something::m_value << " " << Something::m_value << endl;

    return 0;
}