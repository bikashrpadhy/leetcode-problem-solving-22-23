class Solution {
public:
 int reverse(int x) {
string s = x > 0 ? to_string(x) : to_string(-(long)x);
while (s.size() > 1 && s.back() == '0') s.pop_back();
std::reverse(s.begin(), s.end());
try {
return x > 0 ? stoi(s) : -1 * stoi(s);
} catch(std::out_of_range& e) {
return 0;
}
}
};