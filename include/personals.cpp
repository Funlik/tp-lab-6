#include <string>
#include "emploee.h"
#include "Personals.h"
#include "Interfaces.h"
#include <map>
using namespace std;


Personal::Personal(int ID, string FIO, int BASE) : Employee(ID, FIO) {
	this->base = BASE;

}
int Personal::CalcHourPaym(){
	int tmp_paym= this->base * this->worktime;

	return tmp_paym;


}
void Personal::CalcPayment() {
	this->payment += this-> CalcHourPaym();

}
Cleaner::Cleaner(int ID, string FIO, int BASE) : Personal(ID, FIO, BASE) {}
Driver::Driver(int ID, string FIO, int BASE) : Personal(ID, FIO, BASE) {}