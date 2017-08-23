bool sudoku(std::vector<std::vector<int>> a) {
    for(int i=0;i<9;i++){
        for(int j=0;j<8;j++){
            for(int k=j+1;k<9;k++){
                if(a[i][j]==a[i][k])
                    return false;
            }
        }
    }
    for(int j=0;j<9;j++){
        for(int i=0;i<8;i++){
            for(int k=i+1;k<9;k++){
                if(a[i][j]==a[k][j])
                    return false;
            }
        }
    }
    for(int i=0;i<7;i+=3){
        for(int j=0;j<7;j+=3){
            for(int m=0;m<3;m++){
                for(int n=0;n<3;n++){
                    for(int p=0;p<3;p++){
                        for(int q=0;q<3;q++){
                            if(a[i+m][j+n]==a[i+p][j+q]&&m!=p&&n!=q)
                                return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}
/*
Sudoku is a number-placement puzzle. The objective is to fill a 9 × 9 grid with digits so that each column, each row, and each of the nine 3 × 3 sub-grids that compose the grid contains all of the digits from 1 to 9.

This algorithm should check if the given grid of numbers represents a correct solution to Sudoku.
*/
