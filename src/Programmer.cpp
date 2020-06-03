#include "Programmer.h"

Programmer::Programmer(int id, string name, int worktime, ProjectBudget* project) : Engineer(id, name, worktime, project) {
	if (project) {
		project->data->incProgrammers();
	}
}

Programmer::~Programmer() {
	if (project) {
		project->data->decProgrammers();
	}
}

int Programmer::paymentWorkTime() {
	return worktime * 322;
}