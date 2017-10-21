#pragma once

//----------------------------------------------------------------------------
//klasa reprezentuj¹ca punkt
//----------------------------------------------------------------------------
class Point
{
private:
	int x, y;
public:
	//konstruktor bezparametrowy
	Point(void);

	//konstruktor dwuparametrowy
	Point(int, int);

	//konstruktor kopiujacy
	Point(Point &p);

	//wypisanie
	void WritePoint();

	//destruktor
	~Point(void);
};


class Section
{
private:
	Point Beg;
	Point End;
public:
	//konstruktor podaniapunktow
	Section(Point&, Point&);

	//wypisanie
	void WriteSection();
};


class Quadrangle
{
private:
	Point P1;
	Point P2;
	Point P3;
	Point P4;
public:
	//konstruktor podania punktow
	Quadrangle(Point&, Point&, Point&, Point&);

	//wypisanie
	void WriteQuadrangle();
};