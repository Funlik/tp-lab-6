//
// Created by Илья on 026 26.02.20.
//

#ifndef TASK1_HEADING_H
#define TASK1_HEADING_H


class Heading {
public:
    // function gets only number of subordinate employees
    // payment per subordinate employee contains object which call this function
    // returns integer payment
    virtual int heading_payment(int)=0;
};


#endif //TASK1_HEADING_H
