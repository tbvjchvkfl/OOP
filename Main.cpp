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

class Car
{
	// default access modifier : private
	// 클래스에서 접근제한자의 기본 값은 private
	// 접근제한자를 명시하지 않으면 private상태임.

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
	// Instantiate ( 인스턴스 화 )
	/*Galaxy myPhone;

	myPhone.Color = 1;
	myPhone.Phone();*/

	//Computer myComputer;
	//
	//myComputer.UserPrice();


	// 클래스(Car)를 인스턴스화(Ramborgini)
	Car Ramborgini;

	Ramborgini.wheels = 4;
	Ramborgini.speed = 100;

	// 인스턴스에서 호출한 함수는 *의 형태로 넘어감.
	// call by reference
	// 자기 자신을 참조할 땐 this를 사용함.
	Ramborgini.Start();

	int health{};

	Player Wolf;

	Player::Sword Sword;
	Player::Costume costume = Player::Costume::Summer;
}


// 범위 해결 연산자 = ::



// 클래스에 있는 함수를 정의할 때 표기법
void Car::Start()
{
	speed = 0;
	std::cout << "Engine Start!" << std::endl;
}

// C++에서는 구조체는 모든 멤버가 public인 클래스와 동일
/*
- 구조체 : 멤버 변수들만 존재
- 클래스 : 멤버 변수 + 멤버 함수
*/
