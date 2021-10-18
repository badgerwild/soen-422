/* cddef.h - C. Definitions - Michel de Champlain  */

#ifndef CDDEF_H
#define CDDEF_H

#define private            static
#define public

                                        /* C# equivalent */

typedef unsigned short     bool;        /*          System.Boolean */
#define false            ((bool)0)
#define true             ((bool)1)

typedef unsigned char      u8, byte;    /* byte     System.Byte    */
typedef          char      i8, sbyte;   /* sbyte    System.SByte   */

typedef unsigned short     object;      /* object   System.Object  */
typedef char*              string;      /* string   System.String  */
typedef object*            array;       /* object[] System.Array   */
typedef byte*              byteArray;   /*     C. improvement      */
typedef char*              charset;     /*     C. improvement      */

typedef unsigned short     unicode;     /* char     System.Byte    */
typedef unsigned short     uchar;       /* char                    */
// typedef unsigned short     uint;
typedef unsigned short     u16, ushort; /* ushort   System.UInt16  */
typedef unsigned short     UInt16;
typedef          short     Int16;
typedef          short     i16;         /* short    System.Int16   */

#endif /* CDDEF_H */
