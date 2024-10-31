#include <Game.hpp>

using namespace GameNamespace;

void clearConsole()
{
#ifdef _WIN32
    system("cls")
#else
    system("clear");
#endif
};

int main(void)
{
    clearConsole();
    std::cout << "Welcome to Navy Battle 2.0!" << std::endl;

    return 0;
}
