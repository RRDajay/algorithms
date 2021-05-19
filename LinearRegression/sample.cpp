#include <iostream>
#include "LinearRegression.h"
#include <vector>

template<typename T>
void Log(T x)
{
	for (auto i : x)
		std::cout << i << " ";

	std::cout << std::endl;
}

int main()
{
	std::vector<float> X_data = {1,2,3,4,5};
	std::vector<float> Y_data = {11,23,31,45,56};


	std::cout << "X: ";
	Log(X_data);
	std::cout << "Y: ";
	Log(Y_data);

	LinearRegression* LR1 = new LinearRegression(X_data, Y_data);	

	std::cout << "\n\nPredictions\n\n";
	LR1->Solve();
	for (int x = 0; x < 10; x++)
		std::cout << "x: " << x <<" "<< " y: " << LR1->Predict(x) << std::endl;
	
}