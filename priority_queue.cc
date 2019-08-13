#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue() {
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue() {
}

/**
 * Checks whether the underlying container is empty
 *
 * @return true if it's empty otherwise false
 */
template <>
bool templatePriorityQueue<int>::empty() const {
  return storage.empty();
}

/**
 * Returns the number of elements
 *
 * @return the number of elements
 */
template <>
int templatePriorityQueue<int>::size() {
  return storage.size();
}

/**
 * Accesses the top element
 *
 * @return the top element
 */
template <>
const int& templatePriorityQueue<int>::top() const {
  return storage.top();
}

/**
 * Removes the top element
 */
template <>
void templatePriorityQueue<int>::pop() {
  storage.pop();
}

/**
 * Inserts element and sorts the underlying container
 *
 * @param val element to push
 */
template <>
void templatePriorityQueue<int>::push(const int& val) {
  storage.push(val);
}
