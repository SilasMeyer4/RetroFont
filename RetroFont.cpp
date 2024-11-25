#include "RetroFont.h"

#include <cstdlib>

#ifndef RETROFONT_C
namespace RetroFont {
#endif

    /**
    * initialize fontData
    * @return pointer for the fontData
    */
    RF_FontData* initializeFont() {
        RF_FontData* pFontData = (RF_FontData*) malloc(RF_AMOUNTOFFONTSPRITES * RF_FONTHEIGHT * sizeof(char));
        if (pFontData == NULLPOINTER) {
            return NULLPOINTER;
        }

        //A
        pFontData[RF_A * RF_FONTHEIGHT + 0] = 0b01110000;
        pFontData[RF_A * RF_FONTHEIGHT + 1] = 0b11011000;
        pFontData[RF_A * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_A * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_A * RF_FONTHEIGHT + 4] = 0b11111000;
        pFontData[RF_A * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_A * RF_FONTHEIGHT + 6] = 0b10001000;


        //M
        pFontData[RF_M * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_M * RF_FONTHEIGHT + 1] = 0b11111000;
        pFontData[RF_M * RF_FONTHEIGHT + 2] = 0b10101000;
        pFontData[RF_M * RF_FONTHEIGHT + 3] = 0b10101000;
        pFontData[RF_M * RF_FONTHEIGHT + 4] = 0b10101000;
        pFontData[RF_M * RF_FONTHEIGHT + 5] = 0b10101000;
        pFontData[RF_M * RF_FONTHEIGHT + 6] = 0b10101000;
        //G
        pFontData[RF_G * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_G * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_G * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_G * RF_FONTHEIGHT + 3] = 0b10111000;
        pFontData[RF_G * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_G * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_G * RF_FONTHEIGHT + 6] = 0b11111000;

        //E
        pFontData[RF_E * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_E * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_E * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_E * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_E * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_E * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_E * RF_FONTHEIGHT + 6] = 0b11111000;

        //O
        pFontData[RF_O * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_O * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_O * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_O * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_O * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_O * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_O * RF_FONTHEIGHT + 6] = 0b11111000;

        //V
        pFontData[RF_V * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_V * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_V * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_V * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_V * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_V * RF_FONTHEIGHT + 5] = 0b01010000;
        pFontData[RF_V * RF_FONTHEIGHT + 6] = 0b00100000;

        //R
        pFontData[RF_R * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_R * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_R * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_R * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_R * RF_FONTHEIGHT + 4] = 0b11100000;
        pFontData[RF_R * RF_FONTHEIGHT + 5] = 0b10110000;
        pFontData[RF_R * RF_FONTHEIGHT + 6] = 0b10011000;

        //P
        pFontData[RF_P * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_P * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_P * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_P * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_P * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_P * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_P * RF_FONTHEIGHT + 6] = 0b10000000;

        //S
        pFontData[RF_S * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_S * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_S * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_S * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_S * RF_FONTHEIGHT + 4] = 0b00001000;
        pFontData[RF_S * RF_FONTHEIGHT + 5] = 0b00001000;
        pFontData[RF_S * RF_FONTHEIGHT + 6] = 0b11111000;

        //T
        pFontData[RF_T * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_T * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_T * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_T * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_T * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_T * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_T * RF_FONTHEIGHT + 6] = 0b00100000;

        //0 same as O

        //1
        pFontData[RF_1 * RF_FONTHEIGHT + 0] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 2] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 3] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 4] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 5] = 0b00001000;
        pFontData[RF_1 * RF_FONTHEIGHT + 6] = 0b00001000;

        //2
        pFontData[RF_2 * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_2 * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_2 * RF_FONTHEIGHT + 2] = 0b00001000;
        pFontData[RF_2 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_2 * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_2 * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_2 * RF_FONTHEIGHT + 6] = 0b11111000;

        //3
        pFontData[RF_3 * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_3 * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_3 * RF_FONTHEIGHT + 2] = 0b00001000;
        pFontData[RF_3 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_3 * RF_FONTHEIGHT + 4] = 0b00001000;
        pFontData[RF_3 * RF_FONTHEIGHT + 5] = 0b00001000;
        pFontData[RF_3 * RF_FONTHEIGHT + 6] = 0b11111000;

        //4
        pFontData[RF_4 * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_4 * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_4 * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_4 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_4 * RF_FONTHEIGHT + 4] = 0b00001000;
        pFontData[RF_4 * RF_FONTHEIGHT + 5] = 0b00001000;
        pFontData[RF_4 * RF_FONTHEIGHT + 6] = 0b00001000;

        //5 same as S
        //6
        pFontData[RF_6 * RF_FONTHEIGHT + 0] = 0b10000000;
        pFontData[RF_6 * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_6 * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_6 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_6 * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_6 * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_6 * RF_FONTHEIGHT + 6] = 0b10001000;

        //7
        pFontData[RF_7 * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_7 * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_7 * RF_FONTHEIGHT + 2] = 0b00011000;
        pFontData[RF_7 * RF_FONTHEIGHT + 3] = 0b00110000;
        pFontData[RF_7 * RF_FONTHEIGHT + 4] = 0b01100000;
        pFontData[RF_7 * RF_FONTHEIGHT + 5] = 0b11000000;
        pFontData[RF_7 * RF_FONTHEIGHT + 6] = 0b10000000;

        //8
        pFontData[RF_8 * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_8 * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_8 * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_8 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_8 * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_8 * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_8 * RF_FONTHEIGHT + 6] = 0b11111000;

        //9
        pFontData[RF_9 * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_9 * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_9 * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_9 * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_9 * RF_FONTHEIGHT + 4] = 0b00001000;
        pFontData[RF_9 * RF_FONTHEIGHT + 5] = 0b00001000;
        pFontData[RF_9 * RF_FONTHEIGHT + 6] = 0b11111000;

        //L
        pFontData[RF_L * RF_FONTHEIGHT + 0] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 3] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_L * RF_FONTHEIGHT + 6] = 0b11111000;

        //C
        pFontData[RF_C * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_C * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_C * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_C * RF_FONTHEIGHT + 3] = 0b10000000;
        pFontData[RF_C * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_C * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_C * RF_FONTHEIGHT + 6] = 0b11111000;

        //X
        pFontData[RF_X * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_X * RF_FONTHEIGHT + 1] = 0b11011000;
        pFontData[RF_X * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_X * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_X * RF_FONTHEIGHT + 4] = 0b01110000;
        pFontData[RF_X * RF_FONTHEIGHT + 5] = 0b11011000;
        pFontData[RF_X * RF_FONTHEIGHT + 6] = 0b10001000;

        //N
        pFontData[RF_N * RF_FONTHEIGHT + 0] = 0b11001000;
        pFontData[RF_N * RF_FONTHEIGHT + 1] = 0b11001000;
        pFontData[RF_N * RF_FONTHEIGHT + 2] = 0b11101000;
        pFontData[RF_N * RF_FONTHEIGHT + 3] = 0b10101000;
        pFontData[RF_N * RF_FONTHEIGHT + 4] = 0b10111000;
        pFontData[RF_N * RF_FONTHEIGHT + 5] = 0b10011000;
        pFontData[RF_N * RF_FONTHEIGHT + 6] = 0b10001000;

        //I
        pFontData[RF_I * RF_FONTHEIGHT + 0] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_I * RF_FONTHEIGHT + 6] = 0b00100000;

        //Dot
        pFontData[RF_DOT * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 3] = 0b01110000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 4] = 0b01110000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_DOT * RF_FONTHEIGHT + 6] = 0b00000000;

        //B
        pFontData[RF_B * RF_FONTHEIGHT + 0] = 0b11110000;
        pFontData[RF_B * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_B * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_B * RF_FONTHEIGHT + 3] = 0b11110000;
        pFontData[RF_B * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_B * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_B * RF_FONTHEIGHT + 6] = 0b11110000;

        //D
        pFontData[RF_D * RF_FONTHEIGHT + 0] = 0b11110000;
        pFontData[RF_D * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_D * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_D * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_D * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_D * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_D * RF_FONTHEIGHT + 6] = 0b11110000;

        //F
        pFontData[RF_F * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_F * RF_FONTHEIGHT + 1] = 0b10000000;
        pFontData[RF_F * RF_FONTHEIGHT + 2] = 0b10000000;
        pFontData[RF_F * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_F * RF_FONTHEIGHT + 4] = 0b10000000;
        pFontData[RF_F * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_F * RF_FONTHEIGHT + 6] = 0b10000000;

        //H
        pFontData[RF_H * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_H * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_H * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_H * RF_FONTHEIGHT + 3] = 0b11111000;
        pFontData[RF_H * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_H * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_H * RF_FONTHEIGHT + 6] = 0b10001000;

        //J
        pFontData[RF_J * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_J * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_J * RF_FONTHEIGHT + 2] = 0b00001000;
        pFontData[RF_J * RF_FONTHEIGHT + 3] = 0b00001000;
        pFontData[RF_J * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_J * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_J * RF_FONTHEIGHT + 6] = 0b01110000;

        //K
        pFontData[RF_K * RF_FONTHEIGHT + 0] = 0b10011000;
        pFontData[RF_K * RF_FONTHEIGHT + 1] = 0b10110000;
        pFontData[RF_K * RF_FONTHEIGHT + 2] = 0b11100000;
        pFontData[RF_K * RF_FONTHEIGHT + 3] = 0b11000000;
        pFontData[RF_K * RF_FONTHEIGHT + 4] = 0b11100000;
        pFontData[RF_K * RF_FONTHEIGHT + 5] = 0b10110000;
        pFontData[RF_K * RF_FONTHEIGHT + 6] = 0b10011000;

        //Q
        pFontData[RF_Q * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_Q * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_Q * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_Q * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_Q * RF_FONTHEIGHT + 4] = 0b10101000;
        pFontData[RF_Q * RF_FONTHEIGHT + 5] = 0b10010000;
        pFontData[RF_Q * RF_FONTHEIGHT + 6] = 0b11101000;

        //U
        pFontData[RF_U * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 1] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 3] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 4] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 5] = 0b10001000;
        pFontData[RF_U * RF_FONTHEIGHT + 6] = 0b11111000;

        //W
        pFontData[RF_W * RF_FONTHEIGHT + 0] = 0b10101;
        pFontData[RF_W * RF_FONTHEIGHT + 1] = 0b10101;
        pFontData[RF_W * RF_FONTHEIGHT + 2] = 0b10101;
        pFontData[RF_W * RF_FONTHEIGHT + 3] = 0b10101;
        pFontData[RF_W * RF_FONTHEIGHT + 4] = 0b10101;
        pFontData[RF_W * RF_FONTHEIGHT + 5] = 0b11111;
        pFontData[RF_W * RF_FONTHEIGHT + 6] = 0b11111;

        //Y
        pFontData[RF_Y * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_Y * RF_FONTHEIGHT + 1] = 0b11011000;
        pFontData[RF_Y * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_Y * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 6] = 0b00100000;

        //Z
        pFontData[RF_Y * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_Y * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_Y * RF_FONTHEIGHT + 2] = 0b00010000;
        pFontData[RF_Y * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 4] = 0b01000000;
        pFontData[RF_Y * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_Y * RF_FONTHEIGHT + 6] = 0b11111000;

        //:
        pFontData[RF_COLON * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_COLON * RF_FONTHEIGHT + 6] = 0b00000000;

        //;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_SEMICOLON * RF_FONTHEIGHT + 6] = 0b00000000;

        //=
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 4] = 0b01110000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_EQUAL * RF_FONTHEIGHT + 6] = 0b00000000;

        //-
        pFontData[RF_MINUS * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 2] = 0b00000000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 3] = 0b01110000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_MINUS * RF_FONTHEIGHT + 6] = 0b00000000;

        //+
        pFontData[RF_PLUS * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 3] = 0b01110000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_PLUS * RF_FONTHEIGHT + 6] = 0b00000000;

        //>
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 1] = 0b01000000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 3] = 0b00010000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 5] = 0b01000000;
        pFontData[RF_GREATER_THAN * RF_FONTHEIGHT + 6] = 0b00000000;

        //<
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 1] = 0b00010000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 3] = 0b01000000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 5] = 0b00010000;
        pFontData[RF_LESS_THAN * RF_FONTHEIGHT + 6] = 0b00000000;

        //,
        pFontData[RF_COMMA * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 2] = 0b00000000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_COMMA * RF_FONTHEIGHT + 6] = 0b00000000;

        //?
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 0] = 0b01110000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 1] = 0b00010000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 3] = 0b01000000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 4] = 0b01110000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_QUESTION_MARK * RF_FONTHEIGHT + 6] = 0b00100000;

        //!
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 0] = 0b00100000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_EXCLAMATION_MARK * RF_FONTHEIGHT + 6] = 0b00100000;

        //backslash
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 0] = 0b10000000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 1] = 0b01000000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 2] = 0b01000000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 4] = 0b00010000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 5] = 0b00010000;
        pFontData[RF_BACKSLASH * RF_FONTHEIGHT + 6] = 0b00001000;

        //slash
        pFontData[RF_SLASH * RF_FONTHEIGHT + 0] = 0b00001000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 1] = 0b00010000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 2] = 0b00010000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 4] = 0b01000000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 5] = 0b01000000;
        pFontData[RF_SLASH * RF_FONTHEIGHT + 6] = 0b10000000;

        //underscore
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 2] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_UNDERSCORE * RF_FONTHEIGHT + 6] = 0b11111000;

        //Pipe |
        pFontData[RF_PIPE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_PIPE * RF_FONTHEIGHT + 6] = 0b00000000;

        //"
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 1] = 0b01010000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 2] = 0b01010000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_QUOTE * RF_FONTHEIGHT + 6] = 0b00000000;

        //'
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_APOSTROPHE * RF_FONTHEIGHT + 6] = 0b00000000;

        //^
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 0] = 0b00100000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 1] = 0b01010000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 2] = 0b10001000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_CIRCUMFLEX * RF_FONTHEIGHT + 6] = 0b00000000;

        //%
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 0] = 0b00001000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 1] = 0b01010000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 2] = 0b00010000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 4] = 0b01000000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 5] = 0b01010000;
        pFontData[RF_PERCENT * RF_FONTHEIGHT + 6] = 0b10000000;

        //[
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 0] = 0b00110000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_BRACKET_OPEN * RF_FONTHEIGHT + 6] = 0b00110000;

        //]
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 0] = 0b01100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_BRACKET_CLOSE * RF_FONTHEIGHT + 6] = 0b01100000;

        //(
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 0] = 0b00010000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_PARENTHESIS_OPEN * RF_FONTHEIGHT + 6] = 0b00010000;

        //)
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 0] = 0b01000000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 2] = 0b00100000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_PARENTHESIS_CLOSE * RF_FONTHEIGHT + 6] = 0b01000000;

        //{
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 0] = 0b00110000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 2] = 0b01100000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 3] = 0b11000000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 4] = 0b01100000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_BRACE_OPEN * RF_FONTHEIGHT + 6] = 0b00110000;

        //}
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 0] = 0b01100000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 1] = 0b00100000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 2] = 0b00110000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 3] = 0b00011000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 4] = 0b00110000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_BRACE_CLOSE * RF_FONTHEIGHT + 6] = 0b01100000;

        //~
        pFontData[RF_TILDE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 2] = 0b01001000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 3] = 0b10101000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 4] = 0b10010000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_TILDE * RF_FONTHEIGHT + 6] = 0b00000000;

        //#
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 1] = 0b01010000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 2] = 0b11111000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 3] = 0b01010000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 4] = 0b11111000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 5] = 0b01010000;
        pFontData[RF_HASHTAG * RF_FONTHEIGHT + 6] = 0b00000000;

        //*
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 0] = 0b10101000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 1] = 0b01110000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 3] = 0b10101000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_ASTERISK * RF_FONTHEIGHT + 6] = 0b00000000;

        //FULL_STOP
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 2] = 0b00000000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 5] = 0b01100000;
        pFontData[RF_FULL_STOP * RF_FONTHEIGHT + 6] = 0b01100000;


        return pFontData;
    }


#ifndef RETROFONT_C
}
#endif
