/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabu-shr <rabu-shr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:00:43 by rabu-shr          #+#    #+#             */
/*   Updated: 2025/10/12 19:16:21 by rabu-shr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main()
// {
//     const size_t number =5;
//     int array[5]={1,2,3,4,5};
//     std :: cout <<"<<<<<<<<<<<<<< int array >>>>>>>>>>>>>>>\n";
//     iter(array,number,printfunction< int>);
//     std :: cout <<"<<<<<<<<<<<<< string array >>>>>>>>>>>>>>>\n";
//     std :: string array_string[3]={"roaa","joud","hi"};
//     iter(array_string,3,printfunction<std :: string>);
    
//     return 0;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
  Awesome tab2[5];

  const int len = 5;

  iter( tab, len, print<const int> );
  iter( tab2, len, print<Awesome> );

  return 0;
}