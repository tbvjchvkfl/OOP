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
		std::cout << "������" << std::endl;
	}
	void Message()
	{
		std::cout << "�޽���" << std::endl;
	}

};

class Computer
{
public:
	int Price{};
	int Color{};
	// ���� ǥ��
	int UserPrice()
	{
		std::cout << "������ 0000�� �Դϴ�." << std:: endl;
		return 0;
	}


private:
	int Power{};
	char Mainboard{};
	void ComputerInfo()
	{
		std::cout << "�Ŀ��� 0000��Ʈ �Դϴ�." << std::endl;
	}
	
};

int main()
{
	// Instantiate ( �ν��Ͻ� ȭ )
	/*Galaxy myPhone;

	myPhone.Color = 1;
	myPhone.Phone();*/

	Computer myComputer;
	
	myComputer.UserPrice();
}