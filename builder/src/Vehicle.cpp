#include "include/Vehicle.h"

Vehicle::Vehicle(const std::string vehicle_type) 
    : type_(vehicle_type) {
}

void Vehicle::SetType(const std::string& vehicle_type) {
	type_ = vehicle_type;
}

const std::string& Vehicle::GetType() const {
	return type_;
}

void Vehicle::SetProperties(const std::unordered_map<std::string, std::string>& properties) {
	properties_ = properties;
}

const std::unordered_map<std::string, std::string>& Vehicle::GetProperties() const {
	return properties_;
}

const char* Vehicle::FRAME = "frame";
const char* Vehicle::ENGINE = "engine";
const char* Vehicle::WHEELS = "wheels";
const char* Vehicle::DOORS = "doors";


void Vehicle::InsertPart(const char* part_name, const std::string& part_value) { 
		if ((std::string(part_name) != std::string(FRAME)) && 
			(std::string(part_name) != std::string(ENGINE)) &&
			(std::string(part_name) != std::string(WHEELS)) &&
			(std::string(part_name) != std::string(DOORS))) {
				throw std::invalid_argument("Part name: " + std::string(part_name) + " is not defined");
		}
	properties_[part_name] = part_value;
}

std::ostream& operator<<(std::ostream& out, const Vehicle& vehicle) {
	out << vehicle.type_ << ": {frame: " << vehicle.properties_.at(Vehicle::FRAME)
	<< ", engine: " << vehicle.properties_.at(Vehicle::ENGINE)
	<< ", wheels: " << vehicle.properties_.at(Vehicle::WHEELS)
	<< ", doors: " << vehicle.properties_.at(Vehicle::DOORS)
	<< "}";
	return out;
}
