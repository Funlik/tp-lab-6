#ifndef INTERFACES_H
#define INTERFACES_H

class WorkTime {
public:
	virtual ~WorkTime() {};
	virtual int calcBaseSalary() = 0;
};

class Project {
public:
	virtual ~Project() {};
	virtual int calcProjectIncome() = 0;
};

class Heading {
public:
	virtual ~Heading() {};
	virtual int calcHeadingIncome() = 0;
};

#endif