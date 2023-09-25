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
    // Verificando linhas e colunas
    for (int i=0; i < 3; i++) {
        // Verificar linhas
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {

            if (velha[i][0] == 1)
                return 1; // X vencedor
            else if (velha[i][0] == 2)
                return 2; // O vencedor
            }
            // Verificar colunas
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i]) {

            if (velha[0][i] == 1)
                return 1; // X vencedor
            else if (velha[0][i] == 2)
                return 2; // O vencedor
            }

    }
    // Verificando diagonal principal
    if (velha[0][0] == velha[1][1] && velha[1][1] ==velha[2][2]) {

        if (velha[0][0] == 1 )
            return 1; // X vencedor
        else if (velha[0][0] == 2)
            return 2; // O vencedor
    }
    // Verificando diagonal secundaria
    if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0]) {

        if (velha[0][2] == 1 )
            return 1; // X vencedor
        else if (velha[0][2] == 2)
            return 2; // O vencedor
    }
    // Verificar empate
    bool todasPreenchidas = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] == 0) {
                todasPreenchidas = false;
                break;
            }
        }
    }

    if (todasPreenchidas)
        return 0; // empate



	return -1;   //jogo indefinido
}


