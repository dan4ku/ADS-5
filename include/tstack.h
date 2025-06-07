// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
 private:
  static const int ksize = size;
  T arr[ksize];
  int top;

 public:
  TStack() : top(-1) {}
  bool isEmpty() const {
    return top == -1;
  }
  bool isFull() const {
    return top == size - 1;
  }
  T getTop() const {
    return arr[top];
  }
  void push(const T& value) {
    if (!isFull()) {
      arr[++top] = value;
    }
  }
  void pop() {
    if (!isEmpty()) {
      --top;
    }
  }
};

#endif  // INCLUDE_TSTACK_H_
