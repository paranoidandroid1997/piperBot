#include <iostream>

#define U64 unsigned long long

#define GetBit(bitboard, square) (bitboard & (1ULL << square))
#define SetBit(bitboard, square) (bitboard |= (1ULL << square))
#define PopBit(bitboard, square) (GetBit(bitboard, square) ? (bitboard ^= (1ULL << square)) : 0)

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

void PrintBitboard(U64 bitboard){
    std::cout << std::endl;

    for (int rank = 0; rank < 8; rank++){
        for (int file = 0; file < 8; file++){
            int square = (rank * 8) + file;

            if (file == 0){
                std::cout << 8 - rank;
                std::cout << " ";
            }
            std::cout << " ";
            std::cout << (GetBit(bitboard, square) ? 1 : 0);
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

int main(){
    U64 bitboard = 0ULL;
    SetBit(bitboard, e2);
    SetBit(bitboard, h1);
    PrintBitboard(bitboard);
    PopBit(bitboard, e2);
    PrintBitboard(bitboard);
    PopBit(bitboard, e2);
    PrintBitboard(bitboard);

    return 0;
}
