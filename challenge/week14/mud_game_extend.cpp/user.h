#pragma once
#include<iostream>
#include<string>

using namespace std;



	class User
	{
	private:
\
	public:
		int hp = 20;   // 유저 체력을 저장할 변수

		User(int hp) {
			hp = 20;
		}

		void IncreaseHP(int inc_hp );
		bool CheckUser(User user);
		void DecreaseHP(int usermove);
		int GetHP(int userhp);
		void DoAttack();
	};

	class Magician : public User
	{
	public:
		Magician(int hp) : User(hp) {}

		void DoAttack()  {
			cout << "마법 사용!" << endl;
		}

	
	};

	class Warrior : public User
	{
	public:
		Warrior(int hp) : User(hp) {}

		void DoAttack()  {
			cout << "베기 사용!" << endl;
		}
	};