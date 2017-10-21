#include "stdafx.h"
#include "Ex1Classes.h"
#include "iostream"

using namespace std;

//Konstruktor bezparametrowy
Point::Point(void)
{
	x = y = 0;
	cout << "konstruktor - Point::Point(void)" << endl;
}

//konstruktor dwuparametrowy
Point::Point(int x, int y) : x(x), y(y)
{
	cout << "konstruktor dwuparametrowy - Point::Point(int x, int y)" << endl;
}

//konstruktor kopiujacy
Point::Point(Point &p)
{
	x = p.x;
	y = p.y;
	cout << "konstruktor kopiujacy - Point::Point(Point &p)" << endl;
}

//destruktor
Point::~Point(void)
{
	cout << "destruktor - Point::~Point(void)" << endl;
}

//wypisywanie
void Point::WritePoint()
{
	cout << "Zmienna x=" << this->x << " Zmienna y=" << this->y << endl;
}

//konstruktor dwuparametrowy
Section::Section(Point& p1, Point& p2) :Beg(p1), End(p2)
{
	cout << "konstruktor dwuparametrowy - Section::Section(Point&, Point&)" << endl;
}

//wypisanie Section
void Section::WriteSection()
{
	cout << "Poczatkowy punkt";
	Beg.WritePoint();
	cout << "Koncowy punkt";
	End.WritePoint();
}

//konstruktor czteroparametrowy
Quadrangle::Quadrangle(Point& p1, Point& p2, Point& p3, Point& p4):P1(p1), P2(p2), P3(p3), P4(p4)
{
	cout << "konstruktor czteroparametrowy - Quadrangle::Quadrangle(Point&, Point&, Point&, Point&)" << endl;
}

//wypisanie Quadrangle
void Quadrangle::WriteQuadrangle()
{
	cout << "Punkt P1";
	P1.WritePoint();
	cout << "Punkt P2";
	P2.WritePoint();
	cout << "Punkt P3";
	P3.WritePoint();
	cout << "Punkt P4";
	P4.WritePoint();
}