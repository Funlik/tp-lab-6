#include "../include/Tester.h"

Tester::Tester(int _id, std::string _name, int _worktime, double _payment)
        : Engineer(_id, _name, _worktime, _payment) {

}

std::string Tester::getPosition() {
    return position;
}