std::string reverseParentheses(std::string s) {
    for (int i = 0, j; i < s.length(); i++) {
		if (s[i] == ')') {
			for (j = i - 1; j >= 0 && s[j] != '('; j--);
			std::string temp = s.substr(j + 1, i - 1 - j);
            std::reverse(temp.begin(), temp.end());
			s = s.substr(0, j) + temp + s.substr(i + 1, s.length() - 1 - i);
            i -= 2;
		}
	}
    return s;
}
/*
You have a string s that consists of English letters, punctuation marks, whitespace characters, and brackets.
It is guaranteed that the parentheses in s form a regular bracket sequence.

Your task is to reverse the strings contained in each pair of matching parentheses,
starting from the innermost pair. The results string should not contain any parentheses.

Example

For string s = "a(bc)de", the output should be
reverseParentheses(s) = "acbde".
*/
