bool bishopAndPawn(std::string b, std::string p) {
    return abs(p[0]-b[0]) == abs(p[1]-b[1]);
}
/*
Given the positions of a white bishop and a black pawn on the standard chess board, determine whether the bishop can capture the pawn in one move.
*/
