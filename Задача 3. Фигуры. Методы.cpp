// Задача 2. Фигуры. Стороны и углы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct List
{
	std::string first_name {"correct"};
	std::string last_name {"uncorrect"};
};


class Triangle
{
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };
	int A{ 0 };
	int B{ 0 };
	int C{ 0 };
public:
	List Tring;
	void setTriangle()
	{
		std::cout << "Enter size a: ";
		std::cin >> a;
		this->a = a;
		std::cout << "Enter size b: ";
		std::cin >> b;
		this->b = b;
		std::cout << "Enter size c: ";
		std::cin >> c;
		this->c = c;
		std::cout << "Enter corner A: ";
		std::cin >> A;
		this->A = A;
		std::cout << "Enter corner B: ";
		std::cin >> B;
		this->B = B;
		std::cout << "Enter corner C: ";
		std::cin >> C;
		this->C = C;
	}
	void metodTriangle()
	{
		if (C == 90) std::cout << "right-angled triangle:" << std::endl << Tring.first_name << std::endl;
		else if ((a == b == c) && (A == 60) && (B == 60) && (C == 60)) std::cout << "equilateral triangle:" << std::endl << Tring.first_name << std::endl;
		else if ((a == c) && (A == C)) std::cout << "isosceles triangle:" << std::endl << Tring.first_name << std::endl;
		else std::cout << "triangle:" << std::endl << Tring.last_name << std::endl;
		std::cout << "Sides: " << "a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Corners:: " << "A = " << A << " B = " << B << " C = " << C << std::endl;
	}
	Triangle()
	{
	};
	Triangle(int a, int b, int c, int A, int B, int C)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	};
};

class Quadrilateral
{
	int a{ 0 };
	int b{ 0 };
	int c{ 0 };
	int d{ 0 };
	int A{ 0 };
	int B{ 0 };
	int C{ 0 };
	int D{ 0 };
public:
	List Tring;
	
	void setQuadrilateral()
	{
		std::cout << "Enter size a: ";
		std::cin >> a;
		this->a = a;
		std::cout << "Enter size b: ";
		std::cin >> b;
		this->b = b;
		std::cout << "Enter size c: ";
		std::cin >> c;
		this->c = c;
		std::cout << "Enter size d: ";
		std::cin >> d;
		this->d = d;
		std::cout << "Enter corner A: ";
		std::cin >> A;
		this->A = A;
		std::cout << "Enter corner B: ";
		std::cin >> B;
		this->B = B;
		std::cout << "Enter corner C: ";
		std::cin >> C;
		this->C = C;
		std::cout << "Enter corner D: ";
		std::cin >> D;
		this->D = D;
	}
	void metodQuadrilateral()
	{
		if ((a == b == c == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90)) std::cout << "square:" << std::endl << Tring.first_name << std::endl;
		else if ((a == c) && (b == d) && (A == 90) && (B == 90) && (C == 90) && (D == 90))  std::cout << "rectangle:" << std::endl << Tring.first_name << std::endl;
		else if ((a == b == c == d) && (A == C) && (B == D)) std::cout << "rhomb:" << std::endl << Tring.first_name << std::endl;
		else if ((a == c) && (b == d) && (A == C) && (B == D)) std::cout << "parallelogram:" << std::endl << Tring.first_name << std::endl;
		else std::cout << "Quadrilateral:" << std::endl << Tring.last_name << std::endl;;
		std::cout << "Sides: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Corners:: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}
	Quadrilateral()
	{
	};
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	};
};

class Figure : public Triangle, Quadrilateral
{
	int F = 0;
	int T = 3;
	int Q = 4;
public:
	List Tring;
	void print_info()
	{
		int fSide;
		std::cout << "Enter number of sides:" << std::endl;
		std::cin >> fSide;


		if (fSide == F)
		{
			std::cout << "Figure: " << std::endl;
			std::cout << Tring.first_name << std::endl;
			std::cout << "Number of sides: " << F << std::endl;
		}
		else if (fSide == T)
		{
			std::cout << "Triangle: " << std::endl;
			std::cout << "Number of sides: " << T << std::endl;
			public_method1();

		}
		else if (fSide == Q)
		{
			std::cout << "Quadrilateral: " << std::endl;
			std::cout << "Number of sides: " << Q << std::endl;
			public_method2();
		}
		else std::cout << "Figure is undefined" << std::endl;
	}
	Figure() {};

protected:
	void public_method1()
	{
		setTriangle();
		metodTriangle();
	}
	void public_method2()
	{
		setQuadrilateral();
		metodQuadrilateral();
	}

};


int main(int argc, char** argv)
{
	Figure figure;

	Figure* par_figure = &figure;
	par_figure->print_info();


	return EXIT_SUCCESS;
};



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
