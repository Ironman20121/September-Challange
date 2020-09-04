#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
	vector<int>pl(string s) {
		map<char, int>m;
        for (int i = 0; i < s.size(); i++)
            m[s[i]] = i;
        int j = 0, start = 0;
        int i = 0;
        int n = s.size();
        vector <int> ans;
        while (i < n) {
            j = max(j, m[s[i]]);
           
            if (i == j) {
                ans.push_back(i - start + 1);
                start = ++i;
            }
            i++;
        }
        return ans;
	
	}

 };

int main() {
	Solution obj;
	vector<int>v = obj.pl("ababcbacadefegdehijhklij");
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
    }
}