#pragma once
#include <iostream>
#ifndef EDGE_H
#define EDGE_H

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
	void setHeight(const T& he);
	void setLength(const T& le);

	template<class T>
	friend std::ostream& operator <<(std::ostream &Stream, const Edge<T> &edge);

	template<class T1, class T2>
	friend bool croise(Edge<T1> edge1, Edge<T2> edge2);

private :
	Point<T> origin;
	Point<T> end;
	T height;
	T length;

};

template <class T1, class T2>
bool croise(Edge<T1> edge1, Edge<T2> edge2){
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