#include "include/VehicleBuilder.h"

class MotorCycleBuilder : public VehicleBuilder {
public:
	MotorCycleBuilder() {
		vehicle_ = new Vehicle("MotorCycle");
	}

	virtual void BuildFrame() override;
	virtual void BuildEngine() override;
	virtual void BuildWheels() override;
	virtual void BuildDoors() override;
	
}