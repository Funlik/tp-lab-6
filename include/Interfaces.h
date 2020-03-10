#pragma once

#include <iostream>
#ifndef INTERFACES_H
#define INTERFACES_H

using namespace std;

class WorkTime {
public:
	virtual float getPaymentbyWorkTime() = 0;
};

class Project {
public:
	virtual float getPaymentbyProject() = 0;
};

class Heading {
public:
	virtual float getPaymentbyHeading() = 0;
};

#endif 
