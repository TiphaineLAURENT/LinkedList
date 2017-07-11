//
// List.cpp for List in /home/tiphaine/LinkedList
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 14:36:56 2017 Tiphaine
// Last update Tue Jul 11 15:08:31 2017 Tiphaine
//

#include "List.hpp"

Node::Node(void) : _next(NULL), _prev(NULL), _isRoot(false)
{
}

Node::~Node(void)
{
  if (_isRoot)
    {
      if (!isLast())
	{
	  _next->setRoot(true);
	  delete _nextNode;
	  _nextNode = NULL;
	}
    }
  unLink();
}

bool		Node::isLast(void)
{
  if (_next == NULL)
    return true;
  return false;
}

bool		Node::isFirst(void)
{
  if (_prev == NULL)
    return true;
  return false;
}

bool		Node::isAlone(void)
{
  return (isLast() && isFirst());
}

bool		Node::isRoot(void)
{
  return _isRoot;
}

void		Node::setRoot(bool root)
{
  _isRoot = root;
}

void		Node::attach(Node *node)
{
}

void		Node::unlink(void)
{
  if (_prev)
    _prev->_next = _next;
  if (_next)
    _next->_prev = _prev;
  _prev = NULL;
  _next = NULL;
}
