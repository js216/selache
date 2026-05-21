// SPDX-License-Identifier: MIT
// cctest_csmith_de563a7f.c --- cctest case csmith_de563a7f (csmith seed 3730193023)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2be13135 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 3730193023 -o /tmp/csmith_gen_9ajxwehg/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   int32_t  f1;
   uint16_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int32_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

struct S2 {
   const struct S1  f0;
   int16_t  f1;
};

struct S3 {
   struct S1  f0;
   uint16_t  f1;
};

union U4 {
   int8_t  f0;
   uint16_t  f1;
   struct S2  f2;
   uint32_t  f3;
};

union U5 {
   struct S3  f0;
   int16_t  f1;
};


static int32_t g_3 = 0xC660F7E7L;
static uint16_t g_28 = 65535UL;
static uint32_t g_35 = 18446744073709551615UL;
static int16_t g_39 = 0L;
static int16_t g_42 = 0x2550L;
static uint64_t g_45 = 1UL;
static struct S0 g_48 = {0xD172E30EL,8L,0xA766L};
static int32_t g_50 = 0xE0EA8EDFL;
static uint64_t g_80 = 4UL;
static uint32_t g_86 = 4294967294UL;
static union U4 g_98 = {-6L};
static union U5 g_111 = {{{-1L,0xC4L},0xFE4AL}};
static int8_t g_140 = 0x73L;
static uint32_t g_141 = 4294967289UL;
static uint32_t g_146[2][3][5] = {{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}}};
static int32_t g_156 = (-1L);
static uint32_t g_169 = 0UL;
static struct S2 g_184 = {{-6L,-1L},0x2D9FL};



static struct S2  func_1(void);
static union U4  func_4(uint32_t  p_5, union U5  p_6, int16_t  p_7);
static int64_t  func_12(int32_t  p_13, struct S0  p_14, int32_t  p_15, const int64_t  p_16, int8_t  p_17);
static union U5  func_18(struct S3  p_19, union U4  p_20, union U5  p_21, union U5  p_22);




static struct S2  func_1(void)
{ 
    uint64_t l_2[2];
    int32_t l_110[1][4][2];
    const int32_t l_157[3] = {(-1L),(-1L),(-1L)};
    uint32_t l_181 = 1UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_2[i] = 0xA4BEDCC590F02349LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_110[i][j][k] = (-1L);
        }
    }
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    { 
        struct S3 l_23 = {{0x89CED66EL,-1L},5UL};
        union U4 l_24 = {0x92L};
        union U5 l_25 = {{{0L,0x6EL},0x36EAL}};
        int16_t l_99 = 0xF171L;
        int32_t l_145[1];
        int i;
        for (i = 0; i < 1; i++)
            l_145[i] = 0x1F591707L;
        if (((func_4((0x8C007C7BL <= (safe_rshift_func_uint8_t_u_s((l_2[g_3] < ((safe_mul_func_int8_t_s_s((((l_110[0][2][1] = (func_12(l_2[g_3], ((func_18(l_23, l_24, l_25, l_25) , g_98) , g_48), g_98.f0, g_3, l_99) >= g_3)) , l_2[1]) >= g_3), l_2[1])) | l_2[1])), l_25.f0.f1))), g_111, l_99) , g_3) && l_2[1]))
        { 
            struct S0 l_144 = {18446744073709551610UL,0xA386FE3AL,65527UL};
            g_141++;
            l_144 = g_48;
            --g_146[1][0][3];
        }
        else
        { 
            int32_t l_153 = 1L;
            uint64_t l_167 = 18446744073709551615UL;
            int32_t l_168[3];
            int i;
            for (i = 0; i < 3; i++)
                l_168[i] = (-7L);
            if ((((safe_mod_func_uint32_t_u_u(((251UL > (safe_lshift_func_uint16_t_u_u(l_153, (safe_lshift_func_int8_t_s_s((g_156 > (l_110[0][2][1] > l_157[0])), 2))))) && g_28), g_48.f0)) >= l_157[2]) == 0x41794801D2541834LL))
            { 
                if (g_111.f0.f0.f1)
                    break;
            }
            else
            { 
                int32_t l_160[4][1][3];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_160[i][j][k] = 0x5A9F7A42L;
                    }
                }
                g_156 = g_28;
                g_156 |= (l_110[0][3][1] && (~((((l_25 , (l_23.f0 , ((~l_153) & l_160[2][0][2]))) == g_140) & (-9L)) ^ 9L)));
                l_167 = (((g_156 , (l_2[g_3] |= ((((g_39 , (safe_sub_func_uint8_t_u_u(((l_160[0][0][0] = ((safe_div_func_uint32_t_u_u(g_45, (l_110[0][1][1] ^= (safe_lshift_func_int8_t_s_u(l_153, l_145[0]))))) & l_160[2][0][2])) <= 0x028DA7E552D92CF6LL), g_28))) > l_157[1]) > l_153) || l_160[3][0][2]))) , l_2[0]) < 0x11E9L);
            }
            if (g_48.f2)
                continue;
            g_169--;
        }
        for (l_24.f2.f1 = (-20); (l_24.f2.f1 >= 24); l_24.f2.f1++)
        { 
            int16_t l_178 = 8L;
            g_156 = (safe_div_func_uint64_t_u_u((g_111.f0.f0 , ((((safe_sub_func_int16_t_s_s((((255UL | l_178) ^ ((safe_rshift_func_int16_t_s_s(9L, 2)) != g_141)) < g_45), l_181)) & (-1L)) <= l_157[0]) >= 0UL)), 18446744073709551615UL));
            for (g_98.f0 = 0; (g_98.f0 != (-5)); g_98.f0 = safe_sub_func_int64_t_s_s(g_98.f0, 5))
            { 
                g_50 = 0x60D6635FL;
            }
        }
    }
    return g_184;
}



static union U4  func_4(uint32_t  p_5, union U5  p_6, int16_t  p_7)
{ 
    int32_t l_136[3];
    int32_t l_137[4] = {5L,5L,5L,5L};
    int32_t l_138 = 4L;
    union U4 l_139[5][5] = {{{0x65L},{0xF8L},{0xF8L},{0x65L},{-7L}},{{0x65L},{0xF8L},{0xF8L},{0x65L},{0xD7L}},{{0x19L},{0x65L},{0x65L},{0x19L},{0xD7L}},{{0x19L},{0x65L},{0x65L},{0x19L},{0xD7L}},{{0x19L},{0x65L},{0x65L},{0x19L},{0xD7L}}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_136[i] = 0xB76AC36BL;
    for (p_6.f1 = 0; (p_6.f1 <= (-3)); p_6.f1 = safe_sub_func_uint16_t_u_u(p_6.f1, 9))
    { 
        struct S0 l_114[3] = {{0xD851E2D6L,0xCBD7FBB0L,0xA76EL},{0xD851E2D6L,0xCBD7FBB0L,0xA76EL},{0xD851E2D6L,0xCBD7FBB0L,0xA76EL}};
        int i;
        l_114[0] = g_48;
        l_138 ^= (safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((((((safe_add_func_int64_t_s_s((-4L), ((((+((~((safe_mod_func_uint16_t_u_u(l_114[0].f2, l_114[0].f1)) == (((l_137[1] &= (safe_mod_func_uint32_t_u_u(((((+(safe_sub_func_uint8_t_u_u((l_136[1] = ((safe_mod_func_int32_t_s_s((0x4DL && 1UL), p_6.f1)) | g_45)), 0xDCL))) < 0xFD12L) < p_6.f1) || l_114[0].f1), g_86))) > p_6.f1) || 0UL))) != g_45)) , l_137[1]) < p_7) | g_111.f0.f0.f1))) == g_48.f1) , g_50) , l_136[0]) | 1L) ^ p_7) ^ 18446744073709551614UL) && 65532UL), p_5)), 1UL)), l_114[0].f0));
    }
    return l_139[2][4];
}



static int64_t  func_12(int32_t  p_13, struct S0  p_14, int32_t  p_15, const int64_t  p_16, int8_t  p_17)
{ 
    uint32_t l_106 = 3UL;
    int32_t l_109 = 0x5F6EBE0CL;
    p_15 &= (((safe_add_func_uint32_t_u_u((l_109 = (safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((~(((0x84D4L || (((l_106 , l_106) ^ ((safe_sub_func_int16_t_s_s(((l_106 == g_80) < g_45), p_14.f1)) >= 0x53F2F9EBL)) || 0x8FE19D4D995C899ALL)) , p_14.f1) , g_48.f2)) , g_48.f1))), p_14.f0))), 0x1B4AC46EL)) && 0L) <= l_106);
    return g_98.f0;
}



static union U5  func_18(struct S3  p_19, union U4  p_20, union U5  p_21, union U5  p_22)
{ 
    const struct S1 l_34 = {0L,0xCEL};
    int32_t l_37[2];
    struct S0 l_49 = {1UL,0xCA0702DDL,0x685BL};
    int32_t l_67 = 9L;
    int i;
    for (i = 0; i < 2; i++)
        l_37[i] = (-3L);
    for (p_21.f0.f1 = 23; (p_21.f0.f1 >= 25); ++p_21.f0.f1)
    { 
        int32_t l_33 = (-2L);
        int32_t l_41 = 0xEC8167BAL;
        if (p_22.f0.f1)
            break;
        g_28 ^= (4294967287UL | 0x1372625AL);
        for (p_22.f0.f1 = 14; (p_22.f0.f1 == 58); p_22.f0.f1 = safe_add_func_int16_t_s_s(p_22.f0.f1, 5))
        { 
            uint64_t l_36 = 0xE0689BB5C1ED5297LL;
            int32_t l_38 = (-1L);
            int32_t l_43[5][4][5] = {{{0x340CABDBL,1L,(-1L),0xAD241D88L,(-1L)},{0xAD241D88L,0xAD241D88L,0xA5AAD503L,1L,0x48103B8AL},{0L,(-3L),0xA5AAD503L,5L,0x340CABDBL},{(-1L),0xA5AAD503L,(-1L),0xA5AAD503L,(-1L)}},{{1L,(-3L),0x48103B8AL,(-1L),0xAD241D88L},{1L,0xAD241D88L,0x340CABDBL,0L,0L},{(-1L),1L,(-1L),(-3L),0xAD241D88L},{0L,0L,0xAD241D88L,(-3L),(-1L)}},{{0xAD241D88L,0x340CABDBL,0L,0L,0x340CABDBL},{0x340CABDBL,1L,0xAD241D88L,(-1L),0x48103B8AL},{1L,1L,(-1L),0xA5AAD503L,(-1L)},{5L,0x340CABDBL,0x340CABDBL,5L,0xA5AAD503L}},{{1L,0L,0x48103B8AL,1L,0xA5AAD503L},{0x340CABDBL,1L,(-1L),0xAD241D88L,(-1L)},{0xAD241D88L,0xAD241D88L,0xA5AAD503L,1L,0x48103B8AL},{0L,(-3L),0xA5AAD503L,5L,0x340CABDBL}},{{(-1L),0xA5AAD503L,(-1L),0xA5AAD503L,(-1L)},{1L,(-3L),0x48103B8AL,(-1L),0xAD241D88L},{1L,0xAD241D88L,0x340CABDBL,0L,0L},{(-1L),1L,(-1L),(-3L),0xAD241D88L}}};
            int i, j, k;
            g_35 &= (safe_add_func_uint16_t_u_u(l_33, (l_34 , (p_21 , (g_28 <= 0xDFE1602A05008D6DLL)))));
            if (p_19.f1)
            { 
                int32_t l_40 = 0x69BAD970L;
                int32_t l_44 = 0xA629A01EL;
                l_36 &= g_28;
                g_45--;
                l_49 = g_48;
            }
            else
            { 
                l_43[2][1][3] = (p_21.f0 , l_43[2][1][3]);
            }
            g_50 = (g_35 & (l_49.f2 , 0x5D5A10D52C88D567LL));
        }
    }
    for (l_49.f0 = 0; (l_49.f0 >= 60); l_49.f0 = safe_add_func_uint64_t_u_u(l_49.f0, 1))
    { 
        struct S0 l_53 = {9UL,0x84C81E2EL,65530UL};
        int32_t l_84 = 0x8A746704L;
        int32_t l_85 = 0L;
        for (g_28 = 0; (g_28 <= 1); g_28 += 1)
        { 
            int i;
            g_48 = l_53;
            if ((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_37[g_28] >= (((l_67 &= (((0L && (safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((l_37[g_28] <= ((safe_rshift_func_int8_t_s_s(l_49.f1, 2)) & p_22.f0.f0.f0)) <= g_48.f0))), 0xD8B1DFEBL)) , (-5L)), l_37[g_28]))) & 0xBED49F2EL) > p_19.f1)) < p_22.f0.f1) <= l_53.f1)) > 0x6EL), l_49.f1)), g_48.f0)))
            { 
                uint32_t l_68 = 1UL;
                if (l_68)
                    break;
            }
            else
            { 
                int i;
                l_37[g_28] = ((safe_sub_func_uint32_t_u_u((g_80 ^= (safe_unary_minus_func_uint32_t_u(((safe_div_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s(0x24E302138E6473CBLL, g_48.f0)), p_19.f1)), (((g_45 && l_67) || l_34.f0) && g_28))), p_21.f0.f0.f0)) >= g_28)))), g_42)) <= (-1L));
            }
        }
        for (p_22.f0.f1 = 8; (p_22.f0.f1 != 14); p_22.f0.f1++)
        { 
            int32_t l_83 = 0x2DF4B1D3L;
            --g_86;
            if (g_39)
            { 
                uint32_t l_89 = 1UL;
                l_89 ^= 0xE8EBF9D6L;
                if (g_48.f2)
                    break;
                if (p_21.f0.f1)
                    break;
            }
            else
            { 
                g_48 = g_48;
            }
            for (g_50 = 10; (g_50 == 18); g_50++)
            { 
                int32_t l_97 = 1L;
                l_84 = (g_48.f0 || (safe_div_func_int64_t_s_s(((1UL < (g_42 = (l_97 = (((safe_mod_func_int32_t_s_s((((l_37[0] &= (g_48 , (((!g_35) || g_3) ^ l_97))) < 0xD8F3L) || 8UL), l_49.f1)) > 0x28L) < g_35)))) != g_80), 0xCADAFA074066B756LL)));
            }
        }
    }
    return p_22;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_111.f0.f0.f0, "g_111.f0.f0.f0", print_hash_value);
    transparent_crc(g_111.f0.f0.f1, "g_111.f0.f0.f1", print_hash_value);
    transparent_crc(g_111.f0.f1, "g_111.f0.f1", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_146[i][j][k], "g_146[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_184.f0.f0, "g_184.f0.f0", print_hash_value);
    transparent_crc(g_184.f0.f1, "g_184.f0.f1", print_hash_value);
    transparent_crc(g_184.f1, "g_184.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
