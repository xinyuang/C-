#include <iostream>
#include <string>
using namespace std;

std::string exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (fgets(buffer, sizeof buffer, pipe) != NULL) {
            result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}

int main()
{
	cout << "test" << endl;
	//string data(
	string a = exec("cat /sys/class/gpio/gpio21/value");
	//cout << a << endl;
	cout << a.size() << endl;
	int b = stoi(a);
	cout << b << endl;
	if (b) {
		cout << "true" << endl;
	}
	return 0;
}
   