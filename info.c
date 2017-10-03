/***************************************************************************
*  $MCI Módulo de implementação: GRA  Grade de Horário
*
*  Arquivo gerado:              GradeHorario.c
*  Letras identificadoras:      GRA
*
*  Nome da base de software:    Arcabouço para a automação de testes de programas redigidos em C
*  Arquivo da base de software: D:\AUTOTEST\PROJETOS\LISTA.BSW
*
*  Projeto: INF 1301 / 1628 Automatização dos testes de módulos C
*  Gestor:  LES/DI/PUC-Rio
*  Autores: cgln - Cristiane - Guilherme - Leonardo - Nathália
*
*  $HA Histórico de evolução:
*     Versão  Autor    Data     Observações
*     3       cgln  10/set/2017 manutenção das funções do módulo
*     2       cgln  07/set/2017 unificação de todos os módulos em um só projeto
*     1       cgln  02/out/2017 início desenvolvimento
*
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "turma.h"
#include "disciplina.h"
#include "lista.h"
#include "GradeHorario.h"

/***********************************************************************
*
*  $TC Tipo de dados: GRA Info Grade Horario
*
*
***********************************************************************/

	struct InfoGradeHorario {

		Disciplina * disp ;
			/* Disciplina em que o aluno esta cursando */

		Turma * tur ;
			/* Turma da disciplina em que o aluno esta cursando */

		float nota[4] ;
			/* Notas do aluno */

		int faltas ;
			/* Quantidade de faltas do aluno */
    
	} ;

/*****  Código das funções exportadas pelo módulo  *****/

/***************************************************************************
* Função: GRA  &Cria Grade Horario
*  ****/

int CriaGradeHora(Info *inf){
    List *li;
    int ret;
   
    ret=createList(&li);
    return 0;}
    
    
    void insereInfo(Info *inf, List *li){
        int ret2;
        ret2=push_back(li,inf);}

    
