// Задача 2. Фигуры. Стороны и углы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {
protected:
	int side;
	std::string NameFigure;
public:
	Figure()
	{
		this->side = 0;
		this->NameFigure = "Figure:";
	}
	virtual void print_info()
	{
		std::cout << NameFigure << std::endl;
		std::cout << "Correct" << std::endl;
		std::cout << "Number of sides: " << side << std::endl;
		std::cout << std::endl;
	};
	virtual ~Figure() {}
};

class Triangle : public Figure {
private:
	int sideA;
	int sideB;
	int sideC;
	int cornerA;
	int cornerB;
	int cornerC;
	std::string NameTriangle;
	std::string tapeTriangle;
public:
	Triangle(int a, int b, int c, int A, int B, int C) // : sideA, sideB, sideC, conorA, conorB, conorC{};
	{
		this->sideA = a;
		this->sideB = b;
		this->sideC = c;
		this->cornerA = A;
		this->cornerB = B;
		this->cornerC = C;
	};
	void setNameTriangle()
	{
		if (cornerC == 90) {
			NameTriangle = "Right-angled triangle:"; 
			if (cornerA + cornerB + cornerC == 180) tapeTriangle = "Correct";
			else tapeTriangle = "Uncorrect";
		}
		else if ((sideA == sideB == sideC) && (cornerA == 60) && (cornerB == 60) && (cornerC == 60))
		{
			NameTriangle = "Equilateral triangle:";
			tapeTriangle = "Correct";
		}
		else if ((sideA == sideC) && (cornerA == cornerC))
		{
			NameTriangle = "Isosceles triangle:";
			tapeTriangle = "Uncorrect";
		}
		else
		{
			NameTriangle = "Triangle:";
			if(cornerA + cornerB + cornerC == 180) tapeTriangle = "Correct";
			else tapeTriangle = "Uncorrect";
		}
	}
	void print_info() {
		std::cout << NameTriangle << std::endl;
		std::cout << tapeTriangle << std::endl;
		std::cout << "Sides: a =" << sideA << " b = " << sideB << " c = " << sideC << std::endl;
		std::cout << "Corners: a =" << cornerA << " b = " << cornerB << " c = " << cornerC << std::endl;
		std::cout << std::endl;
	}
};

class Quadrilateral :public Figure
{
private:
	int sideA;
	int sideB;
	int sideC;
	int sideD;
	int cornerA;
	int cornerB;
	int cornerC;
	int cornerD;
	std::string NameQuadrilateral;
	std::string typeQuadrilateral;
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->sideA = a;
		this->sideB = b;
		this->sideC = c;
		this->sideD = d;
		this->cornerA = A;
		this->cornerB = B;
		this->cornerC = C;
		this->cornerD = D;
	};

	void setNameQuadrilateral()
	{
		if ((cornerA == 90) && (cornerB == 90) && (cornerC == 90) && (cornerD == 90))
		{
			if ((sideA == sideB) && (sideA == sideC) && (sideA == sideD))
			{
				NameQuadrilateral = "Square:";
				typeQuadrilateral = "Correct";
			}
			else
			{
				NameQuadrilateral = "Rectangle:";
				typeQuadrilateral = "Correct";
			}
		}
		else
		{
			if ((cornerA == cornerC) && (cornerB == cornerD))
			{
				if ((sideA == sideB) && (sideA == sideC) && (sideA == sideD))
				{
					NameQuadrilateral = "Rhomb:";
					typeQuadrilateral = "Uncorrect";
				}
				else
				{
					NameQuadrilateral = "Parallelogram:";
					typeQuadrilateral = "Uncorrect";
				}
			}
			else
			{
				NameQuadrilateral = "Quadrilateral:";
				if (cornerA + cornerB + cornerC + cornerC == 360) typeQuadrilateral = "Correct";
				else typeQuadrilateral = "Uncorrect";
				
			}
		}
	}

	void print_info() {
		std::cout << NameQuadrilateral << std::endl;
		std::cout << typeQuadrilateral << std::endl;
		std::cout << "Sides: " << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD << std::endl;
		std::cout << "Corners:: " << "A = " << cornerA << " B = " << cornerB << " C = " << cornerC << " D = " << cornerD << std::endl;
		std::cout << std::endl;
	}
};

int main() {

	Figure figure;
	Figure* p;
	p = &figure;
	p->print_info();

	Triangle triangle(10, 20, 30, 50, 60, 70);
	triangle.setNameTriangle();
	p = &triangle;
	p->print_info();

	Triangle triangle1(10, 20, 30, 50, 60, 90);
	triangle1.setNameTriangle();
	p = &triangle1;
	p->print_info();

	Triangle triangle2(10, 20, 30, 50, 40, 90);
	triangle2.setNameTriangle();
	p = &triangle2;
	p->print_info();

	Triangle triangle3(10, 20, 10, 50, 60, 50);
	triangle3.setNameTriangle();
	p = &triangle3;
	p->print_info();

	Triangle triangle4(30, 30, 30, 60, 60, 60);
	triangle4.setNameTriangle();
	p = &triangle4;
	p->print_info();
	    
	Quadrilateral quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilateral1.setNameQuadrilateral();
	p = &quadrilateral1;
	p->print_info();

	Quadrilateral quadrilateral2(10, 20, 10, 20, 90, 90, 90, 90);
	quadrilateral2.setNameQuadrilateral();
	p = &quadrilateral2;
	p->print_info();

	Quadrilateral quadrilateral3(20, 20, 20, 20, 90, 90, 90, 90);
	quadrilateral3.setNameQuadrilateral();
	p = &quadrilateral3;
	p->print_info();

	Quadrilateral quadrilateral4(20, 30, 20, 30, 30, 40, 30, 40);
	quadrilateral4.setNameQuadrilateral();
	p = &quadrilateral4;
	p->print_info();

	Quadrilateral quadrilateral5(30, 30, 30, 30, 30, 40, 30, 40);
	quadrilateral5.setNameQuadrilateral();
	p = &quadrilateral5;
	p->print_info();

	return EXIT_SUCCESS;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
