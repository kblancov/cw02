#include "LinearInterpolator.h"



LinearInterpolator::LinearInterpolator()
{
}

void LinearInterpolator::add(double x, double y) {
	m_map.insert(pair<double, double>(x,y));
}

double LinearInterpolator::value(double period) {




	return 0;
}

void LinearInterpolator::displayMap() {
	for (map<double, double>::iterator it = m_map.begin(); it != m_map.end(); ++it)
		cout << "( " << it->first << " , " << it->second <<" )"<< endl;

	map<double, double>::iterator it = m_map.begin();
	cout << "Map minX: " << it->first<<endl;

	map<double, double>::iterator it2 = m_map.end();
	--it2;
	cout << "Map maxX: " << it2->first << endl;


}

LinearInterpolator::~LinearInterpolator()
{
}
