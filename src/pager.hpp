#ifndef PAGER_HPP
#define PAGER_HPP

#include "pagetable.hpp"
#include "process.h"

class Pager {
    int m_memSize;
    int m_fSize;
    pair < pair < bool *, int >, pair< int, int > > m_memMap =
            pair < pair < bool *, int >, pair< int, int > >(pair < bool *, int > (nullptr, 0), pair< int, int > (-1, -1));
public:
    Pager();
    Pager(int, int);
    ~Pager();

    void init(int, int);
    pair<PageTable **, int> paging(Process *, int);
};

#endif // PAGER_HPP
