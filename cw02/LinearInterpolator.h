#include <iostream>
#include <map>
using namespace std;
class LinearInterpolator
{
public:
	void add(double x, double y);
	double value(double period);
	void displayMap();
private:
	map <double, double> m_map;
};

