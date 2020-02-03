#include <iostream>
#include <map>
using namespace std;
class Histogram
{
public:
	Histogram(double xmin, double ymax,	double numbins);
	void add(double x);
	void getResults();
	void writeResultsToStream();
	void displayHistogram();
private:
	map <double, unsigned int> m_map;
	double m_xmin=0;
	double m_xmax=0;
	double m_numbins=0;
}; 
