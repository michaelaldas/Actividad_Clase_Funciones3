#include <iostream>
using namespace std;

//EJERCICIO 1) Una función recibe 3 números enteros.
// La función debe devolver el mayor de ellos.
//No debe utilizar condiciones compuestas (AND, ni OR)

int mayor(int num1, int num2, int num3)
{
    //num1 = 10, num2 = 8, mum3 = 6
    int may;
    if(num1 > num2)
        if (num1> num3)
            may=num1;
        else
            may=num3;
    else
        if(num2 > num3)
            may=num2;
        else
            may=num3;

        return may;
}

//EJERCICIO 2) Una función recibe como parámetro un número entero,
// que representa el mes del año. La función debe devolver
// el nombre del mes. Por ejemplo
// si el mes es 2 debe devolver "febrero".

string nombre_mes(int mes)
{
    string aux="";
    if(mes==1)
        aux="Enenero";
    else if(mes==2)
        aux="Febrero";
    else if(mes==3)
        aux="Marzo";
    else if(mes==4)
        aux="Abril";
    else if(mes==5)
        aux="Mayo";
    else if(mes==6)
        aux="Junio";
    else if(mes==7)
        aux="Julio";
    else if(mes==8)
        aux="Agosto";
    else if(mes==9)
        aux="Septiembre";
    else if(mes==10)
        aux="Octubre";
    else if(mes==11)
        aux="Nobiembre";
    else if(mes==12)
        aux="Diciembre";
    else
        aux="Mes fuera de rango";

    return aux;
}

//EJERCICIO 3) Diseñe la función que genere un rectángulo.
// La función debe recibir un entero que indica el número
// de filas del rectángulo; y un carácter que indica
// el relleno del rectángulo.

string cuadrado(int fila, char relleno)
{
    string aux="";
    for(int i=1; i<=fila; i++)
    {
        for(int j=1; i<=10; j++)
            aux = aux + relleno;
        aux=aux+ "\n";
    }
    return aux;
}

//EJERCICIO 4) Diseñe una función que imprima los primeros n números primos.
//El parámetro n indica el total de primos a imprimir.

bool esPrimo(int num)
{
    int cont=2;
    bool flat=true;
    while(cont <= num/2 && flat==true)
    {
        if(num % cont ==0)
            flat = false;
        cont++;
    }
    return flat;
}

void imprimePrimos(int n)
{
    int i=1; int j=1;
    while(i<=n)
    {
        j++;
        if (esPrimo(j))
        {
            cout<<" "<< j;
            i++;
        }
    }
}

//EJERCICIO 5) Diseñe la función que devuelva la sumatoria de los n primeros números primos.
//El parámetro n indica el total de primos a sumar.

int sumatoriaPrimo(int n)

{
    int i=1; int j=1; int suma=0;
    while (i<=n)
    {
        j++;
        if (esPrimo(j))
        {
            suma+=j; i++;
        }
    }
    return suma;
}

//EJERCICIO 6) Diseñe la funcion que recibe un entero que represente el mes del año.
//La funcion debe retornar el dia maximo que trae ese mes. Por ejemplo si es
//7 debe devolver 31. Ojo con el mes de febrero.

int diaMaximoDelMes(int mes, int anio)
{
    int limite=0;
    if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 ||mes==10 || mes==12)
        limite=31;
    else if(mes==2)

        if (anio % 4 == 0)
            limite = 29;
        else
            limite = 28;
        else
            limite=30;

        return limite;

}


int main()
{
    cout<<endl<<"El mayor de 20, 10, 8 es: "<<mayor(20,10,8);
    cout<<endl<<"El mayor de 20, 30, 21 es: "<<mayor(20,30,21);
    cout<<endl<<"El mayor de 20, 30, 210 es: "<<mayor(20,30,210);

    cout<<endl<<"El mes 5 corresponde a "<<nombre_mes(5);
    cout<<endl<<"El mes 1 corresponde a "<<nombre_mes(1);
    cout<<endl<<"El mes 12 corresponde a "<<nombre_mes(12);
    cout<<endl<<"El mes 15 corresponde a "<<nombre_mes(15);

    cout<<endl;
    cout<<"Imprimiendo figuras "<<endl;
    cout<<cuadrado(5,'a');
    cout<<endl;
    cout<<cuadrado(3,'+');
    cout<<endl;
    cout<<cuadrado(6,'-');

    cout<<endl<<"Impresion de primos";
    imprimePrimos(10);

    cout<<endl<<"La sumatoria de los 5 primeros primos es: ";
    int suma=sumatoriaPrimo(5);
    cout<<suma;
    //cout<<sumatoriaPrimo(5);

    cout<<endl<<"Enero trae "<<diaMaximoDelMes(1,2021)<<" DIAS";
    cout<<endl<<"Diciembre trae "<<diaMaximoDelMes(12,2021)<<" DIAS";
    cout<<endl<<"Junio trae "<<diaMaximoDelMes(6,2021)<<" DIAS";
    cout<<endl<<"Febrero de 2016 trae "<<diaMaximoDelMes(2,2016)<<" DIAS";
    return 0;
}
