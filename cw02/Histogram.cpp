#include "Histogram.h"

Histogram::Histogram(double xmin, double xmax, double numbins) {
	m_xmin=xmin;
	m_xmax=xmax;
	m_numbins=numbins;
	m_map.insert(pair<double, unsigned int>(xmin,0));

	double binLen = (xmax - xmin) / numbins;
	for (int i=0;i<=numbins; ++i)
		m_map.insert(pair<double, unsigned int>(xmin + (1+i)*binLen, 0));
}

void Histogram::add(double x) {
}
void Histogram::getResults() {
}
void Histogram::writeResultsToStream() {
}

//Display Function
void Histogram::displayHistogram() {
	for (map<double, unsigned int>::iterator it = m_map.begin(); it != m_map.end(); ++it)
		cout << "( " << it->first << " , " << it->second << " )" << endl;
}