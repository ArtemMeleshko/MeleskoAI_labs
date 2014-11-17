#ifndef PRETTYLIST_H_INCLUDED
#define PRETTYLIST_H_INCLUDED
#include "consoleList.h"

class PrettyEightLike: public ConsoleEightLike
{
    public:

        prettyList()noexcept;
        prettyList(const prettyList &other);
        prettyList(prettyList &&other)noexcept;
        prettyList &operator=(const prettyList &other);
        prettyList &operator=(prettyList && other)noexcept;
        virtual ~prettyList() noexcept;
    private:
        void printElements(PositionedData *array, int size)const override;

#endif // PRETTYLIST_H_INCLUDED
