#ifndef _NCS_VERSION_H_
#define _NCS_VERSION_H_

/* The template values come from cmake/version.cmake
 * BUILD_VERSION related template values will be 'git describe',
 * alternatively user defined BUILD_VERSION.
 */

/* #undef ZEPHYR_VERSION_CODE */
/* #undef ZEPHYR_VERSION */

#define NCSVERSION                   
#define NCS_VERSION_NUMBER           0x20863
#define NCS_VERSION_MAJOR            2
#define NCS_VERSION_MINOR            8
#define NCS_PATCHLEVEL               99
#define NCS_TWEAK                    
#define NCS_VERSION_STRING           "2.8.99"
#define NCS_VERSION_EXTENDED_STRING  ""
#define NCS_VERSION_TWEAK_STRING     ""

#define NCS_BUILD_VERSION v2.8.0-preview1-655-g5a1659005cf0


#endif /* _NCS_VERSION_H_ */