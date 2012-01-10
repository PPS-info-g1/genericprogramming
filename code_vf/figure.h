#pragma once
#ifndef FIGURE_H
#define FIGURE_H

#include "edge.h"
#include <vector>

template <class T>
class Figure
{
private:
	std::vector<Edge<T>> edges_;

public:
	Figure(std::vector<Edge<T>> const& edges);
	std::size_t size() const;
	Edge<T> getEdge(int num) const;

};

template <class T1, class T2>
bool croise(Figure<T1> figure1, Figure<T2> figure2){

	for(int i = 0; i < figure1.size(); i++)
		for(int j = 0; j < figure2.size(); j++)
			if(croise(figure1.getEdge(i), figure2.getEdge(j)))
				return true;

	return false;
}

template <class T>
Figure<T>::Figure(std::vector<Edge<T>> const& edges) : edges_(edges)
{}

template <class T>
std::size_t Figure<T>::size() const {
	return edges_.size();
}

template <class T>
Edge<T> Figure<T>::getEdge(int num) const {
	return edges_[num];
}

#endif