#include "include/CarBuilder.h"


CarBuilder::CarBuilder() {
	vehicle_ = new Vehicle("Car");
}

void CarBuilder::BuildFrame() {
	vehicle_->InsertPart(Vehicle::FRAME, "Car Frame");
}

void CarBuilder::BuildEngine() {
	vehicle_->InsertPart(Vehicle::ENGINE, "2500 cc");
}

void CarBuilder::BuildWheels() {
	vehicle_->InsertPart(Vehicle::WHEELS, "4");
}

void CarBuilder::BuildDoors() {
	vehicle_->InsertPart(Vehicle::DOORS, "4");
}
