// Copyright (c) 2019 Kallebe de Sousa Silva. All rights reserved.

#include "../include/romano.hpp"
#include "gtest/gtest.h"

TEST(Conversao, TesteNumerosSimples) {
    char numero_romano[] = "I";
    int numero_arabico = 1;

    EXPECT_EQ(converteNumeroRomano(numero_romano), numero_arabico);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
