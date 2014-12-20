#ifndef PRETTYLIST_H_INCLUDED
#define PRETTYLIST_H_INCLUDED
#include "consoleList.h"

class PrettyEightLike: public ConsoleEightLike
{
    public:

        prettyList()noexcept;
        prettyList(const prettyList &obj);
        prettyList(prettyList &&obj)noexcept;
        prettyList &operator=(const prettyList &obj);
        prettyList &operator=(prettyList && obj)noexcept;
        virtual ~prettyList() noexcept;
    private:
        void printElements(PositionedData *array, int size)const override;

#endif // PRETTYLIST_H_INCLUDED
