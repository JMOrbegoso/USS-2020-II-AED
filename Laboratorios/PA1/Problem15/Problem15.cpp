#include <iostream>

using namespace std;

int main()
{
    short puntaje1 = 0, puntaje2 = 0, puntaje3 = 0, puntaje4 = 0, puntaje5 = 0, puntajetotal;
    char alternativa1, alternativa2, alternativa3, alternativa4, alternativa5;

    cout << "BIENVENIDO AL PROGRAMA INTELECTO PERUANO";
    cout << "Para las preguntas planteadas debes responder con una sola alternativa SI(S)o NO(N)";
    cout << "Empecemos con tu intelecto peruano";

    cout << "/t/La moneda nacional del PERU es el dolar (SI o NO).";
    cin >> alternativa1;

    cout << "/t/En Arequipa nace el rio Amazonas(SI o NO).";
    cin >> alternativa2;

    cout << "/t/El territorio peruano constituye de 25 departamentos(SI o NO).";
    cin >> alternativa3;

    cout << "/t/El 28 de julio se celebra la Batalla de Angamos(SI o NO).";
    cin >> alternativa4;

    cout << "/t/En el escudo nacional se encuentra el arbol de la quina(SI o NO)";
    cin >> alternativa5;

    if (alternativa1 == 'S') {
        puntaje1 = -1;
    }
    else if (alternativa1 == 'N') {
        puntaje1 = +2;
    }
    else {
        cout << "CODIGO INGRESADO ERRONEO";
    }

    if (alternativa2 == 'S') {
        puntaje2 = +2;
    }
    else if (alternativa2 == 'N') {
        puntaje2 = -1;
    }
    else {
        cout << "CODIGO INGRESADO ERRONEO";
    }

    if (alternativa3 == 'S') {
        puntaje3 = -1;
    }
    else if (alternativa3 == 'N') {
        puntaje3 = +2;
    }
    else {
        cout << "CODIGO INGRESADO ERRONEO";
    }

    if (alternativa4 == 'S') {
        puntaje4 = -1;
    }
    else if (alternativa4 == 'N') {
        puntaje4 = +2;
    }
    else {
        cout << "CODIGO INGRESADO ERRONEO";
    }

    if (alternativa5 == 'S') {
        puntaje5 = +2;
    }
    else if (alternativa5 == 'N') {
        puntaje5 = -1;
    }
    else {
        cout << "CODIGO INGRESADO ERRONEO";
    }

    puntajetotal = (puntaje1 + puntaje2 + puntaje3 + puntaje4 + puntaje5);

    cout << "El puntaje total del jugador es: " << puntajetotal << endl;

    return 0;
}