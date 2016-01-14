/*
	Messing with lambdas
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

vector<std::function<float(float, float)>> functions;

int main()
{
	auto sub = [](float x, float y) { return x - y; };
	auto sum = [](float x, float y) { return x + y; };
	auto prod = [](float x, float y) { return x * y; };
	auto div = [](float x, float y) { return x / y; };


	functions.push_back(sub);
	functions.push_back(sum);
	functions.push_back(prod);
	functions.push_back(div);

	for_each(functions.begin(), functions.end(), [](std::function<float(float, float)> fun) {printf("%f\n", fun(3.0f, 5.0f)); });



	getchar();

	return 0;
}