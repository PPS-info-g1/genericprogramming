#pragma once
#ifndef EDGE_H
#define EDGE_H

#include <iostream>
#include <point.hpp>

namespace meta
{

template <class T>
class Edge
{
public:
    Edge();
	Edge(const Point<T>& origin, const Point<T>& end, T height = 0, T length = 0);
	const Point<T>& getOrigin() const { return origin; }
	void setOrigin(const Point<T>& point);
	const Point<T>& getEnd() const { return end; }
	void setEnd(const Point <T>& point);
	const T& getHeight() const { return height; }
	void setHeight(const T& he);
	const T& getLength() const { return length; }
	void setLength(const T& le);

private :
	Point<T> origin;
	Point<T> end;
	T height;
	T length;

};

template<class T>
std::ostream& operator <<(std::ostream &Stream, const Edge<T> &edge);

template <class T1, class T2>
bool croise(Edge<T1> edge1, Edge<T2> edge2)
{
	return false;
}

template <class T>
Edge<T>::Edge(const Point<T>& origin, const Point<T>& end, T height, T length)
: origin(origin), end(end), height(height), length(length)
{
}

template <class T>
Edge<T>::Edge() : origin(), end(), height(0), length(0)
{
}

template <class T>
std::ostream& operator <<(std::ostream &Stream, const Edge<T> &edge)
{
	Stream << "origine : " << edge.getOrigin() << std::endl;
	Stream << "end : " << edge.getEnd() << std::endl;
	Stream << "height : " << edge.getHeight() << std::endl;
	Stream << "length : " << edge.getLength();

	return Stream;
}

template<typename T>
void Edge<T>::setOrigin(const Point<T>& point)
{
	origin = point;
}

template<typename T>
void Edge<T>::setEnd(const Point <T>& point)
{
	end = point;
}

template<typename T>
void Edge<T>::setHeight(const T& he)
{
	height = he;
}

template<typename T>
void Edge<T>::setLength(const T& le)
{
	length = le;
}

typedef Edge<int> INTEDGE;
typedef Edge<float> FLOATEDGE;
typedef Edge<double> DOUBLEEDGE;

}

#endif