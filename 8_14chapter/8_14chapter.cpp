// class�� �����ҋ� �� ��ɿ� ���缭 Ư���� �ڷ����� Ư���� ���� ����� ���� ����
// �̶��� �� �ڷ����� �ٸ��뼭 �̰� �������� ���� �ʿ䰡 ����
// class�ȿ����� �� �ڷ����� ���� ���� �ֽ��ϴ�.
// Nested type
#include <iostream>
using namespace std;



class Fruit {
public:
	enum class FruitType {
		APPLE, BANANA, CHERRY,
	};

	class InnerClass {

	};

	struct InnerStruct {

	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType() == Fruit::FruitType::APPLE) {
		cout << "Apple" << std::endl;
	}
	return 0;
}