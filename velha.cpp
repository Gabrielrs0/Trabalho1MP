/**
 * \file  velha.cpp
 */


#include "velha.hpp"

/**
 * @brief verifica situacao do jogo da velha
 * @author Programador
 * @param  velha descreve o parametro
 *
 *  Descrever o que a funcao faz
 */

int VerificaVelha( int velha[3][3] )
{

    for (int i=0; i < 3; i++) {
        // verificar linhas
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {

            if (velha[i][0] == 1)
                return 1; // X vencedor
            else if (velha[i][0] == 2)
                return 2; // O vencedor
            }

    }
	return 0; /*!< retorna zero para teste */
}


