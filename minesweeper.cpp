std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    std::vector<std::vector<int>> a;
    for(int i=0;i<matrix.size();i++)
    {
        std::vector<int> b;
        for(int j=0;j<matrix[i].size();j++)
        {
            int count=0;
            for(int m=(i-1<0?0:i-1);m<=(i+1>=matrix.size()?matrix.size()-1:i+1);m++)
                for(int n=(j-1<0?0:j-1);n<=(j+1>=matrix.size()?matrix[i].size()-1:j+1);n++)
                    if(matrix[m][n]==true&&!(matrix[i][j]==true&&m==i&&n==j))
                        count++;
            b.push_back(count);
        }
        a.push_back(b);
    }
    return a;
}
/*
In the popular Minesweeper game you have a board with some mines and those cells that don't contain a mine have a number in it that indicates the total number of mines in the neighboring cells. Starting off with some arrangement of mines we want to create a Minesweeper game setup.

Example

For

matrix = [[true, false, false],
          [false, true, false],
          [false, false, false]]
the output should be

minesweeper(matrix) = [[1, 2, 1],
                       [2, 1, 1],
                       [1, 1, 1]]
*/
