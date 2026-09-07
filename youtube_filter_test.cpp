#include <iostream>
#include <string>
#include <vector>

bool is_allowed(const std::string& url, const std::vector<std::string>& blocked_hosts) {
    for (const std::string& host : blocked_hosts) {
        if (url.find(host) != std::string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    const std::vector<std::string> blocked_hosts = {
        "youtube.com",
        "youtu.be"
    };

    const std::vector<std::string> test_urls = {
        "https://www.youtube.com/watch?v=example",
        "https://youtu.be/example",
        "https://example.org/video"
    };

    for (const std::string& url : test_urls) {
        std::cout << (is_allowed(url, blocked_hosts) ? "ALLOW  " : "BLOCK  ")
                  << url << '\n';
    }
}