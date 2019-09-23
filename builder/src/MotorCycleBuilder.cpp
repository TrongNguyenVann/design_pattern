

MotorCycleBuilder::MotorCycleBuilder() {
	vehicle_ = new Vehicle("MotorCycle");
}

virtual void MotorCycleBuilder::BuildFrame() override {
	vehicle_->InsertPart(vehicle_->FRAME, "MotorCycle Frame")

}

virtual void MotorCycleBuilder::BuildEngine() override {
	vehicle_->InsertPart(vehicle_->ENGINE, "500 cc")
}

virtual void MotorCycleBuilder::BuildWheels() override {
	vehicle_->InsertPart(vehicle_->WHEELS, "2");
}

virtual void MotorCycleBuilder::BuildDoors() override {
	vehicle_->InsertPart(vehicle_->DOORS, "0");
}