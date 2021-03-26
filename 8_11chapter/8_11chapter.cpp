#include <iostream>
using namespace std;
class Something
{
public:
    //inner class
    class _init {
    public:
        _init()
        {
            s_value = 9876;
        }
    };

private:
    static int s_value;
    int m_value;
    
    static _init s_initializer;

public:
        Something()
        :m_value(123)//, s_value(1024) -> static멤버변수는 생성자에서 초기화가 안된다.
    {}

    static int getValue() {
        return s_value; // 정적멤버함수에서 static변수로 접근을 한 것인거야.
        //return this->s_value; // 원래라면 this->s_value가 될 것 같지만 static에선 this를 못쓰고
        //return m_value; // static멤버 함수에선 static이 아닌 멤버변수를 쓸 수 없다.
        //return this->m_value // static이 아닌 변수를 this를 못사용한다 이런게 아니고 this 자체를 사용하지 못한다.
    }

    int temp() {
        return this->s_value;
    }
};

int Something::s_value = 1024;
Something::_init Something::s_initializer;

int main()
{
    cout << Something::getValue() << endl;

    Something s1, s2;
    cout << s1.getValue() << endl;
    //cout << s1.s_value << endl;
    
    // 한번 남에게 설명 할 수 있도록 생각해보자 내가 현재 쓸 수는 없다. 머릿속에 그려지지 않으니깐 ㅎㅎ 암튼
    // 우선 아래 (0)을 생각해보면 리턴타입 int인 Something클래스의 포인터함수를 선언하여 Something class에 있는
    //  temp함수의 주소값을 넣어준다. Something class의 함수 주소값을 넣어줄 수 있는건 class의 멤버함수가
    //  class를 여러개 instance로 선언 할 때 복사해서 생성되는게 아닌 어떤 주소값에 해당 함수가 저장되어있고
    //  그 저장되어있는 함수를 this를 이용 this->temp 이런식으로 불러오게 되는 것이다. 그렇기 떄문에
    //  class함수의 주소값을 저장 할 수 있는 것이다.
    //  그리고 (1)을 생각해보면 위에서 선언한 Something s2; 는 Something 클래스의 s2인스턴스에 대한 fptr포인터의 값
    //  즉 해당 함수를 실행하는 것이 되버린다. 즉 해당 함수 값을 출력해라!
    //  (2) 를 생각해보면 getValue자체가 static 멤버함수여서 Something클래스의 포인터함수를 정의 하는게 맞지 않는다.
    //  static함수는 여러개 선언된 class instance에서 동일한 주소를 가지고 쓰이기 때문에
    //  그걸 받아오는 포인터함수 선언도 어떤 instance의 함수포인터가 아닌 그냥 전체의 함수포인터로 선언한다.
    //  그것이 바로 (3) 이 된다.
    //  마지막으로 (4)을 실행한다면 fptr2()의 함수를 실행할 수 있게 된다.

    int (Something:: * fptr1)() = &Something::temp;         // (0)   
    
    cout << (s2.*fptr1)() << endl;                          // (1)
    //int (Something:: * fptr2)() = &Something::getValue;   // (2)
    int (* fptr2)() = &Something::getValue;                 // (3)
    cout << fptr2() << endl;                                // (4)


    
    
    return 0;
}
