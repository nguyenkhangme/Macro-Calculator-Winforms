#pragma once

using namespace System;
using namespace System::Windows::Forms;

enum BodyFat {
	Level1,
	Level2,
	Level3,
	Level4,
};

enum Active {
	R1, //1.2
	R2, //1.375
	R3, //1.55
	R4, //1.725
	R5, //1.9
	Light_Active,
};

ref struct BodyInformation {

	//static BodyInformation* shared;
	double weightKilogram = 0;
	double weightPound = 0;
	double fat = 0;
	Active active;
	BodyFat bodyFat;

	void convertKilogramToPound() {
		weightPound = weightKilogram * 2.2;
	}
};
ref class calculateMarcoGym
{
public:
	BodyInformation bodyInformation;
	double LBM = 0;
	double BMR = 0;
	double TDEE = 0;
	double caloriessurf = 0.0;
	double bulkingcalories = 0.0;
	double protein = 0.0;
	double fat = 0.0;
	double carb = 0.0;
	calculateMarcoGym() {};
	~calculateMarcoGym() {};
	
	void calculateTDEE1() {
		LBM = (bodyInformation.weightKilogram * (100 - bodyInformation.fat)) / 100;
		BMR = 370 + (21.6 * LBM);
		switch (bodyInformation.active)
		{
		case R1:
			TDEE = BMR * 1.2;
			break;
		case R2:
			TDEE = BMR * 1.375;
			break;
		case R3:
			TDEE = BMR * 1.55;
			break;
		case R4:
			TDEE = BMR * 1.725;
			break;
		case R5:
			TDEE = BMR * 1.9;
			break;
		default:
			break;
		}
	}
	void calcualteTDEE() {
		double activity = 0;
		switch (bodyInformation.active)
		{
			//case 
		case Light_Active:
			activity = 1.5;
		default:
			break;
		}

		TDEE = bodyInformation.weightPound * 10.0 * activity;
	}

	void calculateBulkingcalories() {
		bulkingcalories = TDEE + caloriessurf;
	}
	void calculateBodyFatLevel(double bodyFat) {
		if (16 <= bodyFat) {
			bodyInformation.bodyFat = Level1;
		}
		else if (12 <= bodyFat && bodyFat < 16) {
			bodyInformation.bodyFat = Level2;
		}
		else if (8 <= bodyFat && bodyFat < 12) {
			bodyInformation.bodyFat = Level3;
		}
		else if (bodyFat < 8) {
			bodyInformation.bodyFat = Level4;
		}
	}
	void calculateActivity(int activity) {
		if (activity == 1) {
			bodyInformation.active = R1;
		}
		if (activity == 2) {
			bodyInformation.active = R2;
		}
		if (activity == 3) {
			bodyInformation.active = R3;
		}
		if (activity == 4) {
			bodyInformation.active = R4;
		}
		if (activity == 5) {
			bodyInformation.active = R5;
		}
	}
	void calculateProtein() {
		double bodyFat = 0.0;
		switch (bodyInformation.bodyFat)
		{
		case Level1:
			bodyFat = 1;
			break;
		case Level2:
			bodyFat = 1.1;
			break;
		case Level3:
			bodyFat = 1.2;
			break;
		case Level4:
			bodyFat = 1.3;
			break;
		default:
			break;
		}
		protein = bodyInformation.weightPound * bodyFat;
	}
	void calculateFat() {
		fat = bulkingcalories * 0.25 / 9;
	}
	void calculateCarb() {
		carb = (bulkingcalories - protein * 4 - fat * 9) / 4;
	}
	void calculateAll() {
		calculateProtein();
		calculateFat();
		calculateCarb();
	}
private:

};

