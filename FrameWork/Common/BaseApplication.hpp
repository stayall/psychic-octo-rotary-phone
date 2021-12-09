#ifndef _BASEAPPLICATION_H_
#define _BASEAPPLICATION_H_

#include "IApplication.hpp"

namespace My
{
    class BaseApplication : implements IApplication
    {
    public:
        virtual int Initialize();
        virtual void Finalize();

        virtual void Tick();

        virtual bool IsQuit();

    protected:
        bool m_bQuit;
    };
} // namespace my

#endif // _BASEAPPLICATION_H_