/*
 * Copyright (c) 2009, 2024, Oracle and/or its affiliates.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0, as
 * published by the Free Software Foundation.
 *
 * This program is designed to work with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation. The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have either included with
 * the program or referenced in the documentation.
 *
 * Without limiting anything contained in the foregoing, this file,
 * which is part of Connector/C++, is also subject to the
 * Universal FOSS Exception, version 1.0, a copy of which can be found at
 * https://oss.oracle.com/licenses/universal-foss-exception.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 */



#include "../unit_fixture.h"
#include <cppconn/parameter_metadata.h>

/**
 * Example of a collection of tests
 *
 */

namespace testsuite
{
namespace classes
{

class parametermetadata : public unit_fixture
{
private:
  typedef unit_fixture super;

protected:
public:

  EXAMPLE_TEST_FIXTURE(parametermetadata)
  {
    TEST_CASE(getMeta);
    TEST_CASE(getParameterCount);
#ifdef INCLUDE_NOT_IMPLEMENTED_METHODS
    TEST_CASE(notImplemented);
#endif
  }

  /**
   * Fetch meta data from open/closed PS
   */
  void getMeta();

  /**
   * Test of ParameterMetaData::getParameterCount()
   */
  void getParameterCount();

#ifdef INCLUDE_NOT_IMPLEMENTED_METHODS
  /**
   * Tests of all "not implemented" methods to track API changes
   */
  void notImplemented();
#endif

};

REGISTER_FIXTURE(parametermetadata);
} /* namespace classes */
} /* namespace testsuite */
