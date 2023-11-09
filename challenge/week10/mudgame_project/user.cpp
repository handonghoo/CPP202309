#include"user.h"
using namespace std;


void User::DecreaseHP(int dec_hp) {
	hp = 20 - dec_hp;

}



int User::GetHP(int userhp) {
	cout << "현재 HP : "<<userhp ;
	return userhp;
}