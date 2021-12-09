#ifndef _IRUNTIMEMODULE_H_
#define _IRUNTIMEMODULE_H_

#include "Interface.hpp"

namespace My
{
    //类成员初始化顺序未知，和想先加载模块
    Interface IRuntimeModule
    {
    public:
        virtual ~IRuntimeModule(){};

        virtual int Initialize() = 0; //init
        virtual void Finalize() = 0;  //destroy

        virtual void Tick() = 0; //module
    };
} // namespace My
#endif //_IRUNTIMEMODULE_H