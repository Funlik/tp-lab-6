#include "../include/Cleaner.h"

Cleaner::Cleaner(int _id, std::string _name, int _worktime, double _payment)
        :Personal(_id, _name, _worktime, _payment){

}

std::string Cleaner::getPosition() {
    return position;
}
