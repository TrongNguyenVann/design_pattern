#ifndef CAR_BUILDER_H
#define CAR_BUILDER_H

#include "include/VehicleBuilder.h"

class CarBuilder : public VehicleBuilder {
public:
	CarBuilder();
	virtual void BuildFrame() override;
	virtual void BuildEngine() override;
	virtual void BuildWheels() override;
	virtual void BuildDoors() override;
};

#endif