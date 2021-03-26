#include <iostream>
using namespace std;

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    //���� �����ڰ� �ƿ� ������ 
    // Fraction(){} �̷��� default �����ڰ� �����ǰ� �ȴ�. �׷��� main���� Franction frac; �� ���𰡴�
    // �߿��Ѱ� Fraction frac(); ���� �����ϴ°� �ƴϰ� Fraction frac; ���� �ؾ��Ѵ�. �Ķ���Ͱ� ���°� �ܿ�!! �߿�!!
    // �����ڸ� �ϳ��� ����� ���� �⺻�����ڰ� �������� �ʴ´�.
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
    // frac ������ ������ �Լ� ȣ���̵Ǵµ� �������� parameter�� �ƹ� �͵� ���� ��쿡 ��ȣ�� ���� �Ǿ�����
    // �׷��� �Ʒ�ó�� Fraction frac; ���� ������ ��. �ٵ� ��� �����ڵ� �Լ��ε� ������ �򰥸��Ե�
    // parameter�� ���� ��쿡�� 
    //Fraction frac; 
    //frac.print();
    //Fraction frac;
    //Fraction one_thirds{ 1.0, 3 };
    Fraction one_thirds( 1.0,3 );
    one_thirds.print();
    

    return 0;
}
