#ifndef IMPLEMENTATIONS_H
#define IMPLEMENTATIONS_H

#include "Interfaces.h"
#include <cstdlib>

// Modification 1: Replace Input Generator [cite: 62, 63, 64]
class RandomInputGenerator : public IInputGenerator {
public:
    int generate() override { return (std::rand() % 10) + 1; }
};

class SimpleScoring : public IScoringRule {
public:
    int calculateScore(int input) override { return input * 10; }
};

// Modification 2: Change Reward Logic [cite: 67, 68, 69]
class ModifiedReward : public IRewardRule {
public:
    int calculateReward(int score, int round) override {
        // Contoh: Reward tidak sama dengan base score [cite: 70, 72]
        return score + 5;
    }
};

#endif