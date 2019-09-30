

MotorCycleBuilder::MotorCycleBuilder() {
	vehicle_ = new Vehicle("MotorCycle");
}

virtual void MotorCycleBuilder::BuildFrame() override {
	vehicle_->InsertPart(Vehicle::FRAME, "MotorCycle Frame")

}

virtual void MotorCycleBuilder::BuildEngine() override {
	vehicle_->InsertPart(Vehicle::ENGINE, "500 cc")
}

virtual void MotorCycleBuilder::BuildWheels() override {
	vehicle_->InsertPart(Vehicle::WHEELS, "2");
}

virtual void MotorCycleBuilder::BuildDoors() override {
	vehicle_->InsertPart(Vehicle::DOORS, "0");
}