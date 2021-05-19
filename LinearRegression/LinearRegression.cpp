#include "LinearRegression.h"

LinearRegression::LinearRegression(const std::vector<float>& X, const std::vector<float>& Y)
	: X(X), Y(Y)
{
	n = X.size();

	X_mean = std::accumulate(X.begin(), X.end(), 0) / n;
	Y_mean = std::accumulate(Y.begin(), Y.end(), 0) / n;

}

void LinearRegression::Solve()
{
	int i = 0;
	float num = 0;
	float denom = 0;

	while (i != n)
	{
		num += (X[i] - X_mean) * (Y[i] - Y_mean);
		denom += pow((X[i] - X_mean), 2);
		
		i++;
	}

	m = num / denom;
	c = Y_mean - (m * X_mean);
}

float LinearRegression::Predict(const float& x)
{
	return (m * x) + c;
}