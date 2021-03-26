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
        :m_value(123)//, s_value(1024) -> static��������� �����ڿ��� �ʱ�ȭ�� �ȵȴ�.
    {}

    static int getValue() {
        return s_value; // ��������Լ����� static������ ������ �� ���ΰž�.
        //return this->s_value; // ������� this->s_value�� �� �� ������ static���� this�� ������
        //return m_value; // static��� �Լ����� static�� �ƴ� ��������� �� �� ����.
        //return this->m_value // static�� �ƴ� ������ this�� ������Ѵ� �̷��� �ƴϰ� this ��ü�� ������� ���Ѵ�.
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
    
    // �ѹ� ������ ���� �� �� �ֵ��� �����غ��� ���� ���� �� ���� ����. �Ӹ��ӿ� �׷����� �����ϱ� ���� ��ư
    // �켱 �Ʒ� (0)�� �����غ��� ����Ÿ�� int�� SomethingŬ������ �������Լ��� �����Ͽ� Something class�� �ִ�
    //  temp�Լ��� �ּҰ��� �־��ش�. Something class�� �Լ� �ּҰ��� �־��� �� �ִ°� class�� ����Լ���
    //  class�� ������ instance�� ���� �� �� �����ؼ� �����Ǵ°� �ƴ� � �ּҰ��� �ش� �Լ��� ����Ǿ��ְ�
    //  �� ����Ǿ��ִ� �Լ��� this�� �̿� this->temp �̷������� �ҷ����� �Ǵ� ���̴�. �׷��� ������
    //  class�Լ��� �ּҰ��� ���� �� �� �ִ� ���̴�.
    //  �׸��� (1)�� �����غ��� ������ ������ Something s2; �� Something Ŭ������ s2�ν��Ͻ��� ���� fptr�������� ��
    //  �� �ش� �Լ��� �����ϴ� ���� �ǹ�����. �� �ش� �Լ� ���� ����ض�!
    //  (2) �� �����غ��� getValue��ü�� static ����Լ����� SomethingŬ������ �������Լ��� ���� �ϴ°� ���� �ʴ´�.
    //  static�Լ��� ������ ����� class instance���� ������ �ּҸ� ������ ���̱� ������
    //  �װ� �޾ƿ��� �������Լ� ���� � instance�� �Լ������Ͱ� �ƴ� �׳� ��ü�� �Լ������ͷ� �����Ѵ�.
    //  �װ��� �ٷ� (3) �� �ȴ�.
    //  ���������� (4)�� �����Ѵٸ� fptr2()�� �Լ��� ������ �� �ְ� �ȴ�.

    int (Something:: * fptr1)() = &Something::temp;         // (0)   
    
    cout << (s2.*fptr1)() << endl;                          // (1)
    //int (Something:: * fptr2)() = &Something::getValue;   // (2)
    int (* fptr2)() = &Something::getValue;                 // (3)
    cout << fptr2() << endl;                                // (4)


    
    
    return 0;
}
