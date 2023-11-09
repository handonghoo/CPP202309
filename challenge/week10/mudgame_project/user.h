#pragma once
#include<iostream>
#include<string>

using namespace std;

	class User
	{
		
	public:
		int hp;   // 유저 체력을 저장할 변수

		void DecreaseHP(int usermove);
		int GetHP(int userhp);
	};

