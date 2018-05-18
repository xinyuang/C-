class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for(int i = 0; i < s.length() + 1; i++) {
            res += toInt(s[i]);
            if (toInt(s[i]) < toInt(s[i + 1])) res -= 2 * toInt(s[i]);
        }
        return res;
    }
    
    int toInt(char c) {
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;                
        }
        return 0;        
    }

};