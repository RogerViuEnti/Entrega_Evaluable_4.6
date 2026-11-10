#include <iostream>
using namespace std;
int main() {
	for (int i{1};i<=10;i++) {
		for (int j{ 1 };j <= 5;j++) {
			cout << '@';
		}
		cout << '\n';
	}
	return 0;
}
/*Este código repite el patrón @@@@@ 10 veces. Para hacerlo, la variante i és la que se encarga de que sea 10 lineas del patron,
y la variante j de que sean 5 caracteres por linea.
El código sigue un camino muy senzillo, cuando i és 1, escribe un @ por cada j, hasta llegar a 5, i después utiliza \n para pasar a la siguiente línea */