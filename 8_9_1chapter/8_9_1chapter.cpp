#include <iostream>
#include <string>
using namespace std;

class Something {
public:
    string m_value = "default";
    
    // const string& getValue() const 분석!! 아래 하나씩 보자.
    // const(return 타입을 const), string&(return 타입이 string의 레퍼런스)
    // getValue()(함수이름), const(멤버 function을 const로 만드는 것)
    // 이게 웃긴게 뭐냐면 함수의 파라미트로 함수의 오버로딩을 한다고만 생각했는데
    // 함수 뒤에 const를 붙임으로써 함수의 오버로딩이 가능하기 때문이다.
    // 멤버 function이 const가 된다는 것은 함수 안에서 멤버변수를 건드리지 않겠다
    // 라는 선언이라고 볼 수 있음.
    const string& getValue() const {
        cout << "const version" << endl;
        return m_value; }
    string& getValue() { 
        cout << "non-const version" << endl;
        return m_value; }

};


int main()
{
    Something something;
    something.getValue() = 10;

    // 아래와 같이 하면 마치 멤버변수가 const가 되는 것 처럼 됨.
    const Something something2;
    something2.getValue();  // = 1004 xxxx 안됨
    return 0;
}