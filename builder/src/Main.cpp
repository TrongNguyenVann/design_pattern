#include <iostream>
#include "include/VehicleBuilder.h"
#include "include/Shop.h"
#include "include/CarBuilder.h"

int main() {
	Shop shop;
	VehicleBuilder* builder;
	builder = new CarBuilder();
	shop.Construct(builder);
	std::cout << *(builder->GetVehicle()) << std::endl;
	delete builder;
	return 0;
}

