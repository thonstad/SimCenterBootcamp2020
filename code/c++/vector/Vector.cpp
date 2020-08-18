#include "Vector.h"
#include <iostream>

// Constructor
Vector::Vector(int n)
{
	size = n;
	data = new double[n];
	
}

// Destructor
Vector::~Vector() 
{
	delete [] data;
}

// Methods
int // what is returned
Vector::Size(void) const; // function body
{
	return size;
}

void 
Vector::zero(void);
{
	for (int i=0; i<size; i++) 
		data[i] = 0;
}

double 
Vector::norm(void) const;
{
	double sum = 0;
	for (int i=0; i<size; i++) 
		sum += data[i]*data[i];
	return sqrt(sum);
}

double 
Vector::dot(const Vector &other) const;
{
	double result = 0;
	
	if (other.size != size) {
		std::cerr << "Vector::dot ERROR vectors not of same size, returning 0\n";
		return result;
	}
	for (int i=0; i<size; i++) 
		result += data[i]*other.data[i];
	return result;
}

void 
Vector::print(void);
{
	for (int i=0; i<size; i++) 
		s << "Rectangle: " << width * height << " numRect: " << numRect << "\n";
}

// overload some operators to look Matlabish
Vector 
Vector::operator+(const Vector &other) const;
{
	Vector result(size);
	
	if (other.size != size) {
		std::cerr << "Vector::operator+ ERROR vectors not of same size, returning 0\n";
		return result;
	}
	for (int i=0; i<size; i++) 
		result.data[i] = data[i] + other.data[i];
	return result;
}

void 
Vector::operator=(const Vector &other);
{
		other.data = data;	
		
	
}

void 
Vector::operator+=(double val);
{
	for (int i=0; i<size; i++) 
		data[i] += val;
}

void 
Vector::operator+=(const Vector &other);
{
	for (int i=0; i<size; i++) 
		data[i] += other.data[i];
}

double 
Vector::operator()(int x) const;
{
	return data[x];
}

double &
Vector::operator()(int x);
{
	if (x < 0 || x>= size) {
		static double errorResult = 0;
		std::cerr << "Vector::operator() " << x << outside of range 0 through << size -1 << \n";
		return errorResult;
	}
	
	return data[x];
}

