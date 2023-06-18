// DRAFT //
// for you all to complete//

#ifndef DLLIST_H_
#define DLLIST_H_

// node 'struct' - a tiny collection
template<class T>
class DLList {
    struct Node {
        T _x;
        Node *_next;
        Node *_prev;

        Node(T x) {
            _x = x;
            _next = _prev = nullptr;
        }
    };

	Node dummy;
	int _n;

protected:
    // these are all "internal" functions
    // things that help the implementation we're trying to accomplish

    // get the node at position i, helpful for other ops
    Node* getNode(int i);

    // adding before a given node
    // the reason this isn't part of a general add function
    // is so that we can keep the inputs to add(i, x) the same
    // and separate out the idea of a 'node' into the implementation
    Node* addBefore(Node *w, T x);

    // remove a specific node, not a specific index 
    void removeNode(Node *w);

public:

    // Constructor
    DLList();

    // Destructor
    ~DLList();

    
    // get & set operations (INEFFICIENT - if we are doing frequent 'get' or 'set', use arrays)
    T get(int i);
    T set(int i, T x);

    // add 
    void add(int i, T x);

    // remove
    T remove(int i);
};

 template<class T>
DLList<T>::DLList() { 
	_n = 0;
	dummy = DLList().Node(NULL);
    dummy.prev = dummy;
    dummy.next = dummy;
}
template<class T>
DLList<T>::~DLList() {
	Node *u = dummy;
	while (u != nullptr) {
		Node *w = u;
		u = u->_next;
		delete w;
	}
}
template<class T>
T DLList<T>::get(int i) {
   
    {
        /* code */
      return get_node(i).x;
    

    }
}
template<class T>
void DLList<T>::set(int i, T x) {
    Node *u = get_node(i) ;
    Node *y = u.x;
    u.x = x;
    return y;
    
}
template <class T>
typename DLList<T>::Node* DLList<T>::addBefore(Node *w, T x) {
    // implementation
    Node *u = DLList.Node(x);
    u.prev = w.prev;
    u.next = w;
    u.next.prev = u;
    u.prev.next = u;
    n = n+1;
    return u;
}
 // add 
    void add(int i, T x) {
        add_before(get_node(i),x);
    }

    // remove
    T remove(int i){
        remove(get_node(i));
    }
    void removeNode(Node *w){
        w.prev.next = w.next;
        w.next.prev = w.prev;
        n= n-1;
    }

template <class T>
typename DLList<T>::Node* DLList<T>::getNode(int i) {
    Node *p = new Node(NULL);
    if (i < _n/2){
      p = dummy-> _next; 
      for (int k = 0,  k<=i, k++) 
      {
        /* code */ p = p->_next;
      } else {
        p = dummy;
        for (int k = 0. k<=n-i, k++){
            p = p->_prev;
        }
      } 
      return p;
       
      
    } // implementation
}
#endif /*DLLIST_H_*/