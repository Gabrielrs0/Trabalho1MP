
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

TEST_CASE("Testa colunas do Jogo da Velha", "[colunas]") {
    int teste1[3][3]= {{1, 0, 2},
                       {1, 2, 0},
                       {1, 0, 0}};
    REQUIRE(VerificaVelha(teste1) == 1);
    int teste2[3][3]= {{0, 2, 0},
                       {1, 2, 0},
                       {1, 2, 0}};
    REQUIRE(VerificaVelha(teste2) == 2);
    int teste3[3][3]= {{2, 2, 1},
                       {2, 2, 1},
                       {1, 1, 1}};
    REQUIRE(VerificaVelha(teste3) == 1);
}

TEST_CASE("Testa diagonal principal do Jogo da Velha", "[diagonal principal]"){
    int teste1[3][3] = {{1, 0, 2},
                        {2, 1, 0},
                        {2, 0, 1}};
    REQUIRE(VerificaVelha(teste1) == 1);
    int teste2[3][3] = {{2, 1, 0},
                        {1, 2, 0},
                        {1, 0, 2}};
    REQUIRE(VerificaVelha(teste2) == 2);
}
TEST_CASE("Testa diagonal secundaria do Jogo da Velha", "[diagonal secundaria]"){
    int teste1[3][3] = {{2, 0, 1},
                        {2, 1, 0},
                        {1, 0, 2}};
    REQUIRE(VerificaVelha(teste1) == 1);
    int teste2[3][3] = {{0, 1, 2},
                        {1, 2, 0},
                        {2, 0, 1}};
    REQUIRE(VerificaVelha(teste2) == 2);
}
TEST_CASE("Testa empate e jogo indefinido do Jogo da Velha", "[empate ou indefinido]"){
    int teste1[3][3] = {{1, 1, 2},
                        {2, 2, 1},
                        {1, 2, 1}};
    REQUIRE(VerificaVelha(teste1) == 0);
    int teste2[3][3] = {{1, 0, 0},
                        {0, 2, 0},
                        {0, 0, 2}};
    REQUIRE(VerificaVelha(teste2) == -1);
    int teste3[3][3] = {{1, 0, 0},
                        {0, 2, 0},
                        {1, 0, 0}};
    REQUIRE(VerificaVelha(teste3) == -1);
    int teste4[3][3] = { {1, 1, 2},
                        {2, 2, 1},
                        {1, 2, 2}};
    REQUIRE(VerificaVelha(teste4) == 0);
}
TEST_CASE("Testa jogo impossivel do Jogo da Velha", "[impossivel]"){
    int teste1[3][3] = {{2, 2, 2},
                        {2, 2, 1},
                        {1, 0, 1}};
    REQUIRE(VerificaVelha(teste1) == -2);
    int teste2[3][3] = {{1, 0, 1},
                        {0, 2, 0},
                        {1, 1, 2}};
    REQUIRE(VerificaVelha(teste2) == -2);
    int teste3[3][3] = {{1, 0, 0},
                        {1, 2, 0},
                        {1, 0, 0}};
    REQUIRE(VerificaVelha(teste3) == -2);
    int teste4[3][3] = { {1, 1, 0},
                        {0, 0, 0},
                        {0, 0, 0}};
    REQUIRE(VerificaVelha(teste4) == -2);
}




