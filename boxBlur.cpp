std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    std::vector<std::vector<int>> b;
    for(int i=0;i<=image.size()-3;i++)
    {
        std::vector<int> c;
        for(int j=0;j<=image[i].size()-3;j++)
        {
            int sum=0;
            for(int m=0;m<3;m++)
                for(int n=0;n<3;n++)
                    sum+=image[i+m][j+n];
            c.push_back(sum/9);
        }
        b.push_back(c);
    }
    return b;
}
/*
Last night you had to study, but decided to party instead. Now there is a black and white photo of you that is about to go viral. You cannot let this ruin your reputation, so you want to apply box blur algorithm to the photo to hide its content.

The algorithm works as follows: each pixel x in the resulting image has a value equal to the average value of the input image pixels' values from the 3 × 3 square with the center at x. All pixels at the edges are cropped.

As pixel's value is an integer, all fractions should be rounded down.

Example

For

image = [[1, 1, 1],
         [1, 7, 1],
         [1, 1, 1]]
the output should be boxBlur(image) = [[1]].

In the given example all boundary pixels were cropped, and the value of the pixel in the middle was obtained as (1 + 1 + 1 + 1 + 7 + 1 + 1 + 1 + 1) / 9 = 15 / 9 = ~rounded down~ = 1.
*/
