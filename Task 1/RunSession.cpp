#include "RunSession.h"
#include <iostream>

RunSession::RunSession(IInputGenerator* ig, IScoringRule* sr, IRewardRule* rr)
    : inputGen(ig), scoring(sr), rewardRule(rr), totalMoney(0) {
}

void RunSession::startRun() {
    std::cout << "=== RUN START ===\n"; // [cite: 49]

    for (int round = 1; round <= 3; ++round) { // [cite: 14, 44]
        std::cout << "Round " << round << "\n"; // [cite: 50]

        // 1. Generate Input [cite: 15]
        int input = inputGen->generate();
        std::cout << "[PLAY] input generated: " << input << "\n"; // [cite: 51]

        // 2. Compute Base Score [cite: 16]
        int score = scoring->calculateScore(input);
        std::cout << "[SCORE] base score: " << score << "\n"; // [cite: 52]

        // 3 & 4. Compute Reward & Update Money [cite: 17, 18]
        int gain = rewardRule->calculateReward(score, round);
        totalMoney += gain;
        std::cout << "[REWARD] gain: " << gain << " money: " << totalMoney << "\n"; // [cite: 53]

        // 5. Shop Phase [cite: 19]
        shop.showShop();

        std::cout << "-------------------\n";
    }

    std::cout << "=== RUN END ===\n"; // [cite: 57]
    std::cout << "Final money: " << totalMoney << "\n"; // [cite: 58]
}