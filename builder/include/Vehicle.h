#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <unordered_map>
#include <iostream>


/**
* Present a vehicle in real life
*/
class Vehicle {
	std::string type_;
	std::unordered_map<std::string, std::string> properties_;
	
public:
	Vehicle(const std::string vehicle_type);

	void SetType(const std::string& vehicle_type);

	const std::string& GetType() const;

	void SetProperties(const std::unordered_map<std::string, std::string>& properties);

	const std::unordered_map<std::string, std::string>& GetProperties() const;

	void InsertPart(const char* part_name, const std::string& part_value);

	static const char* FRAME;
	static const char* ENGINE;
	static const char* WHEELS;
	static const char* DOORS;

	friend std::ostream& operator<<(std::ostream& out, const Vehicle& vehicle);
};

#endif