// this 포인터와 연쇄 호출
// this는 현재 메모리가 잡힌 객체의 instance의 주소값을 말한다.
// 실제로 해당 주소값에서 포인터를 마치 class를 가르치는 것과 같은데
// 그렇다면 this->(여기엔 현재 class에 들어있는 public을 가르칠 수 있다.
// 또 그렇다면 (*this)를 한다면 마치 (*this).불라불라 와 같다. 2회차에선 더 업글이 되어있겠지?
#include <iostream>
using namespace std;

class Simple {
private:
    int m_id;
    
public:
    Simple(int id) {
        // 현재 주소를 가지고있는 instance에서 setID란 함수를 사용한다는 의미로 생각하면 됨.
        this->setID(id);    // this가 숨어있음. 그냥 setID(id);로 사용해도 되는데 이렇게 꺼내도됨
        this->m_id;

        cout << this << endl;   // 자기 자신의 주소를 출력해주는 this
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
