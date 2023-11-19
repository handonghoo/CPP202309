#include"user.h"
using namespace std;

//체력 감소 함수
void User::DecreaseHP(int dec_hp) {
	hp = 20 - dec_hp;
}


// 체력 출력 함수
int User::GetHP(int userhp) {
	cout << "현재 HP : "<<userhp ;
	return userhp;
}

//체력이 0이하인지 체크하는 함수
bool User::CheckUser(User user) {
	if (hp <= 0) {
		return false;
	}
	else
	{
		return true;
	} 
}

// 체력 증가 함수
void User::IncreaseHP(int inc_hp) {
	hp += inc_hp;	
}