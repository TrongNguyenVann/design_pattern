#include "Vehicle.h"


/**
* Specify an abstract interface for creating a Vehicle
*/
class VehicleBuilder {
protected:
	Vehicle* vehicle_;


public:

	Vehicle* GetVehicle() const;

	virtual void BuildFrame() = 0;
	virtual void BuildEngine() = 0;
	virtual void BuildWheels() = 0;
	virtual void BuildDoors() = 0;
};