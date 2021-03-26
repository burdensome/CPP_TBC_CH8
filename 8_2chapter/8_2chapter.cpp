#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date {
private: // access specifier -> private가 기본. 캡슐화를 해버린다는 의미 
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
    const int& getDay() {      //private 멤버변수를 가져올 땐 그냥 int getDay를 하든지 레퍼런스를 쓰면 const int& getDay()를 사용
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
    // copy.setDate(today.setMonth(), today.getDay(), today.getYear()); 처럼 데이터를 가지고 오는게 너무 힘드니
    // copy.setDate(today); <-- 이런식으로 가져오면 편하겠지?
    copy.copyFrom(today);
  

    cout << today.getDay() << endl;
    return 0;
}
