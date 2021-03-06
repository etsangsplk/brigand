/*==================================================================================================
  Copyright (c) 2015 Edouard Alligand and Joel Falcou

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
=================================================================================================**/
#ifndef BOOST_BRIGAND_TYPES_BOOL_HPP
#define BOOST_BRIGAND_TYPES_BOOL_HPP
#include <brigand/types/integral_constant.hpp>

namespace brigand
{
template <bool B>
using bool_ = brigand::integral_constant<bool, B>;
}
#endif
