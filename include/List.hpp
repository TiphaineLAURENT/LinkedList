//
// List.hpp for List in /home/tiphaine/LinkedList
// 
// Made by Tiphaine
// Login   <tiphaine.laurent@epitech.eu>
// 
// Started on  Tue Jul 11 14:36:52 2017 Tiphaine
// Last update Tue Jul 11 15:04:57 2017 Tiphaine
//

#ifndef LIST_HPP
# define LIST_HPP

# include <string>

# define RETURN		'\n'

class			Node
{
public:
  Node(void);
  virtual ~Node(void);

public:
  bool			isLast(void);
  bool			isFirst(void);
  bool			isAlone(void);
  bool			isRoot(void);

  void			setRoot(bool root);
  void			attach(Node *node);
  void			unlink(void);

protected:
  Node			*_next;
  Node			*_prev;
  bool			_isRoot;
  std::string		_str;
};

#endif /* !LIST_HPP */
