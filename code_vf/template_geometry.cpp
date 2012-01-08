// template_geometry.cpp : Defines the entry point for the console application.
//

#include "point.h"
#include "edge.h"
//#include "Exemple.h"

//template <typename T1>
template <typename T2, typename T3, typename T4, typename T5>
Edge<T2, T3, T4, T5> CreateEdge()
{
	Edge<int, int, int, int> toto();
	return toto;
}

template<typename T2, typename T3, typename T4, typename T5>
bool adEdge(Point<T2> origine, Point<T3> end, T4 height, T5 length)
{
	Edge<T2, T3, T4, T5> toto(origine, end, height, length);
	std::cout << "Côté généré : \n" << toto << std::endl;
	return true;
}

int main(int argc, char* argv[])
{
	INTPOINT toto(12, 12);
	std::cout << toto << std::endl;

	Point<double> point;
	std::cout << point << std::endl;
	point.setXY(13.05, 13.05);
	std::cout << point << std::endl;

	Point<float> test(12.6f, 12.6f);
	std::cout << test << std::endl;

	Edge<int, double, int, int> tutu;
	tutu.setOrigin(toto);
	tutu.setEnd(point);
	std::cout << "Edge" << std::endl;
	std::cout << tutu << std::endl;


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

