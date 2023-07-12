#include<iostream>


class Galaxy
{
	// state - member variable
private:
	char ModelName[10]{};

public:
	int Color{};
	int Weight{};

	// behaviour - member function
	void Phone()
	{
		std::cout << "따르릉" << std::endl;
	}
	void Message()
	{
		std::cout << "메시지" << std::endl;
	}

};

class Computer
{
public:
	int Price{};
	int Color{};
	// 가격 표시
	int UserPrice()
	{
		std::cout << "가격은 0000원 입니다." << std:: endl;
		return 0;
	}


private:
	int Power{};
	char Mainboard{};
	void ComputerInfo()
	{
		std::cout << "파워는 0000와트 입니다." << std::endl;
	}
	
};

int main()
{
	// Instantiate ( 인스턴스 화 )
	/*Galaxy myPhone;

	myPhone.Color = 1;
	myPhone.Phone();*/

	Computer myComputer;
	
	myComputer.UserPrice();
}