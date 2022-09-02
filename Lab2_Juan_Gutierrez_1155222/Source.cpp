#include <iostream>
//Struct del conjunto de las figueras
struct figuras_geometricas {
	//atributos
	double lado;
	double altura;
	double apotema;
	//metodos
	double perimetro(double lado, int no_lados) {
		return lado * no_lados;
	};
	double area_triangulo(double lado, double altura) {
		return ((double)lado * (double)altura) / 2;
	};
	double area_rectangulo(double lado) {
		return lado * lado;
	};
	double area_demas_figuras(double lado, double apotema, int no_lados) {
		return (perimetro(lado, no_lados) * apotema) / 2;
	};
}
//Son las figuras geometricas que se pueden acceder con el struct.
triangulo,
cuadrilatero,
pentagono,
hexagono,
heptagono,
octagono,
eneagono,
decagono
;

int main() {
	//Comienza el menu donde elije que figura quiere.
	int eleccion;
	do {
		system("cls");
		std::cout << "Programa para determinar el area y perimetro de figuras geometricas rectas. \n";
		std::cout << "Elija la figura que quiere:\n1. triangulo\n2. cuadrilatero\n3. pentagono\n4. hexagono\n5. heptagono\n6. octagono\n7. eneagono\n8. decagono\n*coloque el numero de su eleccion*\n";
		std::cin >> eleccion;
	} while(eleccion < 0 || eleccion > 8);
	//Aqui se ve cual fue la eleccion y recurre la solicitud de datos de cada una respectivamente.
	if (eleccion == 1) {
		std::cout << "Ingrese el lado del triangulo \n";
		std::cin >> triangulo.lado;
		std::cout << "Ingrese la altura del triangulo \n";
		std::cin >> triangulo.altura;
		std::cout << "El area del triangulo es de: " << triangulo.area_triangulo(triangulo.lado, triangulo.altura) << "\n";
		std::cout << "El perimetro del triangulo es de: " << triangulo.perimetro(triangulo.lado, 3) << "\n";
	}
	else if (eleccion == 2) {
		std::cout << "Ingrese el lado del cuadrilatero \n";
		std::cin >> cuadrilatero.lado;
		std::cout << "El area del cuadrilatero es de: " << cuadrilatero.area_rectangulo(cuadrilatero.lado) << "\n";
		std::cout << "El perimetro del cuadrilatero es de: " << cuadrilatero.perimetro(cuadrilatero.lado, 4) << "\n";
	}
	else if (eleccion == 3) {
		std::cout << "Ingrese el lado del pentagono \n";
		std::cin >> pentagono.lado;
		std::cout << "Ingrese el apotema del pentagono \n";
		std::cin >> pentagono.apotema;
		std::cout << "El area del pentagono es de: " << pentagono.area_demas_figuras(pentagono.lado, pentagono.apotema, 5) << "\n";
		std::cout << "El perimetro del pentagono es de: " << pentagono.perimetro(pentagono.lado, 5) << "\n";
	}
	else if (eleccion == 4) {
		std::cout << "Ingrese el lado del hexagono \n";
		std::cin >> hexagono.lado;
		std::cout << "Ingrese el apotema del hexagono \n";
		std::cin >> hexagono.apotema;
		std::cout << "El area del hexagono es de: " << hexagono.area_demas_figuras(hexagono.lado, hexagono.apotema, 6) << "\n";
		std::cout << "El perimetro del hexagono es de: " << hexagono.perimetro(hexagono.lado, 6) << "\n";
	}
	else if (eleccion == 5) {
		std::cout << "Ingrese el lado del heptagono \n";
		std::cin >> heptagono.lado;
		std::cout << "Ingrese el apotema del heptagono \n";
		std::cin >> heptagono.apotema;
		std::cout << "El area del heptagono es de: " << heptagono.area_demas_figuras(heptagono.lado, heptagono.apotema, 7) << "\n";
		std::cout << "El perimetro del heptagono es de: " << heptagono.perimetro(heptagono.lado, 7) << "\n";
	}
	else if (eleccion == 6) {
		std::cout << "Ingrese el lado del octagono \n";
		std::cin >> octagono.lado;
		std::cout << "Ingrese el apotema del octagono \n";
		std::cin >> octagono.apotema;
		std::cout << "El area del octagono es de: " << octagono.area_demas_figuras(octagono.lado, octagono.apotema, 8) << "\n";
		std::cout << "El perimetro del octagono es de: " << octagono.perimetro(octagono.lado, 8) << "\n";
	}
	else if (eleccion == 7) {
		std::cout << "Ingrese el lado del eneagono \n";
		std::cin >> eneagono.lado;
		std::cout << "Ingrese el apotema del eneagono \n";
		std::cin >> eneagono.apotema;
		std::cout << "El area del eneagono es de: " << eneagono.area_demas_figuras(eneagono.lado, eneagono.apotema, 9) << "\n";
		std::cout << "El perimetro del eneagono es de: " << eneagono.perimetro(eneagono.lado, 9) << "\n";
	}
	else if (eleccion == 8) {
		std::cout << "Ingrese el lado del decagono \n";
		std::cin >> decagono.lado;
		std::cout << "Ingrese el apotema del decagono \n";
		std::cin >> decagono.apotema;
		std::cout << "El area del decagono es de: " << decagono.area_demas_figuras(decagono.lado, decagono.apotema, 10) << "\n";
		std::cout << "El perimetro del decagono es de: " << decagono.perimetro(decagono.lado, 10) << "\n";
	}
	//En caso se haya colocado una opcion invalida.
	else {
		std::cout << "Coloque una opccion valida \n";
	}
	return 0;
}