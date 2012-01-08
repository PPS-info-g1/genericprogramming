// template_geometry.cpp : Defines the entry point for the console application.
//

#include <vector>
#include <iostream>
#include "point.h"
#include "edge.h"
#include "figure.h"
//#include "Exemple.h"

//template <typename T1>
template <typename T>
Edge<T> CreateEdge()
{
	Edge<int> toto();
	return toto;
}

template<typename T>
bool adEdge(Point<T> origine, Point<T> end, T height, T length)
{
	Edge<T> toto(origine, end, height, length);
	std::cout << "Cote genere : \n" << toto << std::endl;
	return true;
}

int main(int argc, char* argv[])
{
	INTPOINT p1(12, 12);
	INTPOINT p2(15, 20);
	INTPOINT p3(15, 17);
	std::cout << p1 << std::endl;

	Point<int> point;
	std::cout << point << std::endl;
	point.setXY(13.05, 13.05);
	std::cout << point << std::endl;

	Point<float> test(12.6f, 12.6f);
	std::cout << test << std::endl;

	Edge<int> e1(p1, p2);
	Edge<int> e2(p2, p3);
	std::vector<Edge<int> > edges;
	edges.push_back(e1);
	edges.push_back(e2);

	Figure<int> f1(edges);
	std::cout << f1.size() << std::endl;


	std::cout << "Edge" << std::endl;
	std::cout << e1 << std::endl;


	adEdge(point, point, 12, 15);

	system("pause");
	return 0;
}

/*
Exemple<int> A(3);
Exemple<float> B(A);
std::cout << A << std::endl;
std::cout << B << std::endl;
*/