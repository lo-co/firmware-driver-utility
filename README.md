# Overview

Provided a register map, this utility will convert the register map along with ancillary data (such as constants used by the low-level driver) into 
a C driver.

## Fields

* Driver prefix - string prefixed to each variable and used for naming the low-level driver
* Base address - register map base address
* Default register size - set to one byte
* Constants - key-value array of constants used by the driver
* Registers - array of structured data associated with each array
  * Name - string indicating name of the register
  * rw - string value indicating the ability to read and write to the register
  * bitfield - array of structured data associated with each bit (empty if the data is not divied up into individual bits)
    * name - string indicating field name
    * start bit - integer indicating starting bit position
    * size - number of bits associated with bitfield entry

[![GitHub Super-Linter](https://github.com/lo-co/firmware-driver-utility/workflows/Lint%20Code%20Base/badge.svg)](https://github.com/marketplace/actions/super-linter)

