// Guia2Prog.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Guia2Prog.h"

int main()
{
    //IngresarPuntos();
    //IngresarVidaDanio();
    //IngresarVidaCuracion();
    //IngresarNivel();
    //IngresarMonedasMultiplicador();
    //IngresarMonedasTipoObjeto();
    //IngresarNumeros();
    //IngresarAtaqueDefensa();
	//IngresarStats();
    //IngresarMinutos();
    IngresarStatsJugadorEnemigo();
    return 0;
}

void IngresarPuntos()
{
    std::cout << "Ingrese sus puntos iniciales" << std::endl;
    std::cin >> PuntosIniciales;
    std::cout << "Ingrese sus puntos ganados" << std::endl;
    std::cin >> PuntosGanados;
    ChequearPuntos(PuntosGanados);
    MostrarTotal(PuntosIniciales, PuntosGanados);
}

void ChequearPuntos(int puntos)
{
    if (puntos>100)
    {
        std::cout << "¡Gran puntuacion!" << std::endl;
    }
}

void MostrarTotal(int puntosIniciales, int puntosGanados)
{
    TotalPuntos = puntosIniciales + puntosGanados;
    std::cout << "El total de puntos es: " << TotalPuntos;
}

void IngresarVidaDanio()
{
    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> Vida;
    std::cout << "Ingrese el danio" << std::endl;
    std::cin >> Danio;
    Vida=CalcularVidaRestante(Vida, Danio);
    ChequearVida(Vida);
    std::cout << "Vida final: " << Vida;

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

void IngresarVidaCuracion()
{
    std::cout << "Ingrese la vida" << std::endl;
    std::cin >> Vida;
    std::cout << "Ingrese la curacion" << std::endl;
    std::cin >> Curacion;
    Vida = CalcularVidaCuracion(Vida, Curacion);
    ChequearVidaCuracion(Vida);
    std::cout << "Vida final: " << Vida;
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

void IngresarNivel()
{
    std::cout << "Ingrese Nivel" << std::endl;
    std::cin >> Nivel;
    CalcularExpNecesaria(Nivel);
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

void IngresarMonedasMultiplicador()
{
    std::cout << "Ingrese las Monedas" << std::endl;
    std::cin >> CantMonedas;
    std::cout << "Ingrese el Multiplicador" << std::endl;
    std::cin >> Multiplicador;
    ChequearBonificacion(Multiplicador);
    TotalMonedas = CalcularTotalMonedas(CantMonedas, Multiplicador);
    std::cout << "Total Monedas: " << TotalMonedas;
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

int CalcularTotalMonedas(int monedas, int multiplicador)
{
    return monedas * multiplicador;
}

void IngresarMonedasTipoObjeto()
{
    std::cout << "Ingrese las Monedas" << std::endl;
    std::cin >> CantMonedas;
    std::cout << "Ingrese el numero del tipo de objeto" << std::endl;
    std::cout << "ESPADA-0" << std::endl;
    std::cout << "ESCUDO-1" << std::endl;
    std::cout << "POCION-2" << std::endl;
    std::cin >> TipoObjeto;
    ChequearTipoObjeto(TipoObjeto, CantMonedas);
}

void ChequearTipoObjeto(int tipoObjeto,int monedas)
{
	switch (tipoObjeto)
	{
	case Espada:
        CalcularMonedasCompra(monedas, 100);
        break;

	case Escudo:
        CalcularMonedasCompra(monedas,75);
        break;

	case Pocion:
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

void IngresarNumeros()
{
    std::cout << "Ingrese numero 1" << std::endl;
    std::cin >> Num1;
    std::cout << "Ingrese numero 2" << std::endl;
    std::cin >> Num2;
    Total=Sumar(Num1, Num2);
    std::cout << "Ingrese el numero del tipo de recurso" << std::endl;
    std::cout << "PUNTOS-0" << std::endl;
    std::cout << "MONEDAS-1" << std::endl;
    std::cout << "EXPERIENCIA-2" << std::endl;
    std::cin >> TipoRecurso;
    ChequearTipoRecurso(TipoRecurso);
    std::cout << "Total: " << Total << std::endl;


}

int Sumar(int num1, int num2)
{
    return num1+num2;
}

void ChequearTipoRecurso(int tipoRecurso)
{
    switch (tipoRecurso)
    {
    case Puntos:
        std::cout << "Has ganado puntos" << std::endl;
        break;

    case Monedas:
        std::cout << "Has ganado monedas" << std::endl;
        break;

    case Experiencia:
        std::cout << "Has ganado experiencia" << std::endl;
        break;
    default:
        break;
    }
}

void IngresarAtaqueDefensa()
{
    std::cout << "Ingrese ataque" << std::endl;
    std::cin >> Ataque;
    std::cout << "Ingrese defensa" << std::endl;
    std::cin >> Defensa;
    Danio = CalcularDanio(Ataque, Defensa);
    ChequearDanio(Danio);
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
    ChequearMultiplicadorCritico(MultiplicadorCritico);
    ImprimirStats();

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

void IngresarMinutos()
{
    std::cout << "Ingresar minutos jugados el primer dia" << std::endl;
    std::cin >> MinDia1;
    std::cout << "Ingresar minutos jugados el segundo dia" << std::endl;
    std::cin >> MinDia2;
    std::cout << "Ingresar minutos jugados el tercer dia" << std::endl;
    std::cin >> MinDia3;
    calcularTiempo(MinDia1,MinDia2,MinDia3);
}

void calcularTiempo(int min1, int min2, int min3)
{
    MinutosTotales = min1 + min2 + min3;
    HorasTotales = MinutosTotales / 60;
    MinutosRestantesTotales = MinutosTotales % 60;
    MinutosPromedio = MinutosTotales / 3;
    HorasPromedio = MinutosPromedio / 60;
    MinutosRestantesPromedio = MinutosPromedio % 60;
    std::cout << "Total: " << FormatearTiempo(HorasTotales, MinutosRestantesTotales) << std::endl
        << "Promedio: " << FormatearTiempo(HorasPromedio, MinutosRestantesPromedio) << std::endl;
    chequearHoras(HorasTotales);
}

std::string FormatearTiempo(int horas, int minutos)
{
    char buffer[6];
    snprintf(buffer, sizeof(buffer), "%02d:%02d", horas, minutos);
    return std::string(buffer);
}

void chequearHoras(int horas)
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
    std::cout << "El jugador ejecuta un ataque..." << std::endl;
    std::cout << "El enemigo ejecuta un ataque..." << std::endl;
    VidaEnemigo -= CalcularDanioLimitado(Ataque, DefensaEnemigo);
    Vida -= CalcularDanioLimitado(AtaqueEnemigo, Defensa);
    std::cout << "La Vida final del Jugador es: " << Vida << std::endl;
    std::cout << "La Vida final del Enemigo es: " << VidaEnemigo << std::endl;
    ChequearVidaJugadorEnemigo(Vida, VidaEnemigo);

}

int CalcularDanioLimitado(int atq, int dfs) {
    int Danio = CalcularDanio(atq, dfs);
    return Danio >= 0 ? Danio : 0;
}

void ChequearVidaJugadorEnemigo(int vidaJugador, int vidaEnemigo)
{
	if (vidaJugador<=0)
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
