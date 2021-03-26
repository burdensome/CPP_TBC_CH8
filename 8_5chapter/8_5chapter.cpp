// ���ӻ�����
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int     m_id;
    string  m_name;

public:
    // ���� �Ʒ��� �������� ������ 2���� m_name�� �Է��� �޴°� 2���� �Ǳ� �����̴�
    // �����ڸ� ���� �� �츮�� �Է��� �� �������� �޴� ���� ����.
    // �׷��� �Ʒ�  (1) ���� ó�� (2)�� �����ϰ� ���ִ� ���� ���� �ʴ�.
    // �׷��� �ذ����� (3)ó�� �����ڿ��� �����ڸ� �����ٰ� ���� ���� ���ӻ����ڶ�� �θ��ϴ�
    // (2)���� �� ���� �Է� 1���� �޾Ƽ� ���� default������ m_id�� 0�� �־��ٲ� �̷� �̾߱��. student(0, name_in)
    // �ٵ� ȫ���� �������� �ϴ� ����� (4)�� ���� 
        // : m_id(0), m_name(name_in)  // --> (1) 
    Student(const string& name_in) // --> (3)
    {
        init(0, name_in);
    }

    Student(const int& id_in, const string& name_in)
        // : m_id(id_in), m_name(name_in) // --> (2)
    {
        init(id_in, name_in); // --> (5) init �����ڸ� ���� �� �̿� ���� �����
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
