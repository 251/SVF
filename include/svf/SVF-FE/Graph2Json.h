#ifndef INCLUDE_SVF_FE_GRAPH2JSON_H_
#define INCLUDE_SVF_FE_GRAPH2JSON_H_

#include "svf/MemoryModel/SVFIR.h"
#include "svf/Graphs/ICFG.h"
#include "svf/Graphs/ICFGNode.h"
#include "svf/Graphs/ICFGEdge.h"
#include "svf/Util/SVFUtil.h"

namespace SVF
{

class GraphWriter;
class ICFGPrinter : public ICFG
{
public:
    ICFGPrinter();

    void printICFGToJson(const std::string& filename);

    std::string getPAGNodeKindValue(int kind);

    std::string getPAGEdgeKindValue(int kind);

    std::string getICFGKind(const int kind);
};

} // End namespace SVF

#endif
