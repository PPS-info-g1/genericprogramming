#pragma once
#include <iostream>
#ifndef EDGE_H
#define EDGE_H

template <class T>
class Edge
{
public:
    Edge();
	Edge(const Point<T>& origin, const Point<T>& end, const T& size, const T& length = T(0));
	void setOrigin(const Point<T>& point);
	void setEnd(const Point <T>& point);
	void setHeight(const T& he);
	void setLength(const T& le);

	template<class T>
	friend std::ostream& operator <<(std::ostream &Stream, const Edge<T> &edge);

private :
	Point<T> origin;
	Point<T> end;
	T height;
	T length;

};

template <class T>
Edge<T>::Edge(const Point<T>& origin, const Point<T>& end, const T& height, const T& length)
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
	Stream << "origine : " << edge.origin << std::endl;
	Stream << "end : " << edge.end << std::endl;
	Stream << "height : " << edge.height << std::endl;
	Stream << "length : " << edge.length;

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

#endif