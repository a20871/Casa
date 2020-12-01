/*****************************************************************//**
 * \file   ManipulVar.c
 * \brief  Exercício 1 (Manipular Variáveis I) da folha de exercícios I
 * 
 * 1. Sabendo que uma circunferência tem o raio de 2cm, calcule a sua área e perímetro. Assuma que PI=3.14.
 * 2. Sabendo que um triangulo tem de base 1.5cm e de altura 2cm, calcula a sua área.
 * 3. Sabendo que um aluno teve as notas 12, 13.4 e 15 nos três testes de uma unidade curricular, qual foi a média aritmética que obteve no final?
 * 
 * \author Sérgio
 * \e-mail a20871@alunos.ipca.pt
 * \date   01 December 2020
 *********************************************************************/


#include <stdio.h>
#include <locale.h>
#include "Dados.h"



int main() {
	/*
	* Inclusão de caracteres especiais para escrita correta de português.
	*/
	setlocale(LC_ALL, "");


	float raio = 4; ///< variável raio pré determinada

	/**
	 * Determinação da área da circunferência.
	 * 
	 * \param raio
	 * \return área da circunferência
	 */
	float areaCircunf = (PI * (raio * raio));

	/**
	 * Determinação do perímetro da circunferência.
	 * 
	 * \param raio ---é o raio
	 * \param PI
	 * \return perímetro da circunferência
	 */
	float perimCircunf = (2 * PI * raio);
	
	/// <summary>
	/// Apresetação dos resultados ao utilizador
	/// </summary>
	/// <returns>Área e perímetro da circunferência</returns>
	printf("a área da circunferencia e': %.2f cm2\n", areaCircunf);

	printf("O perimetro da circunferencia e': %.2f cm\n", perimCircunf);


	float base = 1.5;				/**introdução do valor da variável base do triângulo*/
	float alt = 2;					///introdução do valor da variável alturda do triângulo


	/**
	 * Cálculo da área do triângulo.
	 * 
	 * \param base
	 * \param alt
	 * \return área do triângulo especificado
	 */
	float areaTriang = ((base * alt) / 2);

	/*
	Apresentação de resultados da área do triangulo ao utilizador.
	*/
	printf("a area do triangulo e': %.2f cm2", areaTriang);


	/*
	Indicação das 3 notas do aluno
	*/
	float nota1 = 12, nota2 = 13.4, nota3 = 15;

	/**
	 * Cálculo da média das notas.
	 * 
	 * \return 
	 */
	float media = ((nota1 + nota2 + nota3) / 3);
	printf("A média do aluno é: %.2f", media);



}