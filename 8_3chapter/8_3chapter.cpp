#include <iostream>
using namespace std;

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    //만약 생성자가 아예 없으면 
    // Fraction(){} 이렇게 default 생성자가 생성되게 된다. 그래서 main에서 Franction frac; 로 선언가능
    // 중요한건 Fraction frac(); 으로 선언하는게 아니고 Fraction frac; 으로 해야한다. 파라미터가 없는건 외워!! 중요!!
    // 생성자를 하나라도 만들면 위의 기본생성자가 생성되지 않는다.
   /* Fraction() {
        m_numerator = 1;
        m_denominator = 1;
    }*/

    Fraction(const int& num_in = 1, const int& den_in = 1) {
        m_numerator = num_in;
        m_denominator = den_in;

        cout << "Fraction() constructor " << endl;
    }

    void print() {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};
int main()
{
    // frac 다음에 생성자 함수 호출이되는데 생성자의 parameter가 아무 것도 없을 경우에 괄호를 빼게 되어있음
    // 그래서 아래처럼 Fraction frac; 으로 선언이 됨. 근데 사실 생성자도 함수인데 오히려 헷갈리게됨
    // parameter가 있을 경우에는 
    //Fraction frac; 
    //frac.print();
    //Fraction frac;
    //Fraction one_thirds{ 1.0, 3 };
    Fraction one_thirds( 1.0,3 );
    one_thirds.print();
    

    return 0;
}
