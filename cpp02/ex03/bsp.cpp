#include "Fixed.hpp"
#include "Point.hpp"

static	float	area( Point const a, Point const b, Point const c)
{
	float	aX = a.getX().toFloat();
	float	aY = a.getY().toFloat();
	float	bX = b.getX().toFloat();
	float	bY = b.getY().toFloat();
	float	cX = c.getX().toFloat();
	float	cY = c.getY().toFloat();

	float ret = (aX*(bY-cY) + bX*(cY-aY)+ cX*(aY-bY))/2;
	if (ret < 0)
		return (-ret);
	return (ret);

}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	area0 = area(a, b, c);
	if (!area0)
	{
		std::cout << "ABC is not triangle" << std::endl;
		return (false);
	}
	float	area1 = area(a, b, point);
	float	area2 = area(a, c, point);
	float	area3 = area(b, c, point);

	if (!area1 || !area2 || !area3)
		return (false);
	if ( area0 == (area1 + area2 + area3))
		return(true);
	return (false);
}