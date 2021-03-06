//
// Copyright (c) 2019 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#include <boost/ut.hpp>

int main() {
  using namespace boost::ut;

  "logging"_test = [] {
    boost::ut::log << "pre";
    expect(42_i == 42) << "message on failure";
    boost::ut::log << "post";
  };
}
