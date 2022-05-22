#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point	A(0,0);
	Point	B(20, 0);
	Point	C(10, 30);

	Point	insideP(10, 15);
	Point	outsideP(0, 10);
	Point	vertexP(10, 30);
	Point	edgeP(5, 15);

	if (bsp(A, B, C, insideP) == true)
		std::cout << "insideP" << std::endl;
	
	if (bsp(A, B, C, outsideP) == true)
		std::cout << "outsideP" << std::endl;

	if (bsp(A, B, C, vertexP) == true)
		std::cout << "vertexP" << std::endl;

	if (bsp(A, B, C, edgeP) == true)
		std::cout << "edgeP" << std::endl;
}