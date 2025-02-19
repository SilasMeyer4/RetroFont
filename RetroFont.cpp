#include "RetroFont.h"

#include <cstdlib>
#include <string>
#include <unordered_map>

#ifndef RETROFONT_C
namespace RetroFont {
#endif

    /**
    * initialize fontData
    * @return pointer for the fontData
    */
    RF_FontData* InitializeFont(void) {
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
        pFontData[RF_6 * RF_FONTHEIGHT + 6] = 0b11111000;

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
        pFontData[RF_W * RF_FONTHEIGHT + 0] = 0b10101000;
        pFontData[RF_W * RF_FONTHEIGHT + 1] = 0b10101000;
        pFontData[RF_W * RF_FONTHEIGHT + 2] = 0b10101000;
        pFontData[RF_W * RF_FONTHEIGHT + 3] = 0b10101000;
        pFontData[RF_W * RF_FONTHEIGHT + 4] = 0b10101000;
        pFontData[RF_W * RF_FONTHEIGHT + 5] = 0b11111000;
        pFontData[RF_W * RF_FONTHEIGHT + 6] = 0b11111000;

        //Y
        pFontData[RF_Y * RF_FONTHEIGHT + 0] = 0b10001000;
        pFontData[RF_Y * RF_FONTHEIGHT + 1] = 0b11011000;
        pFontData[RF_Y * RF_FONTHEIGHT + 2] = 0b01110000;
        pFontData[RF_Y * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 4] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 5] = 0b00100000;
        pFontData[RF_Y * RF_FONTHEIGHT + 6] = 0b00100000;

        //Z
        pFontData[RF_Z * RF_FONTHEIGHT + 0] = 0b11111000;
        pFontData[RF_Z * RF_FONTHEIGHT + 1] = 0b00001000;
        pFontData[RF_Z * RF_FONTHEIGHT + 2] = 0b00010000;
        pFontData[RF_Z * RF_FONTHEIGHT + 3] = 0b00100000;
        pFontData[RF_Z * RF_FONTHEIGHT + 4] = 0b01000000;
        pFontData[RF_Z * RF_FONTHEIGHT + 5] = 0b10000000;
        pFontData[RF_Z * RF_FONTHEIGHT + 6] = 0b11111000;

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

        //SPACE
        pFontData[RF_SPACE * RF_FONTHEIGHT + 0] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 1] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 2] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 3] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 4] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 5] = 0b00000000;
        pFontData[RF_SPACE * RF_FONTHEIGHT + 6] = 0b00000000;


        return pFontData;
    }

    std::unordered_map<char, eSymbol_t> charToSymbolMap = {
            {'A', RF_A}, {'M', RF_M}, {'G', RF_G}, {'E', RF_E}, {'O', RF_O}, {'V', RF_V}, {'R', RF_R},
            {'P', RF_P}, {'S', RF_S}, {'T', RF_T}, {'0', RF_0}, {'1', RF_1}, {'2', RF_2}, {'3', RF_3},
            {'4', RF_4}, {'5', RF_5}, {'6', RF_6}, {'7', RF_7}, {'8', RF_8}, {'9', RF_9}, {'L', RF_L},
            {'C', RF_C}, {'X', RF_X}, {'N', RF_N}, {'I', RF_I}, {'@', RF_DOT}, {'J', RF_J}, {'K', RF_K},
            {'Q', RF_Q}, {'U', RF_U}, {'W', RF_W}, {'Y', RF_Y}, {'Z', RF_Z}, {':', RF_COLON}, {';', RF_SEMICOLON},
            {'=', RF_EQUAL}, {'-', RF_MINUS}, {'+', RF_PLUS}, {'>', RF_GREATER_THAN}, {'<', RF_LESS_THAN},
            {',', RF_COMMA}, {'?', RF_QUESTION_MARK}, {'!', RF_EXCLAMATION_MARK}, {'\\', RF_BACKSLASH},
            {'/', RF_SLASH}, {'_', RF_UNDERSCORE}, {'|', RF_PIPE}, {'"', RF_QUOTE}, {'\'', RF_APOSTROPHE},
            {'^', RF_CIRCUMFLEX}, {'%', RF_PERCENT}, {'[', RF_BRACKET_OPEN}, {']', RF_BRACKET_CLOSE},
            {'(', RF_PARENTHESIS_OPEN}, {')', RF_PARENTHESIS_CLOSE}, {'{', RF_BRACE_OPEN}, {'}', RF_BRACE_CLOSE},
            {'B', RF_B}, {'D', RF_D}, {'F', RF_F}, {'H', RF_H}, {'~', RF_TILDE}, {'#', RF_HASHTAG},
            {'*', RF_ASTERISK}, {'.', RF_FULL_STOP}, {' ', RF_SPACE},

            //lower case values. I want to remove them, but toupper doesn't want to work in C in CharToSymbol
            {'a', RF_A}, {'m', RF_M}, {'g', RF_G}, {'e', RF_E}, {'o', RF_O}, {'v', RF_V}, {'r', RF_R},
            {'p', RF_P}, {'s', RF_S}, {'t', RF_T}, {'l', RF_L}, {'c', RF_C}, {'x', RF_X}, {'n', RF_N},
            {'i', RF_I}, {'j', RF_J}, {'k', RF_K}, {'q', RF_Q}, {'u', RF_U}, {'w', RF_W}, {'y', RF_Y},
            {'z', RF_Z}, {'b', RF_B}, {'d', RF_D}, {'f', RF_F}, {'h', RF_H}
    };

    /**
     * saves corresponing symbols (enum Symbol) of a sentence in a buffer
     * @param string
     * @param symbolBuffer
     * @param bufferSize
     * @return -1 if error otherwise 0
     */
    int StringToSymbols(const char* string, int* symbolBuffer, int bufferSize)
    {
        if (string == NULLPOINTER || symbolBuffer == NULLPOINTER)
        {
            return -1;
        }

        std::string sentence {string};

        for (int counter = 0; counter < bufferSize && counter < sentence.length(); counter++)
        {
            int symbol = CharToSymbol(sentence[counter]);
            if (symbol == -1)
            {
                return -1;
            }
            symbolBuffer[counter] = symbol;
        }

        return 0;
    }

    /**
     * returns the symbol of a given char (enum Symbol)
     * in c lower case char is not supported
     * @param x char
     * @return -1 if error
     */
    int CharToSymbol(const char x)
    {
        if (charToSymbolMap.find(x) != charToSymbolMap.end())
        {
            return charToSymbolMap[x];
        }

        return -1;
    }

#ifndef RETROFONT_C
}
#endif
