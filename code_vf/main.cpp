#include <vector>
#include <iostream>
#include "point.h"
#include "edge.h"
#include "figure.h"

using namespace meta;

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
	Point<int> p1(0, 0);
	Point<int> p2(0, 5);
	Point<int> p3(5, 0);

	Edge<int> e1(p1, p2);
	Edge<int> e2(p2, p3);

	std::vector<Point<int> > points;
	points.push_back(p1);
	points.push_back(p2);
	points.push_back(p3);

	std::vector<Edge<int> > edges;
	edges.push_back(e1);
	edges.push_back(e2);

	Figure<int> f1(points);
	Figure<int> f2(edges);

	std::cout << "Debug Figure points constructor:" << std::endl;
	for(int i=0; i<f1.size(); ++i)
		std::cout << f1.getEdge(i) << std::endl;

	std::cout << std::endl << "Debug Figure edges constructor:" << std::endl;
	for(int i=0; i<f2.size(); ++i)
		std::cout << f2.getEdge(i) << std::endl;

	std::cin.get();
	return 0;
}

/*
Exemple<int> A(3);
Exemple<float> B(A);
std::cout << A << std::endl;
std::cout << B << std::endl;
*/
