#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {
private: // access specifier -> private�� �⺻. ĸ��ȭ�� �ع����ٴ� �ǹ� 
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(const int& month_input, const int& day_input, const int& year_input) {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    void setMonth(const int& month_input) {
        m_month = month_input;
    }

    // setDay, setYear ...
    const int& getDay() {      //private ��������� ������ �� �׳� int getDay�� �ϵ��� ���۷����� ���� const int& getDay()�� ���
        return m_day;
    }

    void copyFrom(const Date& original) {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }
};

int main()
{
    Date today; // { 8, 4, 2025 };
    today.setDate(8, 4, 2025);
    today.setMonth(10);

    Date copy;
    // copy.setDate(today.setMonth(), today.getDay(), today.getYear()); ó�� �����͸� ������ ���°� �ʹ� �����
    // copy.setDate(today); <-- �̷������� �������� ���ϰ���?
    copy.copyFrom(today);
  

    cout << today.getDay() << endl;
    return 0;
}
