#pragma once

#include <string>

using namespace std;

class Car
{
public:
	Car()
	{
		make = "";
		model = "";
		gasInTankInLiters = 0;
		gasTankCapacityInLiters = 0;
		kilometersPerLiter = 0;
	}

	void setMake(string make)
	{
		this->make = make;
	}
	string getMake()
	{
		return make;
	}

	void setModel(string model)
	{
		this->model = model;
	}
	string getModel()
	{
		return model;
	}

	void setGasTankCapacityInLiters(double gasTankCapacityInLiters)
	{
		// todo, sanity check the value - > 0 or something
		this->gasTankCapacityInLiters = gasTankCapacityInLiters;
	}
	double getGasTankCapacityInLiters()
	{
		return gasTankCapacityInLiters;
	}

	double getGasInTankInLiters()
	{
		return gasInTankInLiters;
	}
	void addGas(double gasToAddInLiters)
	{
		gasInTankInLiters += gasToAddInLiters;
		if (gasInTankInLiters > gasTankCapacityInLiters)
		{
			gasInTankInLiters = gasTankCapacityInLiters;
			// todo - some error for spilling gas!!!
		}
	}

	void setKilometersPerLiter(double kilometersPerLiter)
	{
		this->kilometersPerLiter = kilometersPerLiter;
	}
	double getKilometersPerLiter()
	{
		return kilometersPerLiter;
	}

	void drive(double kilometersToDrive)
	{
		double litersOfGasUsed = kilometersToDrive / kilometersPerLiter;
		gasInTankInLiters -= litersOfGasUsed;

		if (gasInTankInLiters < 0)
		{
			gasInTankInLiters = 0;
			// TODO - some error here for running out of gas!
		}
	}

private:
	string make;
	string model;
	double gasInTankInLiters;
	double gasTankCapacityInLiters;
	double kilometersPerLiter;

};