class string {
public:
    // Constructor
    string(const char* str)
    {
        size = strlen(str);
        data = new char[size + 1];
        memcpy(data, str, size + 1);
    }

    // Move constructor
    string(string&& other)
    {
        size = other.size;
        data = other.data;
        other.data = nullptr;
        other.size = 0;
    }

    // Destructor
    ~string()
    {
        delete[] data;
        data = nullptr;
        size = 0;
    }

private:
    char* data;
    size_t size;
};
