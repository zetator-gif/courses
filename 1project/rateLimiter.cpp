class RateLimitService  {
public:
    bool allow(const std::string& key);
    void reset(const std::string& ky);
private:
std::unordered_map<std::string, std::deque<std::chrono::steady_clock::time_point>> requests_;
std::mutex mutex_;
}