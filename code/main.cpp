#include <iostream>
#include <vector>

// Basic definitions
/****************************************************************************************************/

#define U64 unsigned long long

#define SIDES 2
#define SQUARES 64
#define RANKS 8
#define FILES 8

enum {
    a8, b8, c8, d8, e8, f8, g8, h8,
    a7, b7, c7, d7, e7, f7, g7, h7,
    a6, b6, c6, d6, e6, f6, g6, h6,
    a5, b5, c5, d5, e5, f5, g5, h5,
    a4, b4, c4, d4, e4, f4, g4, h4,
    a3, b3, c3, d3, e3, f3, g3, h3,
    a2, b2, c2, d2, e2, f2, g2, h2,
    a1, b1, c1, d1, e1, f1, g1, h1
};

enum {
    white, black
};

/****************************************************************************************************/

// Bit macros
/****************************************************************************************************/

#define GET_BIT(bitboard, square) (bitboard & (1ULL << square))
#define SET_BIT(bitboard, square) (bitboard |= (1ULL << square))
#define POP_BIT(bitboard, square) (GET_BIT(bitboard, square) ? (bitboard ^= (1ULL << square)) : 0)

/****************************************************************************************************/

// IO
/****************************************************************************************************/

void PrintBitboard(U64 bitboard){
    std::cout << std::endl;

    for (int rank = 0; rank < RANKS; rank++){
        for (int file = 0; file < FILES; file++){
            int square = (rank * FILES) + file;

            if (file == 0){
                std::cout << RANKS - rank;
                std::cout << " ";
            }
            std::cout << " ";
            std::cout << (GET_BIT(bitboard, square) ? 1 : 0);
            std::cout << " "; 
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "   a  b  c  d  e  f  g  h";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "   "  << bitboard;
    std:: cout << std::endl;
    std:: cout << std::endl;
}

/****************************************************************************************************/

// Attacks
/****************************************************************************************************/

std::vector<std::vector<U64>> pawn_attacks[SIDES][SQUARES];

U64 MaskPawnAttack(int square, int side){
    U64 attacks = 0ULL;

    U64 bitboard = 0ULL;

    SET_BIT(bitboard, square);

    if (side == white){

    }
    else if (side == black){

    }

    return attacks;
}

/****************************************************************************************************/

int main(){
    MaskPawnAttack(e4, white);
    return 0;
}
