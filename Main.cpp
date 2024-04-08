#include "BodyMassIndexCalculator.h"

void userData() {
	int height = 0, weight = 0;

	cout << "Enter your height in centimeters: ";
	cin >> height;
	cout << "Enter your weight in kilograms: ";
	cin >> weight;

	double bmi = calculate(height, weight);
	int roundBMI = static_cast<int>(bmi);

	cout << "Your calculated body mass index is: " << roundBMI << endl;

	cout << "At this body mass index, you are considered: ";
	if (bmi < 18.5)
		cout << "Underweight" << endl;
	else if (bmi >= 18.5 && bmi <= 24.9)
		cout << "Normal" << endl;
	else if (bmi > 25)
		cout << "Overweight" << endl;
}

double calculate(int height, int weight) {
	double heightMeters = height / 100.0;
	double heightSquared = heightMeters * heightMeters;

	return weight / heightSquared;
}

int main() {
	userData();

	cout << endl;

	system("pause");
	return 0;
}
