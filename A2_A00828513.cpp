// Alejandro Jose Murcia Alfaro - A00828513
// Pensamiento Computacional Orientado a Objetos
// Miercoles 10 de Noviembre
// Tarea 2

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;



///////////////////////////////////////////////////////////////////

// Ejercicio 1: operaNumeros

  //Análisis

    //Datos de Entrada:
    // num1,num2, opcion

    //Datos de Salida:
    // resultado

    //Proceso(s):
    // <S>: num1 + num2, <R>: num1 - num2, <M>: num1 * num2


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Leer datos de entrada
    //3. Desplegar menu de opciones y validar entrada
    //4. Ejecutar calculo deseado
      //Si opcion == 'S' suma
      //Si opcion == 'R' resta
      //Si opcion == 'M' multiplicacion
      //Sino "opcion incorrecta"
    //5. Desplegar resultado

void operacionNumerica(){


  //1. Declaracion de variables

    int num1 , num2 , resultado;
    char opcion;

    cout << "Problema 1: operaNumeros\n--------------------------\n";


    //2. Leer datos de entrada

    cout << "\nIngresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;


    //3. Desplegar menu de opciones y validar entrada

    cout << "\nIngresa la letra de la operacion que deseas ejecutar:\nS - sumar ambos numeros \nR - restar el primero menos el segundo \nM - multiplica ambos numeros\n";

    cout << "Ingresa la opción que deseas: ";
    cin >> opcion;

    while(toupper(opcion) != 'S' && toupper(opcion) != 'R' && toupper(opcion) != 'M')

    {
      cout << "Opcion no valida. Ingresa la letra nuevamente: ";
      cin >> opcion;
    }


    //4. Ejecutar calculo deseado

    if (toupper(opcion) == 'S')

    {
      resultado = num1 + num2;
    }

    else if (toupper(opcion) == 'R')

    {
      resultado = num1 - num2;
    }

    else

    {
      resultado = num1 * num2;

    }

    //5. Desplegar resultado

    cout <<  "\nEl resultado de la operación es:  " << resultado << endl;
    
}


///////////////////////////////////////////////////////////////////

// Ejercicio 2: numeroImpar

  //Análisis

    //Datos de Entrada:
    //numImpar

    //Datos de Salida:
    //mensaje

    //Proceso(s):
    //prueba_impar = numImpar/2


  //Algoritmo General

    //1. Declaracion de variables
    //2. Leer datos de entrada y validacion de datos
    //3. Desplegar resultado


void numeroImpar(){



    int numImpar;
    int prueba;

    cout << "\nProblema 2: numeroImpar\n--------------------------\n";


    //2. Leer datos de entrada y validacion de datos

    cout << "\nIngresa un número impar: ";
    cin >> numImpar;

    prueba = numImpar % 2;

    while(prueba == 0)

    {
      cout << "Error, debes ingresar un numero impar. Ingresa el numero nuevamente: ";
      cin >> numImpar;

    }

    //3. Desplegar resultado

    cout << "\nGracias por teclear un valor impar. ¡Te has ganado unos chilaquiles!\n";

}


///////////////////////////////////////////////////////////////////

// Ejercicio 3: sumaPares

  //Análisis

    //Datos de Entrada
    // Ninguno

    //Datos de Salida
    // sumaPares

    //Proceso(s)
    // sumaPares = for(int contador = 0; contador <=100; contador = contador+2)


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Sumar primeros cien numeros
    //3. Desplegar resultado

void sumaPares(){

    int sumaPares, contador;

    //1. Declaracion de Variables

    sumaPares = 0;

    cout << "\nProblema 3: sumaPares\n--------------------------\n";

    //2. Sumar primeros cien numeros

    for (contador = 0; contador <= 100; contador = contador + 2)

    {
      sumaPares = sumaPares + contador;
    }

    //3. Desplegar resultado

    cout <<  "\nLa suma de numeros pares entre el 0 al 100:  " << sumaPares << endl;

}

///////////////////////////////////////////////////////////////////

// Ejercicio 4: mediaAritmetica

  //Análisis

    //Datos de Entrada
    // n: cantidad de datos, numeros a promediar

    //Datos de Salida
    // media: media aritmetica

    //Proceso(s)
    // media = (x1 + x2 + x3... xn)/n


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Leer datos de entrada
    //3. Calculamos promedio
    //4. Desplegar resultado

void promedio(){

    //1. Declaracion de Variables

    int numero, cont;
    double media, sumaMedia, contenedor;

    sumaMedia = 0;

    cout << "\nProblema 4: mediaAritmetica\n--------------------------\n";

    //2. Leer datos de entrada

    cout << "\nIngresa la cantidad de números a promediar: ";
    cin >> numero;


    for(cont = 1; cont <= numero; cont++)

    {
      cout << "\nIngresa el número: ";

      cin >> contenedor;

      sumaMedia = sumaMedia + contenedor;

    }


    //3. Calculamos promedio

    media = sumaMedia/numero;

    //4. Desplegar resultado

    cout <<  "\nLa media aritmetica de los numeros es:  " << media << endl;

}


///////////////////////////////////////////////////////////////////

// Ejercicio 5: numeroMagico

//Análisis

    //Datos de Entrada
    // num: numero de eleccion del usuario

    //Datos de Salida
    // numAleatorio, intentos

    //Proceso(s)
    // if (numAleatorio < num) entonces "MENOS"
    // if (numAleatorio > num) entonces "MAS"
    // if (numAleatorio = num) entonces "Felicidades"
    


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Generar numero aleatorio
    //3. Solicitar entrada de numero. Validar e indicar "MAS" o "MENOS" segun sea el caso
    //4. Desplegar "Acertaste con el valor magico num despues de intentos"


void numeroMagico(){

    //1. Declaracion de Variables

    int num, numAleatorio, intentos;

    intentos = 0;

    cout << "\nProblema 5: numeroMagico\n--------------------------\n";


    //2. Generar numero aleatorio

    numAleatorio = rand() % 100 + 1;

    //3. Solicitar entrada de numero. Hacer un ciclo do-while dando pistas de "MAS" o "MENOS" segun sea el caso

    do{

      cout << "\nAdivina, adivinador. ¿Cuál es el número secreto (1 al 100)? Adivínalo: ";
      
      cin >> num;

      intentos = intentos + 1;

      if(numAleatorio < num)

      {
        cout << "\nMENOS\n";
      }

      else if(numAleatorio > num)

      {
        cout << "\nMAS\n";
      }

    }while (numAleatorio != num);


    //4. Desplegar "Acertaste con el valor magico num despues de intentos"

    cout << "\nAcertaste con el valor magico " << numAleatorio << " despues de " << intentos << " intentos\n";


}


///////////////////////////////////////////////////////////////////

// Ejercicio 6: conversionCelsiusFarenheit

//Análisis

    //Datos de Entrada
    // valorCelsius, numConversiones, incrementoCelsius

    //Datos de Salida
    // valorFarenheit, valorCelsius

    //Proceso(s)
    // valorFarenheit = (9.0 / 5.0) * valorCelsius + 32


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Leer datos de entrada
    //3. Calculo de valorFarenheit
    //4. Desplegar resultados


void conversionCelsiusFarenheit(){

  //1. Declaracion de Variables

    int numConversiones, contador;
    double valorCelsius, valorFarenheit, incrementoCelsius, valorActualC, valorActualF;


    cout << "\nProblema 6: conversionCelsiusFarenheit\n--------------------------\n";

  //2. Leer datos de entrada

    cout << "\nIngresa el valor de la temperatura en grados Celsius: ";
    cin >> valorCelsius;

    cout << "\nIngresa el numero de conversiones a realizarse: ";
    cin >> numConversiones;
     
    cout << "\nIngresa el incremento deseado: ";
    cin >> incrementoCelsius;


  //3. Calculo de valorFarenheit, sumandole el incremento y calculando su valor en un ciclo for

  cout << "\nConversión de grados Celsius a Farenheit\n";
  cout << "\nFARENHEIT\t CELSIUS\n";

  valorFarenheit = (9.0/5.0) * valorCelsius + 32.0;


  cout << valorFarenheit << "\t\t\t " << valorCelsius << "\n";

  valorActualC = valorCelsius;


  //4. Desplegar resultados


  for(contador = 0; contador <= numConversiones; contador++)

    {

      valorActualC = valorActualC + incrementoCelsius;
      
      valorActualF = (9.0/5.0) * valorActualC + 32.0;

      cout << valorActualF << "\t\t\t " << valorActualC << "\n";


    }


}


///////////////////////////////////////////////////////////////////

// Ejercicio 7: serieAritmetica


//Análisis

    //Datos de Entrada:
    //a = 1, d = 3, n = 25

    //Datos de Salida:
    // terminoActual, acumSuma

    //Proceso(s):
    // terminoActual = (a + numTermino * d);


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Ciclo for en el que determinamos cada uno de los valores de la sucesion utilizando la siguiente relacion terminoactual = a + numTermino * d)
    //3. Desplegamos el valor total de la suma


void serieAritmetica(){

  //1. Declaracion de Variables

  int a = 1, d = 3, n = 25, numTermino, acumSuma, terminoActual;

  cout << "\nProblema 7: serieAritmetica\n--------------------------\n";

  terminoActual = 0;

  acumSuma = 0;


  //2. Ciclo for en el que determinamos cada uno de los valores de la sucesion utilizando la siguiente relacion terminoactual = a + numTermino * d)


  for(numTermino = 1; numTermino <= n; numTermino++)

    {
      terminoActual = (a + (numTermino - 1) * d);

      cout << "Termino " << numTermino << ": " << terminoActual << "\n" ;
    
      acumSuma = acumSuma + terminoActual;

    }


  //3. Desplegamos el valor total de la suma

  cout << "Valor total de la serie: " << acumSuma << "\n" ;


}


///////////////////////////////////////////////////////////////////

// Ejercicio 8: mediasGeometricaArmonica

//Análisis

    //Datos de Entrada
    // xn: valores que se desean obtener la media geometrica y armonica

    //Datos de Salida
    // mediaGeometrica: media geometrica
    // mediaArmonica: media armonica

    //Proceso(s)
    // mediaGeometrica = (x1 * x2 * x3... * xn)^(1/n)
    // mediaArmonica = (n)((1/x1) + (1/x2) + ... (1/xn))


  //Algoritmo General

    //1. Declaracion de Variables
    //2. Leer datos de entrada
      //while xn != 0 realizar multiplicacion y suma para ambas acumuladas
      // xn == 0, terminar captura de datos
    //3. Calculamos mediaGeometrica y mediaArmonica:
    //4. Desplegar resultado

void mediasGeometricaArmonica(){

  //1. Declaracion de Variables

  double datoN, acumGeo, acumArmo, mediaGeometrica, mediaArmonica, numeroDatos;

  datoN = 1;
  numeroDatos = 1;
  acumGeo = 1;
  acumArmo = 0;




  cout << "\nProblema 8: mediasGeometricaArmonica\n--------------------------\n";


  //2. Leer datos de entrada
  // xn == 0, terminar captura de datos

  while (datoN != 0)

  {
    cout << "\nIngresa el dato numero " << numeroDatos << ": ";
    cin >> datoN;

    //while xn != 0 realizar multiplicacion y suma para ambas acumuladas

    if (datoN == 0)

    {

      break;

    }

    else

    {

      acumGeo = acumGeo * datoN;

      acumArmo = acumArmo + (1/datoN);

      numeroDatos = numeroDatos + 1;

    }

 
  }



  //3. Calculamos mediaGeometrica y mediaArmonica:

  numeroDatos = numeroDatos - 1.0;

  mediaGeometrica = pow(acumGeo, (1/numeroDatos));

  mediaArmonica = numeroDatos / acumArmo;


  //4. Desplegar resultados

  cout << "\nMedia Geometrica: " << mediaGeometrica << "\n";
  cout << "\nMedia Armonica: " << mediaArmonica << "\n";


}

///////////////////////////////////////////////////////////////////

// Menu de Opciones

int menu(){

  int opcion;

  cout << "\nMenú de Opciones" <<
  "\n1. Operaciones con números" <<
  "\n2. Número impar" <<
  "\n3. Suma pares" <<
  "\n4. Promedio" <<
  "\n5. Número mágico" <<
  "\n6. Conversión Celsius a Farenheit" <<
  "\n7. Serie artimética" <<
  "\n8. Media geométrica armónica" <<
  "\n0. Salir\n" <<
  "\nTeclea la opción: ";
  
  cin >> opcion;

  return opcion;
}

//////////////////////////////////////////////////////////////////////////////////


int main() {
  int opcion;

  do{
    opcion = menu();

    switch (opcion) {

      case 0:
        cout << "Gracias por usar nuestro programa :)\n";
        break;

      case 1:
        operacionNumerica();
        break;

      case 2:
        numeroImpar();
        break;

      case 3:
        sumaPares();
        break;

      case 4:
        promedio();
        break;

      case 5:
        numeroMagico();
        break;

      case 6:
        conversionCelsiusFarenheit();
        break;

      case 7:
        serieAritmetica();
        break;

      case 8:
        mediasGeometricaArmonica();
        break;

      default:
        cout << "Opción Incorrecta\n";
        break;
      
    } //Fin de switch

  }while (opcion != 0);

  return 0;

}
