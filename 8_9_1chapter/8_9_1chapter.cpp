#include <iostream>
#include <string>
using namespace std;

class Something {
public:
    string m_value = "default";
    
    // const string& getValue() const �м�!! �Ʒ� �ϳ��� ����.
    // const(return Ÿ���� const), string&(return Ÿ���� string�� ���۷���)
    // getValue()(�Լ��̸�), const(��� function�� const�� ����� ��)
    // �̰� ����� ���ĸ� �Լ��� �Ķ��Ʈ�� �Լ��� �����ε��� �Ѵٰ� �����ߴµ�
    // �Լ� �ڿ� const�� �������ν� �Լ��� �����ε��� �����ϱ� �����̴�.
    // ��� function�� const�� �ȴٴ� ���� �Լ� �ȿ��� ��������� �ǵ帮�� �ʰڴ�
    // ��� �����̶�� �� �� ����.
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

    // �Ʒ��� ���� �ϸ� ��ġ ��������� const�� �Ǵ� �� ó�� ��.
    const Something something2;
    something2.getValue();  // = 1004 xxxx �ȵ�
    return 0;
}