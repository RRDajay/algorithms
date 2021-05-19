#pragma once
#include <vector>
#include <numeric>
class LinearRegression
{
private:
	std::vector<float> X;
	std::vector<float> Y;
	float X_mean;
	float Y_mean;
	float m;
	float c;
	int n;
public:
	LinearRegression(const std::vector<float>& X, const std::vector<float>& Y);
	~LinearRegression() = default;
	float Predict(const float& x);
	void Solve();
};

