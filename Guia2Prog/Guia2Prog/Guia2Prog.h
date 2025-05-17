#pragma once
//EJERCICIO1
void IngresarPuntos();
void ChequearPuntos(int puntos);
void MostrarTotal(int puntosIniciales,int puntosGanados);
int PuntosIniciales = 0;
int PuntosGanados = 0;
int TotalPuntos = 0;

//EJERCICIO2
void IngresarVidaDanio();
int CalcularVidaRestante(int vida, int danio);
void ChequearVida(int vida);
int Vida = 0;
int Danio = 0;

//EJERCICIO3
void IngresarVidaCuracion();
int CalcularVidaCuracion(int vida, int curacion);
void ChequearVidaCuracion(int vida);
int Curacion = 0;


//EJERCICIO4
void IngresarNivel();
void CalcularExpNecesaria(int nivel);
int Nivel = 0;


//EJERCICIO5
void IngresarMonedasMultiplicador();
void ChequearBonificacion(int multiplicador);
int CalcularTotalMonedas(int monedas,int multiplicador);
int CantMonedas = 0;
int Multiplicador = 0;
int TotalMonedas = 0;


//EJERCICIO6
void IngresarMonedasTipoObjeto();
void ChequearTipoObjeto(int tipoObjeto, int monedas);
void CalcularMonedasCompra(int monedas, int precio);
int TipoObjeto = 0;
enum ETipoObjeto
{
	Espada,
    Escudo,
	Pocion
};


//EJERCICIO7
void IngresarNumeros();
int Sumar(int num1, int num2);
void ChequearTipoRecurso(int tipoRecurso);
int TipoRecurso = 0;
enum ETipoRecurso
{
	Puntos,
	Monedas,
	Experiencia
};
int Num1 = 0;
int Num2 = 0;
int Total = 0;


//EJERCICIO8
void IngresarAtaqueDefensa();
int CalcularDanio(int ataque, int defensa);
void ChequearDanio(int danio);
int Ataque = 0;
int Defensa = 0;


//EJERCICIO9
void IngresarStats();
void ChequearMultiplicadorCritico(float multiplicadorCritico);
void ImprimirStats();
std::string Nombre;
int VelAtaque = 0;
int VidaMaxima = 0;
float MultiplicadorCritico = 0.f;

//EJERCICIO10

void IngresarMinutos();
void calcularTiempo(int min1,int min2, int min3);
std::string FormatearTiempo(int horas, int minutos);
void chequearHoras(int horas);
int MinDia1 = 0;
int MinDia2 = 0;
int MinDia3 = 0;
int MinutosTotales = 0;
int HorasTotales = 0;
int MinutosRestantesTotales = 0;
int MinutosPromedio = 0;
int HorasPromedio = 0;
int MinutosRestantesPromedio = 0;

//EJERCICIO11
void IngresarStatsJugadorEnemigo();
int CalcularDanioLimitado(int atq, int dfs);
void ChequearVidaJugadorEnemigo(int vidaJugador, int vidaEnemigo);
std::string NombreEnemigo;
int AtaqueEnemigo = 0;
int DefensaEnemigo = 0;
int VidaEnemigo = 0;
