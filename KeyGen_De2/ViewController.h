#pragma once
#include "calculateMarcoGym.h"

#include <iostream>
using namespace std;

class ViewController
{
private:
	//BodyInformation bodyInformation;
	calculateMarcoGym calculate;
public:
	void run() {
		double kg;
		cout << "\nkg:";
		cin >> kg;
		double bodyFat;
		cout << "\nBody Fat %: ";
		cin >> bodyFat;
		int activity;
		cout << "\nActivity:"
			<<"\n1. Sedentary(office job)"
			<<"\n2. Light Exercise (1 - 2 days/week)"
			<<"\n3. Moderate Exercise (3 - 5 days/week)"
			<<"\n4. Heavy Exercise (6 - 7 days/week)"
			<<"\n5. Athlete (2x per day)\n>> ";
		cin >> activity;

		calculate.bodyInformation.fat = bodyFat;
		calculate.calculateBodyFatLevel(bodyFat);
		calculate.calculateActivity(activity);
		calculate.bodyInformation.weightKilogram = kg;
		calculate.bodyInformation.convertKilogramToPound();
		//calculate.bodyInformation.active = Light_Active;
		//calculate.bodyInformation.bodyFat = Level2;
		//calculate.calcualteTDEE();
		calculate.calculateTDEE1();
		
		cout << "\n=== Developed by Duncan - https://vietnambodybuilder.blogspot.com/ ===";
		cout << "\nTDEE: "<< calculate.TDEE;
		double caloriessurf = 0.0;
		cout << "\ncalories surf: "; cin >> caloriessurf;
		calculate.caloriessurf = caloriessurf;
		calculate.calculateBulkingcalories();
		cout << "\nBulking Calories: " << calculate.bulkingcalories;
		calculate.calculateAll();
		cout << "\nProtein: " << calculate.protein;
		cout << "\nCarb: " << calculate.carb;
		cout << "\nFat: " << calculate.fat;
		cout << "\n\n---Protein---\n";
		cout << "\nUc ga(Chicken breast): " << calculate.protein/20 * 100 << "g" ;
		cout << "\nHoac 6 qua trung (eggs) va " << (calculate.protein - 20)/20 * 100 <<"g uc ga/chicken breast";
		cout << "\n\n---Carb---\n";
		cout << "\nBanh mi(White Bread): " << calculate.carb / 40 * 100 <<"g";
		cout << "\nNeu an com(Rice): " << calculate.carb / 20.8 * 100 << "g";
		cout << "\n";
		/*cout << "\n\n===Time===\n";
		cout << "\nIntern: T4pm, t5 all day, t6am\n";
		
		cout << "6h30(eggs or chicken) \n9h00(chicken: T2,T3,T4,T7)"
			<< "\n11h \n14h \n17h \n20h";
		cout << "\nBigC: 9h T2,T3,T4,T7. \nVinmart Or BHX: Evening T4,T5";*/
	}

};

