#ifndef LOCAL_H
#define LOCAL_H
#include <string>
#include <vector>
#include "Insumo.h"

class Local
{
    public:
        Local();
        virtual ~Local();

        void addInsumoArr(Insumo *in, int index);
        void addInsumoVec(Insumo *in);

    protected:

    private:
        std::string nome;
        int tipo;
        Insumo *insumosArr[3];
        std::vector <Insumo*> insumosVec;
};

#endif // LOCAL_H
