#ifndef MOTOR_CYCLE_BUILDER_H
#define MOTOR_CYCLE_BUILDER_H

#include "include/VehicleBuilder.h"

class MotorCycleBuilder : public VehicleBuilder {
public:
	MotorCycleBuilder();
	virtual void BuildFrame() override;
	virtual void BuildEngine() override;
	virtual void BuildWheels() override;
	virtual void BuildDoors() override;
	
};

#endif