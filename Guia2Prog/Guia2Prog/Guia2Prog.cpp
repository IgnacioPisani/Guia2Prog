#include <iostream>
#include "Guia2Prog.h"

//Ejercicio 1: Sumar puntos al jugador- if.
//Pedir al usuario los puntos iniciales y los puntos ganados.
//Si los puntos ganados son mayores a 100, mostrar un mensaje especial de "¡Gran puntuación!".
//Mostrar el total.


//int main()
//{
//    IngresarPuntos();
//    ChequearPuntos(PuntosGanados);
//    MostrarTotal(PuntosIniciales, PuntosGanados);
//	return 0;
//}

void IngresarPuntos()
{
    std::cout << "Ingrese sus puntos iniciales" << std::endl;
    std::cin >> PuntosIniciales;
    std::cout << "Ingrese sus puntos ganados" << std::endl;
    std::cin >> PuntosGanados;
}

void ChequearPuntos(int puntos)
{
    if (puntos>100)
    {
        std::cout << "Gran puntuacion!" << std::endl;
    }
}

void MostrarTotal(int puntosIniciales, int puntosGanados)
{
    TotalPuntos = puntosIniciales + puntosGanados;
    std::cout << "El total de puntos es: " << TotalPuntos;
}

//Ejercicio 2: Calcular daño recibido - if.
//Ingresar la vida actual del personaje y cuánto daño recibe.
//Restar el daño a la vida.
//Si la vida resultante es menor o igual a 0, mostrar “¡Has muerto!”.
//Mostrar la vida resultante.


//int main()
//{
//    IngresarVidaDanio();
//    Vida = CalcularVidaRestante(Vida, Danio);
//    ChequearVida(Vida);
//    MostrarVidaResultante(Vida);
//	return 0;
//}

void IngresarVidaDanio()
{
    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> Vida;
    std::cout << "Ingrese el danio" << std::endl;
    std::cin >> Danio;
}

int CalcularVidaRestante(int vida, int danio)
{
   return vida - danio;
}

void ChequearVida(int vida)
{
    if (vida <=0)
    {
        std::cout << "Has muerto!" << std::endl;
    }
}

void MostrarVidaResultante(int vida)
{
    std::cout << "Vida final: " << vida;
}


//Ejercicio 3: Curar al personaje - if / else
//Ingresar la vida actual y una cantidad de curación.
//Sumar la curación a la vida.
//Si la vida supera 100, mostrar "Vida máxima alcanzada".
//Si es menor a 100, mostrar "Aún puedes curarte más".
//Mostrar la vida resultante.

//int main()
//{
//    IngresarVidaCuracion();
//    Vida = CalcularVidaCuracion(Vida, Curacion);
//    ChequearVidaCuracion(Vida);
//    MostrarVidaResultante(Vida);
//    return 0;
//}

void IngresarVidaCuracion()
{
    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> Vida;
    std::cout << "Ingrese la curacion" << std::endl;
    std::cin >> Curacion;
}

int CalcularVidaCuracion(int vida, int curacion)
{
    return vida + curacion;
}

void ChequearVidaCuracion(int vida)
{
    if (vida > 100)
    {
        std::cout << "Vida maxima alcanzada" << std::endl;
    }
    else
    {
        std::cout << "Aun puedes curarte mas" << std::endl;
    }
}

//Ejercicio 4: Calcular experiencia necesaria para subir de nivel - if / else if / else
//Ingresar el nivel actual del personaje y calcular cuánta experiencia necesita para el próximo nivel :
//
//-Si el nivel es menor a 10, mostrar "Nivel bajo, necesitas 100 XP".
//
//- Si el nivel está entre 10 y 19, mostrar "Nivel medio, necesitas 250 XP".
//
//- Si el nivel es 20 o más, mostrar "Nivel alto, necesitas 500 XP".

//int main()
//{
//    IngresarNivel();
//    CalcularExpNecesaria(Nivel);
//    return 0;
//}


void IngresarNivel()
{
    std::cout << "Ingrese Nivel" << std::endl;
    std::cin >> Nivel;
}

void CalcularExpNecesaria(int nivel)
{
    if (nivel<10) 
    {
        std::cout << "Nivel bajo, necesitas 100 XP" << std::endl;
    }
    else if (nivel >= 10 && nivel <= 19 )
    {
        std::cout << "Nivel medio, necesitas 250 XP" << std::endl;
    }
    else
    {
        std::cout << "Nivel alto, necesitas 500 XP" << std::endl;
    }
}


//Ejercicio 5: Multiplicar monedas recogidas por un multiplicador - if / else if / else
//Pedir cantidad de monedas recogidas y un multiplicador.
//
//- Si el multiplicador es 1, mostrar “Sin bonificación”.
//
//- Si es 2, mostrar “Bonificación x2 activa”.
//
//- En cualquier otro caso, mostrar “Bonificación personalizada”.
//Mostrar el total de monedas multiplicadas.


//int main()
//{
//    IngresarMonedasMultiplicador();
//    ChequearBonificacion(Multiplicador);
//    MostrarTotalMonedas(CantMonedas, Multiplicador);
//    return 0;
//}

void IngresarMonedasMultiplicador()
{
    std::cout << "Ingrese las Monedas" << std::endl;
    std::cin >> CantMonedas;
    std::cout << "Ingrese el Multiplicador" << std::endl;
    std::cin >> Multiplicador;
}

void ChequearBonificacion(int multiplicador)
{
    if (multiplicador == 1)
    {
        std::cout << "Sin bonificacion" << std::endl;
    }
    else if (multiplicador == 2)
    {
        std::cout << "Bonificacion x2 activa" << std::endl;
    }
    else
    {
        std::cout << "Bonificacion personalizada" << std::endl;
    }
}

void MostrarTotalMonedas(int monedas, int multiplicador)
{
    TotalMonedas = monedas * multiplicador;
    std::cout << "El total de monedas es: " << TotalMonedas;
}


//Ejercicio 6: Sistema simple de compra - enumerador y switch
//Definir un enum con tipos de objetos : ESPADA = 1, ESCUDO = 2, POTION = 3.
//Pedir al usuario la cantidad de monedas y el tipo de objeto a comprar.
//Usar un switch para restar el precio según el objeto :
//
//-Espada cuesta 100
//
//- Escudo cuesta 75
//
//- Poción cuesta 25
//
//Mostrar las monedas restantes.
//Si no hay suficientes monedas, mostrar “No puedes comprar este objeto”.

//int main()
//{
//    IngresarMonedasTipoObjeto();
//    ChequearTipoObjeto(TipoObjeto, CantMonedas);
//    return 0;
//}
//


void IngresarMonedasTipoObjeto()
{
    std::cout << "Ingrese las Monedas" << std::endl;
    std::cin >> CantMonedas;
    std::cout << "Ingrese el numero del tipo de objeto" << std::endl;
    std::cout << "ESPADA-1" << std::endl;
    std::cout << "ESCUDO-2" << std::endl;
    std::cout << "POCION-3" << std::endl;
    std::cin >> TipoObjeto;
}

void ChequearTipoObjeto(int tipoObjeto,int monedas)
{
	switch (tipoObjeto)
	{
	case ESPADA:
        CalcularMonedasCompra(monedas, 100);
        break;

	case ESCUDO:
        CalcularMonedasCompra(monedas,75);
        break;

	case POCION:
        CalcularMonedasCompra(monedas,25);
        break;
	default:
        break;
	}
}

void CalcularMonedasCompra(int monedas, int precio)
{
    if (monedas>=precio) {
        TotalMonedas = monedas - precio;
        std::cout << "Monedas Restantes: " << TotalMonedas << std::endl;
    }
    else
    {
        std::cout << "No puedes comprar este objeto" << std::endl;

    }

}


//Ejercicio 7: Crear una función que sume dos números - enumerador y switch
//Crear una función Sumar(int a, int b) que devuelva el resultado.
//Usar un enum con tipos de recursos : PUNTOS = 1, MONEDAS = 2, EXPERIENCIA = 3.
//Pedir al usuario qué tipo de recurso quiere sumar y usar switch para mostrar un mensaje acorde :
//
//“Has ganado puntos”
//
//“Has ganado monedas”
//
//“Has ganado experiencia”
//
//Mostrar el total sumado.

//int main()
//{
//    IngresarNumeros();
//    ChequearTipoRecurso(TipoRecurso);
//    Total = Sumar(Num1, Num2);
//    MostrarTotal(Total);
//    return 0;
//}


void IngresarNumeros()
{
    std::cout << "Ingrese numero 1" << std::endl;
    std::cin >> Num1;
    std::cout << "Ingrese numero 2" << std::endl;
    std::cin >> Num2;
    std::cout << "Ingrese el numero del tipo de recurso" << std::endl;
    std::cout << "PUNTOS-1" << std::endl;
    std::cout << "MONEDAS-2" << std::endl;
    std::cout << "EXPERIENCIA-3" << std::endl;
    std::cin >> TipoRecurso;
}

int Sumar(int num1, int num2)
{
    return num1+num2;
}

void ChequearTipoRecurso(int tipoRecurso)
{
    switch (tipoRecurso)
    {
    case PUNTOS:
        std::cout << "Has ganado puntos" << std::endl;
        break;

    case MONEDAS:
        std::cout << "Has ganado monedas" << std::endl;
        break;

    case EXPERIENCIA:
        std::cout << "Has ganado experiencia" << std::endl;
        break;
    default:
        break;
    }
}

void MostrarTotal(int total)
{
    std::cout << "Total: " << total << std::endl;
}

//Ejercicio 8: Crear una función que calcule daño - if
//La función CalcularDanio(int ataque, int defensa) debe devolver ataque - defensa.
//Si el resultado es menor o igual a cero, mostrar “El ataque fue inútil”.
//Si es mayor a cero, mostrar “El enemigo recibió daño”.
//Mostrar el valor del daño.

//
//int main()
//{
//    IngresarAtaqueDefensa();
//    Danio = CalcularDanio(Ataque, Defensa);
//    ChequearDanio(Danio);
//    return 0;
//}


void IngresarAtaqueDefensa()
{
    std::cout << "Ingrese ataque" << std::endl;
    std::cin >> Ataque;
    std::cout << "Ingrese defensa" << std::endl;
    std::cin >> Defensa;
}

int CalcularDanio(int ataque, int defensa)
{
    return ataque-defensa;
}

void ChequearDanio(int danio)
{
	if (danio>0)
	{
        std::cout << "El enemigo recibio danio" << std::endl;

	}
	else
	{
        std::cout << "El ataque fue inutil" << std::endl;

	}
}

//Ejercicio 9: Ingresar los stats del jugador y mostrarlos en pantalla -
//Pedir al usuario que ingrese :
//
//Nombre
//Ataque
//Defensa
//Velocidad de ataque
//Vida máxima
//Multiplicador de daño crítico
//
//Luego :
//
//Si el multiplicador es mayor a 2, mostrar “Crítico alto”
//
//Si es menor o igual a 1, mostrar “Crítico bajo”
//
//Si está entre 1 y 2, mostrar “Crítico normal”
//Mostrar todos los stats.

//int main()
//{
//    IngresarStats();
//    ChequearMultiplicadorCritico(MultiplicadorCritico);
//    ImprimirStats();
//    return 0;
//}

void IngresarStats()
{
    std::cout << "Ingrese nombre" << std::endl;
    std::cin >> Nombre;
    std::cout << "Ingrese ataque" << std::endl;
    std::cin >> Ataque;
    std::cout << "Ingrese defensa" << std::endl;
    std::cin >> Defensa;
    std::cout << "Ingrese velocidad de ataque" << std::endl;
    std::cin >> VelAtaque;
    std::cout << "Ingrese Vida Maxima" << std::endl;
    std::cin >> VidaMaxima;
    std::cout << "Ingrese Multiplicador de Danio Critico" << std::endl;
    std::cin >> MultiplicadorCritico;
}

void ChequearMultiplicadorCritico(float multiplicadorCritico)
{
	if (multiplicadorCritico>2)
	{
        std::cout << "Critico Alto" << std::endl;
	}
    else if (multiplicadorCritico <= 1)
    {
        std::cout << "Critico Bajo" << std::endl;

    }
	else
	{
        std::cout << "Critico Normal" << std::endl;

	}
}

void ImprimirStats()
{
    std::cout << "Nombre: "<< Nombre << std::endl;
    std::cout << "Ataque: " << Ataque << std::endl;
    std::cout << "Defensa: " << Defensa << std::endl;
    std::cout << "Velocidad de ataque: " << VelAtaque << std::endl;
    std::cout << "Vida Maxima: "<<VidaMaxima << std::endl;
    std::cout << "Multiplicador de Danio Critico: " << MultiplicadorCritico << std::endl;
}



//Ejercicio 10: Calcular tiempo total de juego - if / else if / else
//Pedir cuántos minutos jugó el jugador en tres días distintos.
//Mostrar :
//
//    El total de minutos jugados
//
//    El promedio por día
//
//    Y el total en formato horas : minutos
//
//    Además :
//
//Si jugó más de 10 horas totales, mostrar “Jugador muy activo”
//
//Si jugó entre 5 y 10 horas, mostrar “Jugador regular”
//
//Si jugó menos de 5 horas, mostrar “Jugador casual”

//int main()
//{
//    IngresarMinutos();
//    CalcularTiempo(MinDia1, MinDia2, MinDia3);
//    ChequearHoras(HorasTotales);
//    return 0;
//}


void IngresarMinutos()
{
    std::cout << "Ingresar minutos jugados el primer dia" << std::endl;
    std::cin >> MinDia1;
    std::cout << "Ingresar minutos jugados el segundo dia" << std::endl;
    std::cin >> MinDia2;
    std::cout << "Ingresar minutos jugados el tercer dia" << std::endl;
    std::cin >> MinDia3;
}

void CalcularTiempo(int min1, int min2, int min3)
{
    MinutosTotales = min1 + min2 + min3;
    HorasTotales = MinutosTotales / 60;
    MinutosRestantesTotales = MinutosTotales % 60;
    MinutosPromedio = MinutosTotales / 3;
    HorasPromedio = MinutosPromedio / 60;
    MinutosRestantesPromedio = MinutosPromedio % 60;
    std::cout << "Total de minutos jugados: " << MinutosTotales << std::endl
	<< "Promedio: " << MinutosPromedio << std::endl
    << "Promedio formateado: " << FormatearTiempo(HorasPromedio, MinutosRestantesPromedio) << std::endl
	<< "Total formateado: " << FormatearTiempo(HorasTotales, MinutosRestantesTotales) << std::endl;
}

std::string FormatearTiempo(int horas, int minutos)
{
    char buffer[6];
    snprintf(buffer, sizeof(buffer), "%02d:%02d", horas, minutos);
    return std::string(buffer);
}

void ChequearHoras(int horas)
{
    if (horas > 10)
    {
        std::cout << "Jugador muy activo" << std::endl;
    }
    else if (horas >= 5 && horas <= 10)
    {
        std::cout << "Jugador regular" << std::endl;

    }
    else
    {
        std::cout << "Jugador casual" << std::endl;
    }

}

//Ejercicio 11: Simulación de combate simple - Como quieran!
//Crear un programa que pida :
//
//Nombre, vida, ataque y defensa del jugador
//
//Nombre, vida, ataque y defensa del enemigo
//
//Luego :
//
//Usar una función CalcularDanio para calcular :
//
//Daño del jugador al enemigo = ataqueJugador - defensaEnemigo
//
//Daño del enemigo al jugador = ataqueEnemigo - defensaJugador
//
//Usar condicionales para asegurar que el daño no sea negativo(mínimo 0)
//
//Restar los daños a las vidas
//
//Mostrar todos los valores resultantes después del intercambio de ataques
//
//Mostrar :
//
//Vida inicial y final del jugador y del enemigo
//
//Si algún personaje queda con vida menor o igual a 0, mostrar :
//
//    “Jugador derrotado”
//
//    “Enemigo derrotado”
//
//    Si ambos quedan vivos, mostrar “El combate continúa”
//


//int main()
//{
//    IngresarStatsJugadorEnemigo();
//    MostrarVidaFinal();
//    ChequearVidaJugadorEnemigo(Vida, VidaEnemigo);
//    return 0;
//}


void IngresarStatsJugadorEnemigo()
{
    std::cout << "Ingresar Nombre del Jugador" << std::endl;
    std::cin >> Nombre;
    std::cout << "Ingresar Ataque del Jugador" << std::endl;
    std::cin >> Ataque;
    std::cout << "Ingresar Defensa del Jugador" << std::endl;
    std::cin >> Defensa;
    std::cout << "Ingresar Vida del Jugador" << std::endl;
    std::cin >> Vida;
    std::cout << "Ingresar Nombre del Enemigo" << std::endl;
    std::cin >> NombreEnemigo;
    std::cout << "Ingresar Ataque del Enemigo" << std::endl;
    std::cin >> AtaqueEnemigo;
    std::cout << "Ingresar Defensa del Enemigo" << std::endl;
    std::cin >> DefensaEnemigo;
    std::cout << "Ingresar Vida del Enemigo" << std::endl;
    std::cin >> VidaEnemigo;
    std::cout << "La Vida inicial del Jugador es: " << Vida << std::endl;
    std::cout << "La Vida inicial del Enemigo es: " << VidaEnemigo << std::endl;

}

void MostrarVidaFinal()
{
    std::cout << "El jugador ejecuta un ataque..." << std::endl;
    std::cout << "El enemigo ejecuta un ataque..." << std::endl;
    VidaEnemigo -= CalcularDanioLimitado(Ataque, DefensaEnemigo);
    Vida -= CalcularDanioLimitado(AtaqueEnemigo, Defensa);
    std::cout << "La Vida final del Jugador es: " << Vida << std::endl;
    std::cout << "La Vida final del Enemigo es: " << VidaEnemigo << std::endl;
}

int CalcularDanioLimitado(int atq, int dfs) {
    int Danio = CalcularDanio(atq, dfs);
    return Danio >= 0 ? Danio : 0;
}

void ChequearVidaJugadorEnemigo(int vidaJugador, int vidaEnemigo)
{
    if (vidaJugador <= 0 && vidaEnemigo <= 0) {
        std::cout << "Ambos han sido derrotados" << std::endl;
    }
	else if (vidaJugador<=0)
	{
        std::cout << "Jugador derrotado" << std::endl;
	}
    else if (vidaEnemigo <= 0)
	{
        std::cout << "Enemigo derrotado" << std::endl;
	}
	else
	{
        std::cout << "El combate continua" << std::endl;

	}

}
