#include<iostream>
#include"Player.h"


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

class Car
{
	// default access modifier : private
	// Ŭ�������� ������������ �⺻ ���� private
	// ���������ڸ� ������� ������ private������.

public:
	int wheels{};
	int speed{};
	int weight{};

	void Start();
	void Drvie();
	void Parking();
};

int main()
{
	// Instantiate ( �ν��Ͻ� ȭ )
	/*Galaxy myPhone;

	myPhone.Color = 1;
	myPhone.Phone();*/

	//Computer myComputer;
	//
	//myComputer.UserPrice();


	// Ŭ����(Car)�� �ν��Ͻ�ȭ(Ramborgini)
	Car Ramborgini;

	Ramborgini.wheels = 4;
	Ramborgini.speed = 100;

	// �ν��Ͻ����� ȣ���� �Լ��� *�� ���·� �Ѿ.
	// call by reference
	// �ڱ� �ڽ��� ������ �� this�� �����.
	Ramborgini.Start();

	int health{};

	Player Wolf;

	Player::Sword Sword;
	Player::Costume costume = Player::Costume::Summer;
}


// ���� �ذ� ������ = ::



// Ŭ������ �ִ� �Լ��� ������ �� ǥ���
void Car::Start()
{
	speed = 0;
	std::cout << "Engine Start!" << std::endl;
}

// C++������ ����ü�� ��� ����� public�� Ŭ������ ����
/*
- ����ü : ��� �����鸸 ����
- Ŭ���� : ��� ���� + ��� �Լ�
*/
