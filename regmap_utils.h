#pragma once

#include <inttypes.h>

#ifdef _cplusplus
extern "C" {
#endif

/*! Forward declaration of driver context */
typedef struct fw_driver_s fw_driver_t;
  
/*! Function pointer for implementation specific details of driver communication */
typedef uint8_t (*regmap_rw)(fw_driver_t *dev, uint8_t reg_addr,
		uint8_t *data, uint16_t len);
 
struct fw_driver_s {
  void *context;
  regmap_rw read;
  regmap_rw write;
};
  
#ifdef _cplusplus
}
#endif
