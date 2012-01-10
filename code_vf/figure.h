#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#include "point.h"
#include "edge.h"
#include <vector>

template <class T>
class Figure
{
private:
	std::vector<Edge<T>> edges_;
	void ensureIsClosed();

public:
	Figure(std::vector<Edge<T> > const& edges);
	Figure(std::vector<Point<T> > const& points);
	std::size_t size() const;
	const Edge<T>& getEdge(int num) const; 

};

template <class T>
Figure<T>::Figure(std::vector<Edge<T> > const& edges) : edges_(edges) 
{
	ensureIsClosed();
}

template <class T>
Figure<T>::Figure(std::vector<Point<T> > const& points)
{
	if (points.size() > 2) {
		//Create edges
		std::vector<Point<T> >::const_iterator ite = points.cbegin();
		while(ite != points.cend()) {
			Point<T> org = *ite;
			++ite;
			if (ite != points.cend()) {
				Point<T> end = *ite;
				Edge<T> e(org, end);
				edges_.push_back(e);
			}
			else {
				Edge<T> e(org, points[0]);
				edges_.push_back(e);
			}
		}
		ensureIsClosed();
	}
}

template <class T>
void Figure<T>::ensureIsClosed() {
	if(edges_.size() > 0) {
		//Check if the figure is closed
		Edge<T> first = *(edges_.cbegin());
		Edge<T> last  = *(edges_.crbegin());
		if (first.getOrigin() != last.getEnd())
		{
			Edge<T> e(last.getEnd(), first.getOrigin());
			edges_.push_back(e);
		}
	}
}

template <class T>
std::size_t Figure<T>::size() const {
	return edges_.size();
}

template <class T>
const Edge<T>& Figure<T>::getEdge(int num) const {
	return edges_[num];
}

#endif