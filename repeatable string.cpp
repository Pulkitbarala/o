#include <iostream>
#include <cstring>
class RepeatableString {
private:
    char* str;
public:
    RepeatableString(const char* inputStr) {
        str = new char[strlen(inputStr) + 1];
        strcpy(str, inputStr);
    }
    RepeatableString operator*(int repetitions) {
        char* result = new char[strlen(str) * repetitions + 1];
        result[0] = '\0';

        for (int i = 0; i < repetitions; ++i) {
            strcat(result, str);
        }

        RepeatableString repeatedStr(result);
        delete[] result;
        return repeatedStr;
    }

    char* getString() {
        return str;
    }

    ~RepeatableString() {
        delete[] str;
    }
};

int main() {
    char inputStr[101];
    int repetitions;

    std::cin >> inputStr;
    std::cin >> repetitions;

    RepeatableString original(inputStr);
    RepeatableString result = original * repetitions;

    std::cout << "Result: " << result.getString() << std::endl;

    return 0;
}
