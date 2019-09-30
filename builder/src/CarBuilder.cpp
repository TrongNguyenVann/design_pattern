#include "include/CarBuilder.h"


CarBuilder::CarBuilder() {
	vehicle_ = new Vehicle("Car");
}

virtual void CarBuilder::BuildFrame() override {
	vehicle_->InsertPart(Vehicle::FRAME, "Car Frame");
}

virtual void CarBuilder::BuildEngine() override {
	vehicle_->InsertPart(Vehicle::ENGINE, "2500 cc")
}

virtual void CarBuilder::BuildWheels() override {
	vehicle_->InsertPart(Vehicle::WHEELS, "4");
}

virtual void CarBuilder::BuildDoors() override {
	vehicle_->InsertPart(Vehicle::DOORS, "4")
}