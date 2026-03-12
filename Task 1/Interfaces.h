#ifndef INTERFACES_H
#define INTERFACES_H

class IInputGenerator {
public:
    virtual ~IInputGenerator() {}
    virtual int generate() = 0; // [cite: 31, 32]
};

class IScoringRule {
public:
    virtual ~IScoringRule() {}
    virtual int calculateScore(int input) = 0; // [cite: 34, 35]
};

class IRewardRule {
public:
    virtual ~IRewardRule() {}
    virtual int calculateReward(int score, int round) = 0; // [cite: 36, 37]
};

#endif