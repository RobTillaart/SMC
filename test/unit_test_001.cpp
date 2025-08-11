//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
//    DATE: 2025-02-23
// PURPOSE: unit tests for the Arduino library for Sliding Mode Controller
//     URL: https://github.com/RobTillaart/SMC
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// https://github.com/Arduino-CI/arduino_ci/blob/master/cpp/unittest/Assertion.h#L33-L42
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)
// assertNotNull(actual)

#include <ArduinoUnitTests.h>


#include "Arduino.h"
#include "SMC.h"


unittest_setup()
{
  fprintf(stderr, "SMC_LIB_VERSION: %s\n", (char *) SMC_LIB_VERSION);
}


unittest_teardown()
{
}


unittest(test_constants)
{
  assertEqual(SMC_LINEAR, 0);
  assertEqual(SMC_EXPONENTIAL, 1);
  assertEqual(SMC_SIMPLE, 2);
}


unittest(test_constructor)
{
  SMC smc;

  fprintf(stderr, "defaults\n");
  assertEqual(smc.getMode(), 0);
  assertEqual(smc.getSetPoint(), 0);
  assertEqual(smc.getMaxValue(), 0);
  assertEqual(smc.getWeight1(), 0);
  assertEqual(smc.getWeight2(), 0);
}


unittest_main()


//  -- END OF FILE --

