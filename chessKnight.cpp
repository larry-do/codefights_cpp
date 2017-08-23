int chessKnight(std::string c) {
    return inBoard(c[0]+1,c[1]+2)
          +inBoard(c[0]+2,c[1]+1)
          +inBoard(c[0]+1,c[1]-2)
          +inBoard(c[0]+2,c[1]-1)
          +inBoard(c[0]-1,c[1]-2)
          +inBoard(c[0]-2,c[1]-1)
          +inBoard(c[0]-1,c[1]+2)
          +inBoard(c[0]-2,c[1]+1);
}
bool inBoard(char a,char b){
    return a>='a'&&a<='h'&&b>='1'&&b<='8';
}
/*
Given a position of a knight on the standard chessboard, find the number of different moves the knight can perform.

The knight can move to a square that is two squares horizontally and one square vertically, or two squares vertically and one square horizontally away from it. The complete move therefore looks like the letter L. Check out the image below to see all valid moves for a knight piece that is placed on one of the central squares.
*/
