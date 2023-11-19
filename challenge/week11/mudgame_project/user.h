#pragma once
#include<iostream>
#include<string>

using namespace std;



	class User
	{
	private:



	public:
		int hp = 20;   // 유저 체력을 저장할 변수

		User(int hp) {
			hp = 20;
		}

		void IncreaseHP(int inc_hp );
		bool CheckUser(User user);
		void DecreaseHP(int usermove);
		int GetHP(int userhp);
	};

