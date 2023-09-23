/**
 * \file  velha.cpp
 */


#include "velha.hpp"

/**
 * @brief verifica situacao do jogo da velha
 * @author Gabriel
 * @param  velha descreve o parametro
 *
 *  Descrever o que a funcao faz
 */

int VerificaVelha( int velha[3][3] )
{
    // verificando linhas e colunas
    for (int i=0; i < 3; i++) {
        // verificar linhas
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {

            if (velha[i][0] == 1)
                return 1; // X vencedor
            else if (velha[i][0] == 2)
                return 2; // O vencedor
            }
            // verificar colunas
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i]) {

            if (velha[0][i] == 1)
                return 1; // X vencedor
            else if (velha[0][i] == 2)
                return 2; // O vencedor
            }

    }
	return 0; /*!< retorna zero para teste */
}


