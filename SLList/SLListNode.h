#ifndef ENDIL_SLLISTNODE
#define ENDIL_SLLISTNODE

template <typename T>
class SLListNode 
{
public:
	SLListNode(T data) : data(data) {  }
	SLListNode() : SLListNode(T()) {  }

	SLListNode<T>* next;

	T data;
};

#endif // !ENDIL_SLLISTNODE
