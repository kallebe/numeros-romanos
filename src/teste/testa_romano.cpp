// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "../include/romano.hpp"
#include "gtest/gtest.h"

TEST(Conversao, TesteNumerosSimples) {
    char num_r_um[]          = "I";
    char num_r_cinco[]       = "V";
    char num_r_dez[]         = "X";
    char num_r_cinquenta[]   = "L";
    char num_r_cem[]         = "C";
    char num_r_quinhentos[]  = "D";
    char num_r_mil[]         = "M";

    EXPECT_EQ(converteNumeroRomano(num_r_um), 1);
    EXPECT_EQ(converteNumeroRomano(num_r_cinco), 5);
    EXPECT_EQ(converteNumeroRomano(num_r_dez), 10);
    EXPECT_EQ(converteNumeroRomano(num_r_cinquenta), 50);
    EXPECT_EQ(converteNumeroRomano(num_r_cem), 100);
    EXPECT_EQ(converteNumeroRomano(num_r_quinhentos), 500);
    EXPECT_EQ(converteNumeroRomano(num_r_mil), 1000);
}

TEST(Conversao, TesteNumerosCompostos) {
    char num_r_dois[]                       = "II";
    char num_r_quatro[]                     = "IV";
    char num_r_seis[]                       = "VI";
    char num_r_trinta[]                     = "XXX";
    char num_r_sessenta_tres[]              = "LXIII";
    char num_r_cento_quarenta_nove[]        = "CXLIX";
    char num_r_trezentos_oitenta_oito[]     = "CCCLXXXVIII";
    char num_r_quinhentos_vinte[]           = "DXX";
    char num_r_dois_mil_trezentos[]         = "MMCCC";
    char num_r_dois_mil_novc_setenta_nove[] = "MMCMLXXIX";

    EXPECT_EQ(converteNumeroRomano(num_r_dois), 2);
    EXPECT_EQ(converteNumeroRomano(num_r_quatro), 4);
    EXPECT_EQ(converteNumeroRomano(num_r_seis), 6);
    EXPECT_EQ(converteNumeroRomano(num_r_trinta), 30);
    EXPECT_EQ(converteNumeroRomano(num_r_sessenta_tres), 63);
    EXPECT_EQ(converteNumeroRomano(num_r_cento_quarenta_nove), 149);
    EXPECT_EQ(converteNumeroRomano(num_r_trezentos_oitenta_oito), 388);
    EXPECT_EQ(converteNumeroRomano(num_r_quinhentos_vinte), 520);
    EXPECT_EQ(converteNumeroRomano(num_r_dois_mil_trezentos), 2300);
    EXPECT_EQ(converteNumeroRomano(num_r_dois_mil_novc_setenta_nove), 2979);
}

TEST(Conversao, TesteExcecoes) {
    int i, tam = 16;
    char excecao[31][tam];
    snprintf(excecao[0], sizeof(excecao[0]), "XXXX");
    snprintf(excecao[1], sizeof(excecao[0]), "VV");
    snprintf(excecao[2], sizeof(excecao[0]), "VX");
    snprintf(excecao[3], sizeof(excecao[0]), "IIII");
    snprintf(excecao[4], sizeof(excecao[0]), "LL");
    snprintf(excecao[5], sizeof(excecao[0]), "DD");
    snprintf(excecao[6], sizeof(excecao[0]), "VVI");
    snprintf(excecao[7], sizeof(excecao[0]), "DLLXII");
    snprintf(excecao[8], sizeof(excecao[0]), "LC");
    snprintf(excecao[9], sizeof(excecao[0]), "CLCX");
    snprintf(excecao[10], sizeof(excecao[0]), "CCD");
    snprintf(excecao[11], sizeof(excecao[0]), "IIC");
    snprintf(excecao[12], sizeof(excecao[0]), "XIXC");
    snprintf(excecao[13], sizeof(excecao[0]), "XIXX");
    snprintf(excecao[14], sizeof(excecao[0]), "XIXI");
    snprintf(excecao[15], sizeof(excecao[0]), "K");

    for (i = 0; i < tam; i++) {
        EXPECT_EQ(converteNumeroRomano(excecao[i]), -1);
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
