// class를 구현할떄 그 기능에 맞춰서 특정한 자료형을 특별히 만들어서 사용할 떄가 있음
// 이때는 이 자료형이 다른대서 이곳 저곳에서 사용될 필요가 없고
// class안에서만 그 자료형이 사용될 때가 있습니다.
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