#ifndef _IPXE_H
#define _IPXE_H

#include <com32.h>

struct s_PXENV_FILE_CHECK_API {
    uint16_t Status;
    uint16_t Size;
    uint32_t Magic;
    uint32_t Provider;
    uint32_t APIMask;
    uint32_t Flags;
};

bool is_ipxe(void);
#endif
