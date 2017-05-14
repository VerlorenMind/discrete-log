#ifndef DISCRETE_LOG_FACTORBASEGENERATOR_H
#define DISCRETE_LOG_FACTORBASEGENERATOR_H
#include<NTL/ZZ.h>
#include<NTL/ZZ_pX.h>
#include<vector>
#include<utility>
#include<fstream>

using namespace NTL;

class FactorBase {
private:
    long count;
    long smallInd;
public:
    std::vector<ZZ> r;
    FactorBase(long bound);
    bool FactorBase::factor(long* f, const ZZ& n, ZZ& rem);
};


#endif //DISCRETE_LOG_FACTORBASEGENERATOR_H