#pragma once

class IWorkTime
{
public:
	virtual int CalculateBaseWage() = 0;
	virtual ~IWorkTime() {};
};

class IProject
{
public:
	virtual int CalculateProjectWage() = 0;
	virtual ~IProject() {};
};

class IHeading
{
public:
	virtual int CalculateHeadingWage() = 0;
	virtual ~IHeading() {};
};