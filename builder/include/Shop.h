#ifndef SHOP_H
#define SHOP_H


#include "include/VehicleBuilder.h"

class Shop {
public:
	void Construct(VehicleBuilder* builder) {
		builder->BuildFrame();
		builder->BuildEngine();
		builder->BuildWheels();
		builder->BuildDoors();
	}
};

#endif