#ifndef WORKTIME_H
#define WORKTIME_H

class  WorkTime {
	public:
	virtual int calcWorkTime(int worktime, int base, double overtimeCorfficient = 1) = 0;
};
#endif // !WORDTIME_H
