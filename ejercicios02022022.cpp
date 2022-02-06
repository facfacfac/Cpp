#include <iostream>
#include <vector>

using namespace std;

void pedirContrasena(string clavePedida) {
  /* Duda: por qué hace falta declarar la variable aquí? no se puede
  fuera? */
  string miClave;
do {
  cout << "Por favor, introduce la contraseña: " << endl;
  cin >> miClave;
  }
  while (miClave != clavePedida);
}

bool comprobarEdad (int edadIntroducida) {
  bool mayorDeEdad; // Aqui igual, hay que declararla dentro... ?
  if (edadIntroducida < 18) mayorDeEdad = false;
  else mayorDeEdad = true;

  return mayorDeEdad;
}

string comprobarNota (int notaIntroducida) {
  string calificacion;
  if (notaIntroducida < 5) calificacion = "suspenso";
  else if (notaIntroducida >= 5 and notaIntroducida < 6) calificacion = "aprobado";
  else if (notaIntroducida >= 6 and notaIntroducida < 7) calificacion = "bien";
  else if (notaIntroducida >= 7 and notaIntroducida < 9) calificacion = "notable";
  else if (notaIntroducida >= 9 and notaIntroducida <= 10) calificacion = "sobresaliente";
  else calificacion = "Tas pasao loko";

  return calificacion;
}

string comprobarNumero (int numeroIntroducido) {
  string comprobacion;
  if (numeroIntroducido%2 == 0) comprobacion = "par";
  else comprobacion = "impar";

  return comprobacion;
}


int sumaPotenciasDe2(int numeroIntroducido) {
  int suma = 0;
  for (int i = 1; i <= numeroIntroducido; i++) {
    suma = suma + 2*i;
  }

  return suma;
}

int main() {

string contrasena = "mamadisimo";
int edad;
bool edadComprobada;
int nota;
string notaComprobada;
int numero;
string numeroComprobado;
int listaNum[5] = {2, 4, 7, 9, 10};
int aPotenciar;
int aSumar;

/* Ejercicio 1: escribir un programa que pida una contraseña y no
permita avanzar hasta no haber introducido la contraseña correcta */

pedirContrasena(contrasena);

/* Ejercicio 2: programa que pregunte una edad y responda si la persona
es mayor o menor de edad */

cout << "Introduce tu edad: " << endl;
cin >> edad;
edadComprobada = comprobarEdad(edad);
cout << "Veamos si eres mayor de edad: \n (1 = eres mayor de edad; 0 = no eres mayor de edad) \n" << edadComprobada << endl;

/* Ejercicio 3: programa que pregunte una nota y responda si ha sacado sobresaliente,
notable, bien, suficiente o suspenso */

cout << "Introduce tu nota: " << endl;
cin >> nota;
notaComprobada = comprobarNota(nota);
cout << "Has obtenido una calificación de " << notaComprobada << endl;

/* Ejercicio 4: programa que pida un número y responda
si es par o impar */

cout << "Introduce un número: " << endl;
cin >> numero;
numeroComprobado = comprobarNumero(numero);
cout << "El número introducido es " << numeroComprobado << endl;

/* Ejercicio 5: definir un array de números. Escribir un programa
que seleccione solo los pares */

int misNumeros[] = {2, 5, 7, 9, 10};
vector<int> misPares;

for (int num: misNumeros) {
  if (num %2 == 0) {
    misPares.push_back(num);
  }
};

cout << "La lista de números es: " << endl;
for (int num: misNumeros) {
  cout << num << endl;
}

cout << "Los números pares son:" << endl;

for (int num: misPares) {
  cout << num << endl;
}


/* Ejercicio 6: leer números desde teclado hasta que se escriba -1
y devolver el máximo, el mínimo y la media de todos los números */
int introducido;
vector<int> listaIntroducidos;

while (introducido != -1) {
  cout << "Introduce un número. Introduce -1 para parar: ";
  cin >> introducido;
  listaIntroducidos.push_back(introducido);
}

cout << "Has introducido los siguientes números:" << endl;
for (int num: listaIntroducidos) {
  cout << num << endl;
}

int maximo = listaIntroducidos[0];
for (int num: listaIntroducidos) {
  if (num > maximo) maximo = num;
}

cout << "El mayor número introducido es: " << maximo << endl;

int minimo = listaIntroducidos[0];
for (int num: listaIntroducidos) {
  if (num < minimo) minimo = num;
}
cout << "El menor número introducido es (obviamente): " << minimo << endl;

/* Ejercicio 7: sumar los 2^n números, siendo 'n' un número
introducido desde teclado */

cout << "Introduce un número: " << endl;
cin >> aPotenciar;
aSumar = sumaPotenciasDe2(aPotenciar);
cout << aSumar << endl;

/* Ejercicio 8: cuenta regresiva 100 a 0 */

for (int i = 100; i > 0; i--) {
  cout << i << endl;
}


return 0;
}
