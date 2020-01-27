#include <iostream>
#include <map>
using namespace std;

class LinearInterpolator
{
public:
	LinearInterpolator();
	void add(double x, double y);
	double value(double period);
	void displayMap();
	~LinearInterpolator();
private:
	map <double, double> m_map;
};

