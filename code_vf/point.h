#pragma once
#include <iostream>
#ifndef POINT_H
#define POINT_H

template <typename T>
class Point
{
public:
    Point();
    Point(const T& x, const T& y);
	void setX(const T& x);
	void setY(const T& y);
	void setXY(const T& x, const T& y);
	T	 getX();
	T	 getY();

	template<typename T>
	friend std::ostream& operator <<(std::ostream &Stream, const Point<T> &point);

private:
    T xCoordinate;
    T yCoordinate;
};


template <typename T>
Point<T>::Point() : xCoordinate(0), yCoordinate(0)
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
	return Stream << "(" << point.xCoordinate << ", " << point.yCoordinate << ")";
}

template <typename T>
T Point<T>::getX()
{
	return xCoordinate;
}

template <typename T>
T Point<T>::getY()
{
	return yCoordinate;
}

typedef Point<int> INTPOINT;
typedef Point<double> DOUBLEPOINT;
typedef Point<float> FLOATPOINT;

#endif