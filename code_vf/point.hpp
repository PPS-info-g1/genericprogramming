#pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>

namespace meta
{

/**
 * T : Type of point's coordinate
 **/
template <class T = double>
class Point
{
public:
    Point();
	Point(const Point<T>& other);
    Point(const T& x, const T& y);
	void setX(const T& x);
	void setY(const T& y);
	void setXY(const T& x, const T& y);
	bool operator==(const Point<T>& other) const;
	bool operator!=(const Point<T>& other) const;
	T	 getX() const;
	T	 getY() const;

private:
    T xCoordinate;
    T yCoordinate;
};

template<typename T>
std::ostream& operator <<(std::ostream &Stream, const Point<T> &point);


template <typename T>
Point<T>::Point() : xCoordinate(0), yCoordinate(0)
{}

template <typename T>
Point<T>::Point(const Point<T>& other)
: xCoordinate(other.xCoordinate), yCoordinate(other.yCoordinate)
{}

template <typename T>
Point<T>::Point(const T& x, const T& y) : xCoordinate(x), yCoordinate(y)
{}

template <typename T>
void Point<T>::setX(const T& x)
{
	xCoordinate = x;
}

template <typename T>
void Point<T>::setY(const T& y)
{
	yCoordinate = y;
}

template <typename T>
void Point<T>::setXY(const T& x, const T& y)
{
	xCoordinate = x;
	yCoordinate = y;
}

template <typename T>
std::ostream &operator <<(std::ostream &Stream, const Point<T> &point)
{
	return Stream << "(" << point.getX() << ", " << point.getY() << ")";
}

template <typename T>
bool Point<T>::operator==(const Point<T>& other) const 
{
	return (xCoordinate == other.xCoordinate) && (yCoordinate == other.yCoordinate);
}

template <typename T>
bool Point<T>::operator!=(const Point<T>& other) const 
{
	return !(*this == other);
}

template <typename T>
T Point<T>::getX() const
{
	return xCoordinate;
}

template <typename T>
T Point<T>::getY() const
{
	return yCoordinate;
}

typedef Point<int> INTPOINT;
typedef Point<double> DOUBLEPOINT;
typedef Point<float> FLOATPOINT;

}

#endif
