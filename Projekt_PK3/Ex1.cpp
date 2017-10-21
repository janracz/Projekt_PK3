// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Ex1Classes.h"
#include "iostream"

using namespace std;

void ExplorePoint(Point* lp)
{
	cout << endl << "exploring point - ";
	lp->WritePoint();
	cout << endl;
}

void ExplorePoint2(Point& lp)
{
	cout << endl << "exploring point - ";
	lp.WritePoint();
	cout << endl;
}

int main()
{
	Point *p = new Point();

	static Point p1(5, 6);

	Point p2 = p1;

	p2.WritePoint();

	ExplorePoint(&p1);

	ExplorePoint2(p1);

	delete p;

	cout << "===========================================" << endl;

	Point start(1, 1);
	Point koniec(1, 9);

	Section odcinek(start, koniec);

	odcinek.WriteSection();

	cout << "===========================================" << endl;

	Point q1(2, 3);
	Point q2(2, 5);
	Point q3(7, 3);
	Point q4(7, 4);

	Quadrangle czworobok(q1, q2, q3, q4);

	czworobok.WriteQuadrangle();

	system("pause");

	return 0;
}