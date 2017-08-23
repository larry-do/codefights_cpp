//giải thích thuật toán
//khai báo một vector có độ dài bằng names.size và tất cả giá trị bằng 1
//chạy i từ 0 đến hết, chạy j từ 0 đến trước i
//nếu có phần từ bằng nhau :
//thì tạo 1 string s là names[j] có gắn thêm () với số đánh dấu là giá trị check[j]
//sau đó kiểm tra từ 0 đến trước i xem có string nào trùng với string vừa tạo ra không
//nếu có, tăng check[j] lên 1, gán lại s là names[j] với chỉ số () và check[j] mới vừa tăng lên
//lùi k lại để không sót phần tử
//khi kiểm tra hết,, gán names[i]=s; và tăng check[j] lên 1;
//cuối hàm return names;
std::vector<std::string> fileNaming(std::vector<std::string> names) {
    vector <int> check (names.size(), 1);
    for(int i = 0; i < names.size(); i++)
        for(int j = 0; j < i; j++)
            if(names[i] == names[j]) {
                string s = names[j] + "(" + to_string(check[j]) + ")";
                for(int k = 0; k < i; k++)
                    if(names[k] == s) {
                        check[j]++;
                        s = names[j] + "(" + to_string(check[j]) + ")";
                        k = -1;
                    }
                check[j]++;
                names[i] = s;
            }
    return names;
}
/*
You are given an array of desired filenames in the order of their creation. Since two files cannot have equal names, the one which comes later will have an addition to its name in a form of (k), where k is the smallest positive integer such that the obtained name is not used yet.

Return an array of names that will be given to the files.

Example

For names = ["doc", "doc", "image", "doc(1)", "doc"], the output should be
fileNaming(names) = ["doc", "doc(1)", "image", "doc(1)(1)", "doc(2)"].
*/
