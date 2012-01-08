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