#include "LinearInterpolator.h"
//Add fucntion
void LinearInterpolator::add(double x, double y) {
	map<double, double>::iterator it = m_map.find(x);
	if (it == m_map.end())
		m_map.insert(pair<double, double>(x, y));
	else
		it->second = y;
}
//Value interpolation function
double LinearInterpolator::value(double period) {
	if (m_map.size() < 3 || period < 0)
		return 0;	
	else {
		map<double, double>::iterator itMin = m_map.begin();
		map<double, double>::iterator itMax = m_map.end();
		--itMax;
		if (period > itMax->first)
			return itMax->second;
		else if (period < itMin->first)
			return itMin->second;
		else {
			//Returns an iterator pointing to the first element whose key go after period.
			map<double, double>::iterator it_up = m_map.upper_bound(period);
			map<double, double>::iterator it_down = m_map.upper_bound(period);
			--it_down;
			double slope = (it_up->second - it_down->second) / (it_up->first - it_down->first);
			double intercept = it_up->second - slope * it_up->first;
			return slope*period+intercept;
		}
	}
}
//Display Function
void LinearInterpolator::displayMap() {
	for (map<double, double>::iterator it = m_map.begin(); it != m_map.end(); ++it)
		cout << "( " << it->first << " , " << it->second <<" )"<< endl;
}