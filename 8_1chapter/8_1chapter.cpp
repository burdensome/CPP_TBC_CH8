#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Object
// Friend : sname, address, age, height, weight, ...
//			print()
// ��ü��°� ���� ���� ����Ÿ�� Friedn�� �Լ��� ��� ����ϴµ�
// ��ü��°� ���α׷��� ���� ����ϸ� class�� �����ϰ� ����ϴ°� ����

class Friend {			
public: // access specifier (public, private, protected)  ó�� ���̰�, ����ü(structure)���� public�̷��� ����
	string	m_name;	// ��������� m_ �� �ϴ� ��쵵�ְ� 
	string	_address; // ������ھ� _ �� ���̴� ��쵵 �ְ�
	int		age_;	// �ڿ� ������ھ ���̴� ��쵵 �ִ�. (���� ��Ÿ��)
	double height;
	double weight;

	// ����ü(structure)���� �Ʒ��� ���� �Լ��� �Ⱦ��°� �����(�� �� ������..)
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
	// jj ó�� �޸𸮿� ���� �ϳ� ���ϳ� �װ� ���ϴ°� instanciatin Ȥ�� instance�� �Ǿ���.
	// Friend�� �޸𸮸� ���� ���� instanciation�� �Ǿ����� �ʴ�.
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