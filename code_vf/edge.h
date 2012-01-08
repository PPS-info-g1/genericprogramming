#pragma once
#include <iostream>
#ifndef EDGE_H
#define EDGE_H

template <class T1, class T2, class T3, class T4>
class Edge
{
public:
    Edge();
	Edge(const Point<T1>& origin, const Point<T2>& end, const T3& size, const T4& length = T4(0));
	void setOrigin(const Point<T1>& point);
	void setEnd(const Point <T2>& point);
	void setHeight(const T3& he);
	void setLength(const T4& le);

	template<class T5, class T6, class T7, class T8>
	friend std::ostream& operator <<(std::ostream &Stream, const Edge<T5, T6, T7, T8> &edge);

private :
	Point<T1> origin;
	Point<T2> end;
	T3 height;
	T4 length;

};

template <class T1, class T2, class T3, class T4>
Edge<T1, T2, T3, T4>::Edge(const Point<T1>& origin, const Point<T2>& end, const T3& height, const T4& length)
: origin(origin), end(end), height(height), length(length)
{
}

template <class T1, class T2, class T3, class T4>
Edge<T1, T2, T3, T4>::Edge() : origin(), end(), height(0), length(0)
{
}

template <class T5, class T6, class T7, class T8>
std::ostream& operator <<(std::ostream &Stream, const Edge<T5, T6, T7, T8> &edge)
{
	Stream << "origine : " << edge.origin << std::endl;
	Stream << "end : " << edge.end << std::endl;
	Stream << "height : " << edge.height << std::endl;
	Stream << "length : " << edge.length;

	return Stream;
}

template<typename T1, class T2, class T3, class T4>
void Edge<T1, T2, T3, T4>::setOrigin(const Point<T1>& point)
{
	origin = point;
}

template<typename T1, class T2, class T3, class T4>
void Edge<T1, T2, T3, T4>::setEnd(const Point <T2>& point)
{
	end = point;
}

template<typename T1, class T2, class T3, class T4>
void Edge<T1, T2, T3, T4>::setHeight(const T3& he)
{
	height = he;
}

template<typename T1, class T2, class T3, class T4>
void Edge<T1, T2, T3, T4>::setLength(const T4& le)
{
	length = le;
}

typedef Edge<INTPOINT, INTPOINT, int, int> INTEDGE;
typedef Edge<FLOATPOINT, FLOATPOINT, float, float> FLOATEDGE;
typedef Edge<DOUBLEPOINT, DOUBLEPOINT, double, double> DOUBLEEDGE;

#endif