// 위임생성자
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int     m_id;
    string  m_name;

public:
    // 현재 아래의 문제점은 생성자 2개가 m_name의 입력을 받는게 2개가 되기 때문이다
    // 생성자를 만들 때 우리는 입력은 한 곳에서만 받는 것이 좋다.
    // 그러니 아래  (1) 에서 처럼 (2)와 동일하게 해주는 것은 좋지 않다.
    // 그래서 해결방법은 (3)처럼 생성자에서 생성자를 가져다가 쓰는 것을 위임생성자라고 부릅니다
    // (2)에서 할 일을 입력 1개만 받아서 내가 default값으로 m_id를 0을 넣어줄께 이런 이야기다. student(0, name_in)
    // 근데 홍정모 교수님은 하는 방식이 (4)과 같이 
        // : m_id(0), m_name(name_in)  // --> (1) 
    Student(const string& name_in) // --> (3)
    {
        init(0, name_in);
    }

    Student(const int& id_in, const string& name_in)
        // : m_id(id_in), m_name(name_in) // --> (2)
    {
        init(id_in, name_in); // --> (5) init 생성자를 만든 뒤 이와 같이 사용함
    }

    void init(const int& id_in, const string& name_in) {    // --> (4)
        m_id = id_in;
        m_name = name_in;
    }
    
    void print() {
        cout << m_id << " " << m_name << endl;
    }
};

int main()
{
    Student st1(0, "Jack Jack");
    st1.print();

    Student st2("Dash");
    st2.print();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
