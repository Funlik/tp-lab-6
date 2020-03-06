#ifndef INTERFACE_H
#define INTERFACE_H
class IHeading {
public:
	virtual int HeadingPayment() = 0;
};
class IProject {
public:
	virtual int PaymentProject() = 0;
};
class IWorkTime
{
public:
	virtual int PaymentWorkTime() = 0;
};
#endif