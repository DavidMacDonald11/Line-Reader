#include "../include/main.h"

using namespace std;

int main(int argc, char** argv)
{
    if(usage(argc)) return 1;

    const size_t lineToRead = parseInt(argv[2]);

    ifstream file(argv[1]);
    string line;
    
    for(size_t i = 1; i <= lineToRead; ++i)
        if(!getline(file, line)) break;

    cout << line;
    file.close();

    return 0;
}

bool usage(const int argc)
{
    if(argc != 3)
    {
        cerr << "Usage: exeName readFileName Line#\n";
        return true;
    }

    return false;
}

size_t parseInt(const string& intString)
{
    istringstream ss(intString);
    size_t num;
    ss >> num;
    return num;
}
