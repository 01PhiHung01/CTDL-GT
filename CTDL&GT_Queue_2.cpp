#include <iostream>

#ifdef _MSC_VER
#define GENERATE_TRAP() __debugbreak()
#else
#define GENERATE_TRAP() __builtin_trap()
#endif

template <class T>
class Queue {
private:
    struct Node {
        T value;
        Node* next = nullptr;
    };
private:
    Node* first;
    Node* rear;
    unsigned int cached_size;
public:
    Queue(){
        first = nullptr;
        rear  = nullptr;
        cached_size = 0;
    }
    unsigned int size() const { return cached_size; }
    bool empty() const { return !cached_size; }
    void push(const T& value){
        Node* pending = new Node{
            .value = value,
            .next = nullptr
        };
if (!rear){
            first = pending; rear = pending;
        } else {
            rear->next = pending;
            rear = pending;
        }
        cached_size++;
    }
    T pop(){
        if (empty()) GENERATE_TRAP();
        Node* curr = first;
        T re = curr->value;
        first = curr->next;
        delete curr;
        if (first == nullptr) rear = nullptr;
        else if (first->next == nullptr) rear = first;
        cached_size--;
        return re;
    }
};
Int main() {
	Queue <int> q;
	       int n;
	do {
	       std : cout << “ Nhập N: “ ;
	       std : cin >> n ;
	q.push(n) ;
	} while ( n!=0 ) ;
	while ( ! q.empty() ) {
		std: cout << q.pop() << “ “ ;
	} ;
return o;
}
	
