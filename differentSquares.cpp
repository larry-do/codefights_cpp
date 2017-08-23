int differentSquares(std::vector<std::vector<int>> matrix) {
    vector < vector <int> > T;
    for (int i = 0; i < matrix.size() - 1; i++)
        for (int j = 0; j < matrix[i].size() - 1; j++) {
            vector <int> t;
            t.push_back(matrix[i][j]);
            t.push_back(matrix[i][j+1]);
            t.push_back(matrix[i+1][j]);
            t.push_back(matrix[i+1][j+1]);
            int flag = 0;
            for (int k = 0; k < T.size(); k++)
                if (t==T[k]) flag = 1;
            if (!flag) T.push_back(t);
        }
    return T.size();
}
/*
Given a rectangular matrix containing only digits, calculate the number of different 2 × 2 squares in it.
*/
