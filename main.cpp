#include <iostream>
#include <cmath>  // Para operaciones matematicas como pow()
#include <cstdlib> // Para usar system("cls")

using namespace std;

// Prototipos de funciones para el calculo de areas
double areaCuadrado(double lado);
double areaRectangulo(double base, double altura);
double areaCirculo(double radio);
double areaTriangulo(double base, double altura);
double areaTrapecio(double base1, double base2, double altura);
double areaRombo(double diagonalMayor, double diagonalMenor);
double areaPentagono(double perimetro, double apotema);
double areaHexagono(double lado);
double areaParalelogramo(double base, double altura);
double areaElipse(double radioMayor, double radioMenor);

// Prototipos de funciones para el calculo de volumenes
double volumenCubo(double lado);
double volumenEsfera(double radio);
double volumenCilindro(double radio, double altura);
double volumenCono(double radio, double altura);
double volumenPrismaRectangular(double largo, double ancho, double altura);
double volumenPiramide(double base, double altura);

void mostrarMenu();
void calcularArea();
void calcularVolumen();

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;
        switch(opcion) {
            case 1: calcularArea(); break;
            case 2: calcularVolumen(); break;
            case 3: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion no valida. Intente nuevamente.\n";
        }
    } while(opcion != 3);

    return 0;
}

void mostrarMenu() {
    cout << "\n=== Calculadora de Areas y Volumenes ===\n";
    cout << "1. Calcular Area\n";
    cout << "2. Calcular Volumen\n";
    cout << "3. Salir\n";
    cout << "Seleccione una opcion: ";
}

void calcularArea() {
    int opcion;
    cout << "\n=== Calculo de Areas ===\n";
    cout << "1. Cuadrado\n";
    cout << "2. Rectangulo\n";
    cout << "3. Circulo\n";
    cout << "4. Triangulo\n";
    cout << "5. Trapecio\n";
    cout << "6. Rombo\n";
    cout << "7. Pentagono\n";
    cout << "8. Hexagono\n";
    cout << "9. Paralelogramo\n";
    cout << "10. Elipse\n";
    cout << "Seleccione una figura: ";
    cin >> opcion;

    system("cls"); // Limpia la consola antes de mostrar el resultado

    switch(opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del cuadrado: " << areaCuadrado(lado) << " unidades cuadradas\n";
            break;
        }
        case 2: {
            double base, altura;
            cout << "Ingrese la base y la altura del rectangulo: ";
            cin >> base >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del rectangulo: " << areaRectangulo(base, altura) << " unidades cuadradas\n";
            break;
        }
        case 3: {
            double radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del circulo: " << areaCirculo(radio) << " unidades cuadradas\n";
            break;
        }
        case 4: {
            double base, altura;
            cout << "Ingrese la base y la altura del triangulo: ";
            cin >> base >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del triangulo: " << areaTriangulo(base, altura) << " unidades cuadradas\n";
            break;
        }
        case 5: {
            double base1, base2, altura;
            cout << "Ingrese las bases y la altura del trapecio: ";
            cin >> base1 >> base2 >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del trapecio: " << areaTrapecio(base1, base2, altura) << " unidades cuadradas\n";
            break;
        }
        case 6: {
            double diagonalMayor, diagonalMenor;
            cout << "Ingrese las diagonales mayor y menor del rombo: ";
            cin >> diagonalMayor >> diagonalMenor;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del rombo: " << areaRombo(diagonalMayor, diagonalMenor) << " unidades cuadradas\n";
            break;
        }
        case 7: {
            double perimetro, apotema;
            cout << "Ingrese el perimetro y la apotema del pentagono: ";
            cin >> perimetro >> apotema;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del pentagono: " << areaPentagono(perimetro, apotema) << " unidades cuadradas\n";
            break;
        }
        case 8: {
            double lado;
            cout << "Ingrese el lado del hexagono: ";
            cin >> lado;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del hexagono: " << areaHexagono(lado) << " unidades cuadradas\n";
            break;
        }
        case 9: {
            double base, altura;
            cout << "Ingrese la base y la altura del paralelogramo: ";
            cin >> base >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area del paralelogramo: " << areaParalelogramo(base, altura) << " unidades cuadradas\n";
            break;
        }
        case 10: {
            double radioMayor, radioMenor;
            cout << "Ingrese los radios mayor y menor de la elipse: ";
            cin >> radioMayor >> radioMenor;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Area de la elipse: " << areaElipse(radioMayor, radioMenor) << " unidades cuadradas\n";
            break;
        }
        default: cout << "Opcion no valida.\n";
    }
}

void calcularVolumen() {
    int opcion;
    cout << "\n=== Calculo de Volumenes ===\n";
    cout << "1. Cubo\n";
    cout << "2. Esfera\n";
    cout << "3. Cilindro\n";
    cout << "4. Cono\n";
    cout << "5. Prisma Rectangular\n";
    cout << "6. Piramide\n";
    cout << "Seleccione una figura: ";
    cin >> opcion;

    system("cls"); // Limpia la consola antes de mostrar el resultado

    switch(opcion) {
        case 1: {
            double lado;
            cout << "Ingrese el lado del cubo: ";
            cin >> lado;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen del cubo: " << volumenCubo(lado) << " unidades cubicas\n";
            break;
        }
        case 2: {
            double radio;
            cout << "Ingrese el radio de la esfera: ";
            cin >> radio;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen de la esfera: " << volumenEsfera(radio) << " unidades cubicas\n";
            break;
        }
        case 3: {
            double radio, altura;
            cout << "Ingrese el radio y la altura del cilindro: ";
            cin >> radio >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen del cilindro: " << volumenCilindro(radio, altura) << " unidades cubicas\n";
            break;
        }
        case 4: {
            double radio, altura;
            cout << "Ingrese el radio y la altura del cono: ";
            cin >> radio >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen del cono: " << volumenCono(radio, altura) << " unidades cubicas\n";
            break;
        }
        case 5: {
            double largo, ancho, altura;
            cout << "Ingrese el largo, ancho y altura del prisma rectangular: ";
            cin >> largo >> ancho >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen del prisma rectangular: " << volumenPrismaRectangular(largo, ancho, altura) << " unidades cubicas\n";
            break;
        }
        case 6: {
            double base, altura;
            cout << "Ingrese el area de la base y la altura de la piramide: ";
            cin >> base >> altura;
            system("cls"); // Limpia la consola antes de mostrar el resultado final
            cout << "Volumen de la piramide: " << volumenPiramide(base, altura) << " unidades cubicas\n";
            break;
        }
        default: cout << "Opcion no valida.\n";
    }
}

// Implementacion de las funciones de calculo de areas
double areaCuadrado(double lado) {
    return lado * lado;
}

double areaRectangulo(double base, double altura) {
    return base * altura;
}

double areaCirculo(double radio) {
    return M_PI * radio * radio;
}

double areaTriangulo(double base, double altura) {
    return 0.5 * base * altura;
}

double areaTrapecio(double base1, double base2, double altura) {
    return 0.5 * (base1 + base2) * altura;
}

double areaRombo(double diagonalMayor, double diagonalMenor) {
    return 0.5 * diagonalMayor * diagonalMenor;
}

double areaPentagono(double perimetro, double apotema) {
    return 0.5 * perimetro * apotema;
}

double areaHexagono(double lado) {
    return (3 * sqrt(3) / 2) * lado * lado;
}

double areaParalelogramo(double base, double altura) {
    return base * altura;
}

double areaElipse(double radioMayor, double radioMenor) {
    return M_PI * radioMayor * radioMenor;
}

// Implementacion de las funciones de calculo de volumenes
double volumenCubo(double lado) {
    return pow(lado, 3);
}

double volumenEsfera(double radio) {
    return (4.0/3) * M_PI * pow(radio, 3);
}

double volumenCilindro(double radio, double altura) {
    return M_PI * pow(radio, 2) * altura;
}

double volumenCono(double radio, double altura) {
    return (1.0/3) * M_PI * pow(radio, 2) * altura;
}

double volumenPrismaRectangular(double largo, double ancho, double altura) {
    return largo * ancho * altura;
}

double volumenPiramide(double base, double altura) {
    return (1.0/3) * base * altura;
}
