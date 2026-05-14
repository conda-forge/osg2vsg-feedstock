#include <osg2vsg/OSG.h>

int main()
{
    auto reader = osg2vsg::OSG::create();
    return reader ? 0 : 1;
}
