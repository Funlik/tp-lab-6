#pragma once
#ifndef INTERFACES_H
#define INTERFACES_H

class Heading
{
protected:
	virtual float f_heading() = 0;
};

class Worktime
{
protected:
	virtual float f_worktime() = 0;
};

class Project
{
protected:
	virtual float f_project() = 0;
};

#endif
