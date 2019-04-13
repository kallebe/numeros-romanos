// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "../include/romano.hpp"
#include "gtest/gtest.h"

TEST(Conversao, TesteNumerosSimples) {
    char numero_r_um[]          = "I";
    char numero_r_cinco[]       = "V";
    char numero_r_dez[]         = "X";
    char numero_r_cinquenta[]   = "L";
    char numero_r_cem[]         = "C";
    char numero_r_quinhentos[]  = "D";
    char numero_r_mil[]         = "M";

    EXPECT_EQ(converteNumeroRomano(numero_r_um), 1);
    EXPECT_EQ(converteNumeroRomano(numero_r_cinco), 5);
    EXPECT_EQ(converteNumeroRomano(numero_r_dez), 10);
    EXPECT_EQ(converteNumeroRomano(numero_r_cinquenta), 50);
    EXPECT_EQ(converteNumeroRomano(numero_r_cem), 100);
    EXPECT_EQ(converteNumeroRomano(numero_r_quinhentos), 500);
    EXPECT_EQ(converteNumeroRomano(numero_r_mil), 1000);
}

TEST(Conversao, TesteNumerosCompostos) {
    char numero_r_dois[]                = "II";
    char numero_r_quatro[]              = "IV";
    char numero_r_seis[]                = "VI";
    char numero_r_sessenta_tres[]       = "LXIII";
    char numero_r_cento_quarenta_nove[] = "CXLIX";
    char numero_r_quinhentos_vinte[]    = "DXX";
    char numero_r_dois_mil_trezentos[]  = "MMCCC";

    EXPECT_EQ(converteNumeroRomano(numero_r_dois), 2);
    EXPECT_EQ(converteNumeroRomano(numero_r_quatro), 4);
    EXPECT_EQ(converteNumeroRomano(numero_r_seis), 6);
    EXPECT_EQ(converteNumeroRomano(numero_r_sessenta_tres), 63);
    EXPECT_EQ(converteNumeroRomano(numero_r_cento_quarenta_nove), 149);
    EXPECT_EQ(converteNumeroRomano(numero_r_quinhentos_vinte), 520);
    EXPECT_EQ(converteNumeroRomano(numero_r_dois_mil_trezentos), 2300);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
