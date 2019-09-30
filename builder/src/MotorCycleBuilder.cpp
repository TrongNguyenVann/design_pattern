#include "include/MotorCycleBuilder.h"

MotorCycleBuilder::MotorCycleBuilder() {
	vehicle_ = new Vehicle("MotorCycle");
}

void MotorCycleBuilder::BuildFrame() {
	vehicle_->InsertPart(Vehicle::FRAME, "MotorCycle Frame");
}

void MotorCycleBuilder::BuildEngine() {
	vehicle_->InsertPart(Vehicle::ENGINE, "500 cc");
}

void MotorCycleBuilder::BuildWheels() {
	vehicle_->InsertPart(Vehicle::WHEELS, "2");
}

void MotorCycleBuilder::BuildDoors() {
	vehicle_->InsertPart(Vehicle::DOORS, "0");
}