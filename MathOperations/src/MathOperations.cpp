//============================================================================
// Name        : MathOperations.cpp
// Author      : Ioannis Karagiannis
// Version     :
// Copyright   : IK
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <math.h>       /* sqrt */
#include <vector>

float MyNorm(std::vector<float> v)
{
	float result = 0;
	for(uint i = 0; i < v.size(); i++)
	{
		result += v[i]*v[i];
	}
	return sqrt(result);
}

float MyMax(float x, float y)
{
	if(x >= y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

float MyMin(float x, float y)
{
	if(x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	std::cout << "########## PROGRAM STARTED ############" << std::endl;

	// Create a vector containing integers
	std::vector<float> v = {3.8};

	// Add one more element to the vector
	v.push_back(5.9);

	std::cout << "norm = " << MyNorm(v) << std::endl;
	std::cout << "max(" << v[0] << "," << v[1] << ") = " << MyMax(v[0],v[1]) << std::endl;
	std::cout << "min(" << v[0] << "," << v[1] << ") = " << MyMin(v[0],v[1]) << std::endl;

	std::cout << "########## PROGRAM FINISHED ############" << std::endl;
	return 0;
}
