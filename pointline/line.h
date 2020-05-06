#ifndef LINE_H_   //macroguard that stops the header from being included twice.
#define LINE_H_  //Including the header twice stops the compilation, Note no Semilcolon

#include "point.h"
#include <iostream>

class line
{
	public:
		line();
		line(point userPoint);
		line(point userPoint1, point userPoint2);
        line::line(const line newPoint1, const line newPoint2;
		double slope();
		double yintercept(double slope);
		void translate(double X, double Y);
		void reflect_x();
		void reflect_y();

    void line::operator = (const line &line1, const line &line2);

	//for cin
	friend std::istream& operator >>(std::istream& ins, line& target);
	//for cout
	friend std::ostream& operator <<(std::ostream& outs, const line& source);

		private:
			point line1, line2;
};

	bool operator ==(const line &p1, const line &p2, double slope, double yintercept);
	#endif
