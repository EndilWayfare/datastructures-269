#ifndef ENDIL_SLLIST
#define ENDIL_SLLIST

#include "SLListNode.h"

template <typename T>
class SLList
{
public:
	SLList();
	~SLList();

protected:
	SLListNode* head;
	SLListNode* tail;
};


#endif // !ENDIL_SLLIST
