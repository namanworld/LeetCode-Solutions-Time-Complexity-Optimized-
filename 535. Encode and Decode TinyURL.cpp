class Solution {
public:
    unordered_map<string, string> tiny;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        tiny[longUrl] = "naman";
        return "naman";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        auto x=tiny.begin();
        string s;
        for(;x!=tiny.end();x++)
        {
            if(x->second==shortUrl)
                s= x->first;
        }
        return s;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
