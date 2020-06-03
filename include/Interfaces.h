#pragma once

class WorkTime
{
public:
	virtual double calcWT(double wt, double salRate) = 0;
};

class Project
{
public:
	virtual double calcPR(double share, double prjBudget) = 0;
};

class Heading
{
public:
	virtual double calcHD(int emplNum) = 0;
};