#include "RunSession.h"
#include "Implementations.h"
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Dependency Injection
    RandomInputGenerator inputGen;
    SimpleScoring scoring;
    ModifiedReward reward;

    // RunSession tetap sama meski implementasi di atas berubah [cite: 66, 74]
    RunSession session(&inputGen, &scoring, &reward);
    session.startRun();

    return 0;
}