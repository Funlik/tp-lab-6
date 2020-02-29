#ifndef PROJECT_H
#define PROJECT_H
class Project {
public:
	virtual int calculateProjectPayment(int percent, int budget) = 0;
};
#endif
