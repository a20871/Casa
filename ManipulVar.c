/*****************************************************************//**
 * \file   ManipulVar.c
 * \brief  Exerc�cio 1 (Manipular Vari�veis I) da folha de exerc�cios I
 * 
 * 1. Sabendo que uma circunfer�ncia tem o raio de 2cm, calcule a sua �rea e per�metro. Assuma que PI=3.14.
 * 2. Sabendo que um triangulo tem de base 1.5cm e de altura 2cm, calcula a sua �rea.
 * 3. Sabendo que um aluno teve as notas 12, 13.4 e 15 nos tr�s testes de uma unidade curricular, qual foi a m�dia aritm�tica que obteve no final?
 * 
 * \author S�rgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   01 December 2020
 *********************************************************************/


#include <stdio.h>
#include <locale.h>
#include "Dados.h"



int main() {
	/*
	* Inclus�o de caracteres especiais para escrita correta de portugu�s.
	*/
	setlocale(LC_ALL, "");


	float raio = 4; ///< vari�vel raio pr� determinada

	/**
	 * Determina��o da �rea da circunfer�ncia.
	 * 
	 * \param raio
	 * \return �rea da circunfer�ncia
	 */
	float areaCircunf = (PI * (raio * raio));

	/**
	 * Determina��o do per�metro da circunfer�ncia.
	 * 
	 * \param raio ---� o raio
	 * \param PI
	 * \return per�metro da circunfer�ncia
	 */
	float perimCircunf = (2 * PI * raio);
	
	/// <summary>
	/// Apreseta��o dos resultados ao utilizador
	/// </summary>
	/// <returns>�rea e per�metro da circunfer�ncia</returns>
	printf("a �rea da circunferencia e': %.2f cm2\n", areaCircunf);

	printf("O perimetro da circunferencia e': %.2f cm\n", perimCircunf);


	float base = 1.5;				/**introdu��o do valor da vari�vel base do tri�ngulo*/
	float alt = 2;					///introdu��o do valor da vari�vel alturda do tri�ngulo


	/**
	 * C�lculo da �rea do tri�ngulo.
	 * 
	 * \param base
	 * \param alt
	 * \return �rea do tri�ngulo especificado
	 */
	float areaTriang = ((base * alt) / 2);

	/*
	Apresenta��o de resultados da �rea do triangulo ao utilizador.
	*/
	printf("a area do triangulo e': %.2f cm2", areaTriang);


	/*
	Indica��o das 3 notas do aluno
	*/
	float nota1 = 12, nota2 = 13.4, nota3 = 15;

	/**
	 * C�lculo da m�dia das notas.
	 * 
	 * \return 
	 */
	float media = ((nota1 + nota2 + nota3) / 3);
	printf("A m�dia do aluno �: %.2f", media);



}