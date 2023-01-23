//: C16:TStack2.h
// Параметризованный класс Stack с вложенным итератором
#ifndef TSTACK2_H
#define TSTACK2_H

template<class T> class Stack {
  struct Link {
    T* data;
    Link* next;
    Link(T* dat, Link* nxt)
      : data(dat), next(nxt) {}
  }* head;
public:
  Stack() : head(0) {}
  ~Stack();
  void push(T* dat) {
    head = new Link(dat, head);
  }
  T* peek() const { 
    return head ? head->data : 0;
  }
  T* pop();
  // Вложенный класс итератора:
  class iterator; // Необходимо объявление
  friend class iterator; // Дружественный класс
  class iterator { // Теперь можно определять
    Stack::Link* p;
  public:
    iterator(const Stack<T>& tl) : p(tl.head) {}
    // Копирующий конструктор:
    iterator(const iterator& tl) : p(tl.p) {}
    // Конечный итератор:
    iterator() : p(0) {}
    // operator++ возвращает логический признак конца последовательности:
    bool operator++() {
      if(p->next)
        p = p->next;
      else p = 0; // Признак конца списка
      return bool(p);
    }
    bool operator++(int) { return operator++(); }
    T* current() const {
      if(!p) return 0;
      return p->data;
    }
    // Оператор разыменования указателя:
    T* operator->() const { 
      require(p != 0, 
        "PStack::iterator::operator->returns 0");
      return current(); 
    }
    T* operator*() const { return current(); }
    // Преобразование к bool для условной проверки:
    operator bool() const { return bool(p); }
    // Сравнение для проверки выхода в конец контейнера:
    bool operator==(const iterator&) const {
      return p == 0;
    }
    bool operator!=(const iterator&) const {
      return p != 0;
    }
  };
  iterator begin() const { 
    return iterator(*this); 
  }
  iterator end() const { return iterator(); }
};

template<class T> Stack<T>::~Stack() {
  while(head)
    delete pop();
}

template<class T> T* Stack<T>::pop() {
  if(head == 0) return 0;
  T* result = head->data;
  Link* oldHead = head;
  head = head->next;
  delete oldHead;
  return result;
}
#endif // TSTACK2_H ///:~