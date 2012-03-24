#ifndef _IPXE_SERIAL_H
#define _IPXE_SERIAL_H

/** @file
 *
 * Serial driver functions
 *
 */

extern void serial_putc(int ch);
extern int serial_getc(void);
extern void serial_init(void);

#endif /* _IPXE_SERIAL_H */
