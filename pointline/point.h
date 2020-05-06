#ifndef POINT_H_   //macroguard that stops the header from being included twice.
#define POINT_H_  //Including the header twice stops the compilation, Note no Semilcolon

#include <iostream>

class point
{
	public:
		point();
		double get_x();
		double get_y();		
		void set_x(double incx);
		void set_y(double incy);		
		void translate(double xadd, double yadd);
		point(const point &copy);
		void scale(double m);
		void reflect_x();
		void reflect_y();
		void rotate(double r);
		
		
		void operator = (const point& pointToCopy);
	
	
	//for cin
	friend std::istream& operator >>(std::istream& ins, point& target);
	//for cout
	friend std::ostream& operator <<(std::ostream& outs, const point& source);	
	private:
		double x, y;
};

	bool operator ==(const point &x, const point &y);
#endif
