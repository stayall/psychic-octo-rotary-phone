#include "BaseApplication.hpp"

namespace My
{
    BaseApplication g_App;
    IApplication *g_aApp = &g_aApp;
}