#include "../include/Programmer.h"

Programmer::Programmer(int _id, std::string _name, int _worktime, double _payment)
                            : Engineer(_id, _name, _worktime, _payment) {

}

std::string Programmer::getPosition() {
    return position;
}