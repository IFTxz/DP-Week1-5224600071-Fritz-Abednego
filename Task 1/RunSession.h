#ifndef RUNSESSION_H
#define RUNSESSION_H

#include "Interfaces.h"
#include "ShopSystem.h"

class RunSession {
private:
    IInputGenerator* inputGen;
    IScoringRule* scoring;
    IRewardRule* rewardRule;
    ShopSystem shop;
    int totalMoney;

public:
    RunSession(IInputGenerator* ig, IScoringRule* sr, IRewardRule* rr);
    void startRun(); // Menjalankan loop 3 ronde [cite: 14, 44]
};

#endif#pragma once
