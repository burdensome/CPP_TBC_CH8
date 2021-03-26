// github 테스트 과연 업로드가 될 것인가?
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Object
// Friend : sname, address, age, height, weight, ...
//			print()
// 객체라는건 위와 같은 데이타와 Friedn와 함수를 묶어서 사용하는데
// 객체라는걸 프로그래밍 언어로 사용하면 class를 정의하고 사용하는걸 말함

class Friend {			
public: // access specifier (public, private, protected)  처럼 쓰이고, 구조체(structure)에선 public이런게 없음
	string	m_name;	// 멤버변수에 m_ 를 하는 경우도있고 
	string	_address; // 언더스코어 _ 를 붙이는 경우도 있고
	int		age_;	// 뒤에 언더스코어를 붙이는 경우도 있다. (구글 스타일)
	double height;
	double weight;

	// 구조체(structure)에는 아래와 같이 함수를 안쓰는게 통상적(쓸 수 있지만..)
	void print()
	{
		cout << m_name << " " << _address << " " << age_ << " " <<
			" " << height << " " << weight << endl;
	}
};



void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " <<
		" " << height << " " << weight << endl;
}

int main() {
	Friend jj{"Jack Jack","Uptown", 2, 30, 10}; // instanciation, instance
	// jj 처럼 메모리에 존재 하냐 안하냐 그걸 말하는게 instanciatin 혹은 instance가 되었다.
	// Friend는 메모리를 찍어보면 아직 instanciation이 되어있지 않다.
	cout << &jj << endl;

	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto& ele : my_friends)
		ele.print();

	//vector<string> name_vec;
	//vector<string> addr_vec;
	//vector<int>		age_vec;
	//vector<double> height_vec;
	//vector<double> weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

	return 0;
}
