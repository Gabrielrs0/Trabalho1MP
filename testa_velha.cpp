
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"



TEST_CASE( "Testa linhas do Jogo da Velha", "[linhas]" ) {
    int teste1[3][3]= { {1, 1, 1},
                        {0, 2, 0},
                        {0, 2, 0}};
    REQUIRE( VerificaVelha(teste1) == 1 );
    int teste2[3][3] = {{1, 0, 0},
                        {1, 0, 1},
                        {2, 2, 2}};
    REQUIRE(VerificaVelha(teste2) == 2);
    int teste3[3][3] = {{1, 0, 1},
                        {2, 2, 2},
                        {0, 0, 0}};
    REQUIRE(VerificaVelha(teste3) == 2);
}

