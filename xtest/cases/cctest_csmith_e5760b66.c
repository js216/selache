// SPDX-License-Identifier: MIT
// cctest_csmith_e5760b66.c --- cctest case csmith_e5760b66 (csmith seed 3849718630)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc5e83e63 */
/* @exp_ticks 0x5abb */

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

// Options:   -s 3849718630 -o /tmp/csmith_gen_el14p3ff/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   const int32_t  f3;
};
#pragma pack(pop)

union U1 {
   const int16_t  f0;
   const int8_t  f1;
};


static uint16_t g_24 = 0xE0FCL;
static uint32_t g_36 = 0x71BF3935L;
static uint32_t g_58 = 0xAE77DDBAL;
static struct S0 g_60 = {-8L,0xE7L,0xB921586CL,0x7EF2A96AL};
static int32_t g_65 = 0x8B7E04BEL;
static uint8_t g_68[3][6] = {{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL}};
static uint64_t g_96 = 0UL;
static int16_t g_98 = 0xF621L;
static int16_t *g_115 = &g_98;
static int16_t **g_114 = &g_115;
static int8_t g_128 = 1L;
static uint16_t g_143 = 0x2985L;
static int64_t g_157 = 0xD907B652E5DFB398LL;
static uint16_t g_162 = 9UL;
static struct S0 g_168 = {0x24L,0xA3L,0x7C53A199L,0L};
static int64_t g_194 = (-8L);
static uint16_t g_195 = 65526UL;
static uint64_t g_216 = 18446744073709551614UL;
static int32_t g_245[5][7] = {{4L,0x9DCD7773L,4L,4L,0x9DCD7773L,4L,4L},{(-1L),0xC1C94934L,(-1L),0xC1C94934L,(-1L),(-5L),(-1L)},{0x9DCD7773L,4L,4L,0x9DCD7773L,4L,4L,0x9DCD7773L},{0x24F6457CL,0xC1C94934L,0x24F6457CL,0L,(-1L),0L,0x24F6457CL},{4L,4L,0x9DCD7773L,4L,4L,0x9DCD7773L,4L}};
static union U1 g_302 = {0x4687L};
static uint8_t *g_305 = &g_60.f1;
static uint8_t **g_304 = &g_305;
static uint8_t ***g_303[6] = {&g_304,&g_304,&g_304,&g_304,&g_304,&g_304};
static int64_t *g_320 = &g_194;
static int8_t g_346 = 0xFDL;
static struct S0 *g_370 = &g_168;
static struct S0 **g_369[3][2] = {{&g_370,&g_370},{&g_370,&g_370},{&g_370,&g_370}};
static uint8_t g_390 = 0x27L;
static uint8_t g_391 = 255UL;
static uint8_t g_392[1][1] = {{1UL}};
static uint8_t g_393 = 0xF7L;
static uint8_t * const g_389[3][6] = {{&g_393,(void*)0,(void*)0,&g_390,&g_390,(void*)0},{&g_393,&g_393,&g_390,&g_391,&g_392[0][0],&g_391},{(void*)0,&g_393,(void*)0,(void*)0,&g_390,&g_390}};
static uint8_t * const *g_388 = &g_389[2][0];
static uint32_t **g_434[2] = {(void*)0,(void*)0};
static int16_t g_445[7] = {0x137AL,0x2903L,0x2903L,0x137AL,0x2903L,0x2903L,0x137AL};
static int32_t *g_457 = &g_65;
static int16_t g_461 = 0x31A5L;
static int16_t ***g_473 = &g_114;
static int32_t g_498 = 0x233B3F65L;
static const uint64_t *g_507 = &g_216;
static const uint64_t **g_506 = &g_507;
static int64_t *g_513 = &g_157;
static const uint32_t g_529 = 0xEEC7AE77L;
static uint8_t ****g_584 = &g_303[0];
static uint8_t **** const *g_583[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint8_t g_588 = 0x9BL;
static int32_t **g_600[2] = {&g_457,&g_457};
static int32_t ***g_599 = &g_600[0];
static int64_t **g_852 = &g_513;
static int64_t ***g_851[3][6] = {{&g_852,&g_852,&g_852,&g_852,&g_852,&g_852},{&g_852,&g_852,&g_852,&g_852,&g_852,&g_852},{&g_852,&g_852,&g_852,&g_852,&g_852,&g_852}};
static int64_t ****g_850 = &g_851[1][1];
static int8_t g_941 = 0xDEL;
static int64_t g_1009 = 0xAA2A2ECA79BE5E01LL;
static uint32_t g_1017 = 4294967291UL;
static uint64_t **g_1075 = (void*)0;
static const int32_t *g_1080 = &g_65;
static int16_t ****g_1241[3][2][7] = {{{&g_473,&g_473,&g_473,(void*)0,(void*)0,&g_473,&g_473},{(void*)0,(void*)0,&g_473,&g_473,(void*)0,&g_473,&g_473}},{{&g_473,(void*)0,&g_473,&g_473,&g_473,&g_473,&g_473},{(void*)0,(void*)0,&g_473,&g_473,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_473,&g_473,(void*)0,(void*)0,(void*)0,(void*)0},{&g_473,&g_473,&g_473,&g_473,(void*)0,&g_473,(void*)0}}};



static uint32_t  func_1(void);
static int32_t  func_2(uint32_t  p_3);
static int32_t  func_5(uint32_t  p_6, uint32_t  p_7);
static uint32_t  func_8(uint64_t  p_9);
static int64_t  func_11(uint32_t  p_12, int8_t  p_13, uint32_t  p_14);
static int64_t  func_17(union U1  p_18, const int16_t  p_19);
static union U1  func_20(uint8_t  p_21, uint32_t  p_22, int32_t  p_23);
static uint32_t  func_27(const int32_t  p_28, const int32_t  p_29, int32_t  p_30, struct S0  p_31, uint32_t  p_32);




static uint32_t  func_1(void)
{ 
    int64_t l_4[1][2];
    int32_t *l_1205 = &g_245[3][2];
    const int64_t l_1229 = 0L;
    uint32_t ***l_1238 = (void*)0;
    int16_t ****l_1240[2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_4[i][j] = 0xCEFA9D19AC196A16LL;
    }
    for (i = 0; i < 2; i++)
        l_1240[i] = &g_473;
    (*l_1205) = func_2(l_4[0][1]);
    for (g_941 = (-2); (g_941 <= (-13)); --g_941)
    { 
        const uint8_t l_1214 = 0xFBL;
        uint16_t *l_1227 = &g_162;
        int32_t l_1231 = 0L;
        if ((*l_1205))
        { 
            const uint16_t l_1222[5][5][5] = {{{0x99C0L,0x99C0L,5UL,0x99C0L,0x99C0L},{65535UL,0UL,65535UL,65535UL,0UL},{0x99C0L,0x3D62L,0x3D62L,0x99C0L,0x3D62L},{0UL,0UL,1UL,0UL,0UL},{0x3D62L,0x99C0L,0x3D62L,0x3D62L,0x99C0L}},{{0UL,65535UL,65535UL,0UL,65535UL},{0x99C0L,0x99C0L,5UL,0x99C0L,0x99C0L},{65535UL,0UL,65535UL,65535UL,0UL},{0x99C0L,0x3D62L,0x3D62L,0x99C0L,0x3D62L},{0UL,0UL,1UL,0UL,0UL}},{{0x3D62L,0x99C0L,0x3D62L,0x3D62L,0x99C0L},{0UL,65535UL,65535UL,0UL,65535UL},{0x99C0L,0x99C0L,5UL,0x99C0L,0x99C0L},{65535UL,0UL,65535UL,65535UL,0UL},{0x99C0L,0x3D62L,0x3D62L,0x99C0L,0x3D62L}},{{0UL,0UL,0UL,65535UL,65535UL},{5UL,0x3D62L,5UL,5UL,0x3D62L},{65535UL,1UL,1UL,65535UL,1UL},{0x3D62L,0x3D62L,0x99C0L,0x3D62L,0x3D62L},{1UL,65535UL,1UL,1UL,65535UL}},{{0x3D62L,5UL,5UL,0x3D62L,5UL},{65535UL,65535UL,0UL,65535UL,65535UL},{5UL,0x3D62L,5UL,5UL,0x3D62L},{65535UL,1UL,1UL,65535UL,1UL},{0x3D62L,0x3D62L,0x99C0L,0x3D62L,0x3D62L}}};
            int32_t *l_1223 = &g_498;
            int i, j, k;
            if ((((**g_852) = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((*g_599) = (*g_599)) == &l_1205), ((safe_sub_func_uint8_t_u_u((l_1214 && (!(((*l_1223) ^= ((safe_mod_func_uint8_t_u_u((((((0UL > ((safe_mul_func_int16_t_s_s((l_1214 , (-1L)), (((safe_mod_func_int32_t_s_s(1L, 1L)) && (*g_507)) , 0xFC29L))) | 0x82ED3997L)) != l_1222[3][2][2]) , (*l_1205)) <= 0x1ECD222EAC2ED6CBLL) | l_1222[3][2][2]), l_1222[2][0][0])) & (*l_1205))) < 0x1E9B55B9L))), 255UL)) , l_1214))), g_529))) < (*g_507)))
            { 
                int32_t l_1226 = 0L;
                int32_t l_1228 = (-1L);
                int32_t *l_1230[6][2][1] = {{{&g_65},{&g_498}},{{&g_498},{&g_65}},{{&g_498},{&g_498}},{{&g_65},{&g_498}},{{&g_498},{&g_65}},{{&g_498},{&g_498}}};
                int32_t *l_1232[1][7][5] = {{{&g_245[3][2],&l_1231,&g_245[3][2],&l_1231,&g_245[3][2]},{&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2]},{&g_245[3][2],&l_1231,&g_245[3][2],&l_1231,&g_245[3][2]},{&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2]},{&g_245[3][2],&l_1231,&g_245[3][2],&l_1231,&g_245[3][2]},{&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2]},{&g_245[3][2],&l_1231,&g_245[3][2],&l_1231,&g_245[3][2]}}};
                int i, j, k;
                l_1231 ^= (((4294967289UL != (safe_sub_func_uint16_t_u_u(((l_1228 = ((((*l_1205) , l_1226) & (l_1227 == &g_162)) , (((g_498 < (*l_1205)) , g_98) , 0x80L))) && l_1228), l_1229))) , 1L) <= g_162);
                (**g_599) = l_1232[0][1][4];
            }
            else
            { 
                uint16_t l_1233 = 0x9F4AL;
                (*l_1205) = ((*l_1223) != l_1214);
                if (l_1233)
                    continue;
            }
        }
        else
        { 
            int32_t *l_1234[7] = {&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2],&g_245[3][2]};
            uint32_t l_1235 = 0x1E1E1D17L;
            uint32_t ****l_1239 = &l_1238;
            int i;
            l_1235++;
            (*l_1239) = l_1238;
        }
    }
    g_1241[1][0][5] = l_1240[0];
    return (*l_1205);
}



static int32_t  func_2(uint32_t  p_3)
{ 
    int16_t l_10 = (-1L);
    uint64_t l_1007 = 0x938EBE98426B93EALL;
    int64_t *l_1008 = &g_1009;
    uint32_t * const l_1016[6][5][7] = {{{&g_1017,&g_1017,(void*)0,(void*)0,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{(void*)0,&g_1017,(void*)0,(void*)0,&g_1017,(void*)0,(void*)0},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,(void*)0,&g_1017,&g_1017}},{{&g_1017,(void*)0,&g_1017,(void*)0,&g_1017,&g_1017,(void*)0},{(void*)0,&g_1017,(void*)0,&g_1017,&g_1017,&g_1017,&g_1017},{(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017}},{{&g_1017,(void*)0,(void*)0,&g_1017,&g_1017,&g_1017,(void*)0},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,(void*)0},{(void*)0,&g_1017,&g_1017,&g_1017,(void*)0,&g_1017,&g_1017},{&g_1017,(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,(void*)0,(void*)0,&g_1017,&g_1017,(void*)0}},{{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,(void*)0,&g_1017},{&g_1017,&g_1017,(void*)0,&g_1017,(void*)0,(void*)0,&g_1017},{(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,(void*)0,&g_1017},{(void*)0,(void*)0,(void*)0,&g_1017,(void*)0,&g_1017,&g_1017},{(void*)0,(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017}},{{(void*)0,(void*)0,(void*)0,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,(void*)0,(void*)0},{&g_1017,&g_1017,(void*)0,(void*)0,&g_1017,&g_1017,(void*)0},{&g_1017,&g_1017,&g_1017,(void*)0,(void*)0,&g_1017,&g_1017}},{{&g_1017,(void*)0,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017},{&g_1017,&g_1017,&g_1017,&g_1017,(void*)0,(void*)0,(void*)0},{&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,&g_1017,(void*)0},{(void*)0,(void*)0,&g_1017,(void*)0,&g_1017,&g_1017,&g_1017},{(void*)0,&g_1017,&g_1017,(void*)0,&g_1017,&g_1017,(void*)0}}};
    uint32_t * const *l_1015 = &l_1016[3][3][0];
    uint32_t * const **l_1014 = &l_1015;
    int32_t l_1018 = 0x61176145L;
    int32_t l_1019[5];
    int32_t *l_1020[5];
    int16_t l_1021 = 1L;
    int64_t l_1022 = 0x74D9C39D637FC9D3LL;
    int16_t ****l_1058 = &g_473;
    int32_t ***** const l_1084 = (void*)0;
    int16_t ** const *l_1117 = &g_114;
    int16_t ** const **l_1116 = &l_1117;
    int64_t l_1120 = 0x6BBF8578130B34C8LL;
    int8_t l_1128[6] = {0x24L,0x39L,0x24L,0x24L,0x39L,0x24L};
    struct S0 l_1138 = {1L,251UL,18446744073709551615UL,0x9D532480L};
    const union U1 *l_1142 = &g_302;
    const union U1 **l_1141 = &l_1142;
    uint8_t *****l_1143 = &g_584;
    int8_t *l_1144 = &g_60.f0;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1019[i] = 0x0AF88CC6L;
    for (i = 0; i < 5; i++)
        l_1020[i] = &g_245[3][2];
    l_1022 ^= (l_1021 = (func_5(p_3, func_8(l_10)) ^ (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((((*l_1008) &= l_1007) || p_3), ((l_1019[3] = (safe_rshift_func_uint8_t_u_u(((l_1018 &= ((safe_lshift_func_int16_t_s_u(((void*)0 == l_1014), 8)) | l_1007)) == l_1007), 1))) , 0x80L))), 0x5CFBL))));
    for (g_588 = 0; (g_588 < 1); g_588 = safe_add_func_int16_t_s_s(g_588, 1))
    { 
        int32_t *l_1031 = &l_1019[4];
        int32_t l_1042 = 0L;
        uint64_t ***l_1053 = (void*)0;
        struct S0 l_1105 = {1L,0xF4L,0x7C000D8EL,1L};
        uint8_t *l_1118[1][6];
        int32_t l_1119 = (-4L);
        int32_t l_1121 = 0x0EC8F526L;
        int32_t l_1122 = 1L;
        int32_t l_1123 = 0xDBB88D9BL;
        int32_t l_1124 = 0xC6ABF3EAL;
        int32_t l_1125 = 0x505AC896L;
        int32_t l_1126 = 7L;
        int32_t l_1127[4][3] = {{(-1L),0x5DAAE787L,(-1L)},{0L,(-3L),0L},{(-1L),0x5DAAE787L,(-1L)},{0L,(-3L),0L}};
        int32_t l_1129[4][5][6] = {{{0xF08836CAL,4L,0x57FA8BB4L,0x737DA7B5L,0L,0x156C1B44L},{0L,0L,0x2CF738CDL,1L,0L,0xF08836CAL},{(-4L),4L,0L,(-1L),0x737DA7B5L,(-1L)},{(-5L),1L,(-5L),0L,0x2CF738CDL,0L},{0L,0x57FA8BB4L,0x156C1B44L,0xB67C57E1L,0x92128932L,4L}},{{0x57FA8BB4L,0x2CF738CDL,(-4L),0xB67C57E1L,1L,0L},{0L,0L,0x737DA7B5L,0L,0L,0x737DA7B5L},{(-5L),(-5L),3L,(-1L),7L,0x57FA8BB4L},{(-4L),0x156C1B44L,7L,0L,0x737DA7B5L,0L},{0L,0L,(-1L),1L,(-1L),4L}},{{0x156C1B44L,1L,0L,0x583813BDL,0L,1L},{0x583813BDL,0L,1L,0x156C1B44L,0x18D1F3CBL,0x57FA8BB4L},{1L,(-1L),0L,0L,0L,0x2CF738CDL},{0L,(-1L),(-4L),0L,0x18D1F3CBL,0L},{(-5L),0L,(-1L),(-1L),0L,(-5L)}},{{0x57FA8BB4L,1L,0L,0L,(-1L),0x156C1B44L},{1L,0L,3L,4L,0x737DA7B5L,(-4L)},{1L,(-4L),4L,0L,(-1L),0x737DA7B5L},{0x57FA8BB4L,(-1L),0L,(-1L),0x57FA8BB4L,3L},{(-5L),0L,0x2CF738CDL,0L,0x92128932L,7L}}};
        uint8_t l_1130 = 0x40L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_1118[i][j] = &g_391;
        }
        for (g_60.f1 = (-29); (g_60.f1 > 7); ++g_60.f1)
        { 
            uint8_t l_1035 = 0x10L;
            int8_t *l_1041 = &g_60.f0;
            int16_t ****l_1060[7] = {&g_473,&g_473,&g_473,&g_473,&g_473,&g_473,&g_473};
            uint8_t l_1063 = 0xEFL;
            union U1 *l_1066[2];
            const int32_t *l_1079 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1066[i] = (void*)0;
            for (g_162 = 0; (g_162 >= 51); g_162++)
            { 
                for (g_216 = 15; (g_216 == 11); --g_216)
                { 
                    return p_3;
                }
            }
            (**g_599) = (l_1031 = &l_1018);
            (**g_599) = (func_20((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(l_1035)), 0)), p_3, (l_1042 |= (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((*l_1041) ^= (~1L)), (*l_1031))), 5)))) , (void*)0);
            if (p_3)
            { 
                return p_3;
            }
            else
            { 
                uint16_t l_1049 = 65535UL;
                uint64_t *l_1054 = (void*)0;
                uint64_t *l_1055 = &g_216;
                int32_t l_1057 = 0x29E69E45L;
                int32_t l_1078 = 1L;
                if (((*l_1031) = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(0x5CL, ((*l_1031) & ((*l_1055) = (safe_sub_func_uint16_t_u_u((0xAABDAEEAL && l_1049), ((safe_lshift_func_int16_t_s_u((+((void*)0 == l_1053)), 10)) || 0xCDBBL))))))) , (**g_114)), 11))))
                { 
                    int16_t *****l_1059 = &l_1058;
                    uint16_t *l_1076 = (void*)0;
                    int32_t l_1077 = 1L;
                    l_1057 &= ((*l_1031) = (!(*g_305)));
                    l_1078 |= (((((((((*l_1059) = l_1058) != l_1060[0]) == (l_1077 = ((((func_20(((safe_div_func_uint16_t_u_u((g_195 = (l_1063 , ((safe_mul_func_int8_t_s_s((&g_302 != l_1066[0]), (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((-1L), 12)), (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((g_1075 = g_1075) != (void*)0), 65531UL)), p_3)))))) , 8UL))), 0x5946L)) >= (*g_507)), p_3, p_3) , p_3) & (*l_1031)) | (*l_1031)) >= p_3))) ^ p_3) <= (**g_114)) , p_3) == 0xE658411DL) < l_1057);
                    g_1080 = l_1079;
                }
                else
                { 
                    uint8_t l_1083 = 3UL;
                    int64_t *** const *l_1098 = &g_851[2][0];
                    (*l_1031) = (p_3 ^ ((l_1083 || (l_1084 == (void*)0)) < (safe_div_func_uint64_t_u_u((~((+(safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int8_t_s_s(0x71L, (0x2D94C06916BD042ALL || (safe_mul_func_uint8_t_u_u(p_3, p_3))))) & (*g_115)))), p_3))) | p_3)), (*g_507)))));
                    l_1078 = (safe_sub_func_int64_t_s_s(((void*)0 == l_1098), ((*l_1055)--)));
                }
                for (g_65 = 0; g_65 < 3; g_65 += 1)
                {
                    for (g_168.f0 = 0; g_168.f0 < 6; g_168.f0 += 1)
                    {
                        g_68[g_65][g_168.f0] = 249UL;
                    }
                }
                return l_1049;
            }
        }
        l_1119 = (((**g_114) = (safe_rshift_func_uint16_t_u_u((((l_1042 ^= ((safe_sub_func_int64_t_s_s((l_1105 , 9L), (safe_div_func_uint32_t_u_u((((((safe_div_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((--(**g_304)), ((*l_1031) = ((safe_mod_func_int64_t_s_s(((*l_1008) = (((l_1116 = l_1116) == &l_1117) == (p_3 , ((((void*)0 != g_434[0]) == p_3) || (*l_1031))))), p_3)) <= p_3)))) , g_498) , (*l_1031)), p_3)) < p_3) < p_3) >= p_3) || p_3), p_3)))) , p_3)) > 0x50L) >= l_1105.f1), p_3))) | 0xBEA6L);
        l_1130--;
    }
    if ((+((*l_1144) |= ((((safe_mul_func_int8_t_s_s(p_3, ((((p_3 != 0x888BL) < ((((l_1138 , g_346) == ((safe_rshift_func_int8_t_s_u(((((((p_3 || p_3) > p_3) != 1UL) ^ (**g_304)) != p_3) < 0xD306L), 2)) >= (*g_1080))) , l_1141) == &l_1142)) || p_3) < 0L))) , p_3) , l_1143) != l_1143))))
    { 
        (**g_599) = &l_1018;
    }
    else
    { 
        uint32_t l_1145[5][6] = {{0xB88D57ECL,0xB88D57ECL,8UL,4294967295UL,0x58556DBBL,0x1751264CL},{0x58556DBBL,0xB06347A9L,0UL,4294967295UL,0xB06347A9L,8UL},{0xB88D57ECL,0x58556DBBL,0UL,0x58556DBBL,0xB88D57ECL,0x1751264CL},{0xF9E794D1L,0x58556DBBL,8UL,0xF9E794D1L,0xB06347A9L,7UL},{0xF9E794D1L,0xB06347A9L,7UL,0x58556DBBL,0x58556DBBL,7UL}};
        uint8_t ***l_1154 = &g_304;
        int32_t l_1159 = (-7L);
        uint8_t l_1187 = 0xEAL;
        int32_t l_1203 = 0xB1ED4FDCL;
        int i, j;
        l_1145[0][1]--;
        for (l_1018 = 0; (l_1018 <= 2); l_1018++)
        { 
            int64_t l_1155 = 1L;
            int32_t l_1204 = 5L;
            for (g_1017 = 0; (g_1017 <= 9); g_1017 = safe_add_func_int8_t_s_s(g_1017, 9))
            { 
                uint64_t l_1160 = 0UL;
                int32_t l_1193 = 0x5E8EB27EL;
                for (g_393 = (-30); (g_393 <= 10); g_393++)
                { 
                    int32_t l_1156 = 0x2E723A84L;
                    l_1155 = (l_1154 != (void*)0);
                    if (l_1156)
                        break;
                }
                if ((safe_sub_func_int16_t_s_s(0xF865L, l_1145[3][2])))
                { 
                    int8_t l_1179 = 0x37L;
                    int32_t l_1180 = 0x871F53EDL;
                    int32_t l_1192 = 2L;
                    l_1160--;
                    l_1159 &= (((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((0x23E5578AL == ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((((0x9E70L && (((l_1180 = (safe_lshift_func_int8_t_s_s((func_20(l_1155, p_3, (l_1179 != (0xDAL <= p_3))) , p_3), 3))) >= l_1145[0][1]) != 65533UL)) <= l_1179) && 0xCA0DBFED816A36F8LL), (*g_1080))) , p_3), p_3)) > l_1145[0][1]), 4)), 3)), 0xB5L)) != l_1160)), l_1155)), 3)) , p_3) , 0xC44373EDL);
                    l_1193 = (safe_sub_func_int8_t_s_s(l_1145[1][4], ((*l_1144) = (4294967292UL || (l_1192 |= (safe_lshift_func_uint8_t_u_s(l_1155, ((l_1180 = (safe_div_func_int32_t_s_s(((((**g_852) = (l_1187 , l_1160)) == (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(l_1179, (l_1138 , 0UL))), p_3))) , p_3), p_3))) , l_1179))))))));
                }
                else
                { 
                    int32_t ****l_1198[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1198[i] = &g_599;
                    l_1204 |= (safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((((l_1198[0] == (void*)0) , p_3) , (*g_513)), p_3)), (safe_lshift_func_uint8_t_u_u(((***l_1154) = ((safe_rshift_func_uint8_t_u_s(((*g_507) ^ ((0x48L | p_3) , p_3)), l_1193)) > 0x318CL)), l_1203))));
                    l_1020[2] = &l_1203;
                }
            }
        }
    }
    return p_3;
}



static int32_t  func_5(uint32_t  p_6, uint32_t  p_7)
{ 
    int32_t *l_793 = (void*)0;
    int32_t l_794 = 0x32E8E85DL;
    union U1 *l_797 = (void*)0;
    uint8_t *l_800 = &g_392[0][0];
    int32_t l_858[5][2][3] = {{{0x56592CEDL,0x56592CEDL,0L},{(-1L),0x8D410C83L,0x8D410C83L}},{{0L,0x94B6C206L,0x41B0D7F3L},{(-1L),0L,(-1L)}},{{0x56592CEDL,0L,0x41B0D7F3L},{0xB464D530L,0xB464D530L,0x8D410C83L}},{{(-5L),0L,0L},{0x8D410C83L,0L,6L}},{{(-5L),0x94B6C206L,(-5L)},{0xB464D530L,0x8D410C83L,6L}}};
    int64_t **l_872 = &g_320;
    int16_t **l_886 = &g_115;
    uint64_t l_918 = 0xC72E704C9CFBC378LL;
    int64_t l_947 = 0x163C1374422F458FLL;
    uint8_t l_948 = 0x87L;
    int64_t l_952 = 0L;
    int16_t l_954[3][7][1] = {{{0L},{0x9B1FL},{0L},{0x1E5CL},{0x1E5CL},{0L},{0x9B1FL}},{{0L},{0x1E5CL},{0x1E5CL},{0L},{0x9B1FL},{0L},{0x1E5CL}},{{0x1E5CL},{0L},{0x9B1FL},{0L},{0x1E5CL},{0x1E5CL},{0L}}};
    struct S0 *l_964 = (void*)0;
    int16_t l_966 = 0x625EL;
    int32_t ****l_971 = &g_599;
    uint32_t **l_982 = (void*)0;
    int16_t l_984 = 0xE581L;
    int32_t l_992 = 0x98F9F9EFL;
    int32_t *l_993[5][1] = {{&l_858[3][0][1]},{&g_65},{&l_858[3][0][1]},{&g_65},{&l_858[3][0][1]}};
    int64_t l_994[2][4][5] = {{{1L,(-1L),0x4DAA1B4BEEC11C29LL,0x6C20D7E59AF00990LL,0xFD845D49D89EB387LL},{0x8EF945E338600699LL,1L,(-1L),0xFD845D49D89EB387LL,(-6L)},{1L,0x8EF945E338600699LL,(-6L),0x8EF945E338600699LL,1L},{0x965F7420ED2E1887LL,0xBA9771AD20192F27LL,(-6L),(-1L),0x2E84C0038BD7C4D3LL}},{{0x6C20D7E59AF00990LL,0xAB24D043955337C6LL,(-1L),0x382EBAFAA060CEE6LL,0L},{0L,1L,0x4DAA1B4BEEC11C29LL,0xBA9771AD20192F27LL,0L},{0xAB24D043955337C6LL,0x2E84C0038BD7C4D3LL,0x2E84C0038BD7C4D3LL,0xAB24D043955337C6LL,0x8EF945E338600699LL},{0L,0x2E84C0038BD7C4D3LL,(-6L),0x5F95BBDE6239D26ELL,0xAB24D043955337C6LL}}};
    int32_t l_995 = 0x3415B205L;
    int8_t l_996[5][6][6] = {{{0xB9L,0x0DL,0xBFL,0x27L,0x6FL,0xB9L},{(-6L),0xB9L,0xBFL,0x6CL,(-1L),0xCCL},{0x26L,0x6CL,0xB9L,0xADL,0xA6L,0xADL},{0xADL,0xA6L,0xADL,0xB9L,0x6CL,0x26L},{0xCCL,(-1L),0x6CL,0xBFL,0xB9L,(-6L)},{0xB9L,0x6FL,0x27L,0xBFL,0x0DL,0xB9L}},{{0xCCL,(-5L),0x7AL,0xB9L,(-1L),(-1L)},{0xADL,0x91L,0x91L,0xADL,0xFFL,(-1L)},{0x26L,1L,0xADL,0x6CL,0xEDL,(-1L)},{(-6L),(-1L),(-5L),0x27L,0xEDL,0xF5L},{0xB9L,1L,(-2L),0x7AL,0xFFL,0xB9L},{(-1L),0x91L,0L,0x91L,(-1L),0L}},{{(-1L),(-5L),0xEDL,0xADL,0x0DL,2L},{(-1L),0x6FL,0xADL,(-5L),0xB9L,2L},{0xF5L,(-1L),0xEDL,(-2L),0x6CL,0L},{0xB9L,0xA6L,0L,0L,0xA6L,0xB9L},{0L,0x6CL,(-2L),0xEDL,(-1L),0xF5L},{2L,0xB9L,(-5L),0xADL,0x6FL,(-1L)}},{{2L,0x0DL,0xADL,0xEDL,(-5L),(-1L)},{0L,(-1L),0x91L,0L,0x91L,(-1L)},{0xB9L,0xFFL,0x7AL,(-2L),1L,0xB9L},{0xF5L,0xEDL,0x27L,(-5L),(-1L),(-6L)},{(-1L),0xEDL,0x6CL,0xADL,1L,0x26L},{(-1L),0xFFL,0xADL,0x91L,0x91L,0xADL}},{{(-1L),(-1L),0xB9L,0x7AL,(-5L),0xCCL},{0xB9L,0x0DL,0xBFL,0x27L,0x6FL,0xB9L},{(-6L),0xB9L,0xBFL,0x6CL,(-1L),0xCCL},{0x26L,0x6CL,0xB9L,0xADL,0xA6L,0xADL},{0xADL,0xA6L,0xADL,0xB9L,0x6CL,0x26L},{0xCCL,(-1L),0x6CL,0xBFL,0xB9L,(-6L)}}};
    int32_t l_997 = 0L;
    int64_t l_998[2][3] = {{0xC2DF08F1D994F611LL,0xC2DF08F1D994F611LL,0xC2DF08F1D994F611LL},{1L,1L,1L}};
    int8_t l_999[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint32_t l_1000[6] = {0x928D8387L,4294967293UL,4294967293UL,0x928D8387L,4294967293UL,4294967293UL};
    int i, j, k;
    l_794 = p_7;
    for (g_391 = 1; (g_391 != 57); g_391++)
    { 
        (**g_599) = &l_794;
    }
    l_797 = l_797;
    if ((l_794 = (((****g_584)++) < ((*l_800)++))))
    { 
        return p_6;
    }
    else
    { 
        uint32_t l_812[6][7] = {{0x732A69B1L,0x6E02A590L,0xA86B30C4L,0x6E02A590L,0x732A69B1L,0x6E02A590L,0xA86B30C4L},{0x59DE2C09L,4294967293UL,1UL,1UL,4294967293UL,0x59DE2C09L,0UL},{0x52FC7FB5L,4294967294UL,0x52FC7FB5L,0x6E02A590L,0x52FC7FB5L,4294967294UL,0x52FC7FB5L},{0x59DE2C09L,1UL,0UL,4294967293UL,4294967293UL,0UL,1UL},{0x732A69B1L,4294967294UL,0xA86B30C4L,4294967294UL,0x732A69B1L,4294967294UL,0xA86B30C4L},{4294967293UL,4294967293UL,0UL,1UL,0x59DE2C09L,0x59DE2C09L,1UL}};
        int32_t l_834 = 0L;
        int32_t l_835 = 1L;
        int16_t ** const l_836 = &g_115;
        int32_t l_864 = (-1L);
        int32_t l_866 = 0L;
        int32_t l_867 = 6L;
        uint64_t *l_884 = &g_216;
        uint64_t **l_883 = &l_884;
        uint8_t ****l_921 = (void*)0;
        const uint16_t *l_926 = (void*)0;
        int8_t *l_929 = &g_60.f0;
        int32_t l_938 = 0xE6E80461L;
        int32_t l_939 = (-5L);
        int32_t l_940[1];
        int32_t l_951 = 5L;
        int32_t l_953 = 1L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_940[i] = 0x093426D2L;
        l_794 ^= (-10L);
        if (l_794)
        { 
            uint32_t l_807[6][5] = {{0UL,0xB9EC63A8L,0xC5404649L,0xB9EC63A8L,0UL},{0x16AD3868L,4294967290UL,0xE731876AL,4294967290UL,0x16AD3868L},{0UL,0xB9EC63A8L,0xC5404649L,0xB9EC63A8L,0UL},{0x16AD3868L,4294967290UL,0xE731876AL,4294967290UL,0x16AD3868L},{0UL,0xB9EC63A8L,0xC5404649L,0xB9EC63A8L,0UL},{0x16AD3868L,4294967290UL,0xE731876AL,4294967290UL,0x16AD3868L}};
            uint16_t *l_808 = &g_162;
            uint16_t *l_809 = (void*)0;
            uint16_t *l_810 = &g_24;
            uint16_t *l_811 = (void*)0;
            uint8_t *l_833 = &g_393;
            int32_t l_840 = 0xC3DD3550L;
            int64_t ***l_848 = (void*)0;
            int64_t ****l_847 = &l_848;
            int32_t l_859 = 0x8528BBD5L;
            int32_t l_860 = 0xD010F6BEL;
            int32_t l_862 = 0L;
            int32_t l_863 = 0L;
            int32_t l_865 = 0x9F6F9F73L;
            uint32_t l_868 = 7UL;
            struct S0 l_880 = {1L,0x7AL,0x7FCC5974L,-2L};
            int8_t l_896 = 9L;
            int32_t **l_911 = (void*)0;
            uint8_t ****l_923[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *****l_925[1][6][6] = {{{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847},{&l_847,&l_847,&l_847,&l_847,&l_847,&l_847}}};
            int32_t *l_930 = &l_858[3][1][1];
            int32_t l_942 = 1L;
            int32_t l_943 = 0xD9CF7ED9L;
            int32_t l_944 = 0L;
            int32_t l_945 = 5L;
            int32_t l_946[2][5];
            uint16_t l_956[4];
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_946[i][j] = 0x99435423L;
            }
            for (i = 0; i < 4; i++)
                l_956[i] = 65528UL;
            if ((safe_add_func_uint32_t_u_u((0x0D4705B6L == (((((((((safe_sub_func_int32_t_s_s((((l_812[4][6] = ((*l_810) = ((*l_808) = (g_195 = l_807[2][3])))) , (safe_lshift_func_uint16_t_u_s((--(*l_810)), 2))) < ((safe_mod_func_uint16_t_u_u((6L <= (safe_rshift_func_int16_t_s_s((func_20(((&g_434[1] != &g_434[0]) || ((safe_div_func_int64_t_s_s((l_834 = ((((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((0L < (safe_add_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_833 == l_800), 7)), l_807[2][3])) <= l_794) , p_6), (**g_506)))), 15)), p_6)) != (**g_114)) > (**g_114)) , 255UL) < 0xC4L) , (*g_320))), (-5L))) != 0x33L)), l_835, p_6) , p_6), 12))), p_6)) , l_807[3][1])), l_807[2][3])) >= 0x5BA72A7F3C630F58LL) , l_836) == &g_115) && l_812[0][0]) , p_6) | l_835) > 65535UL) > l_807[4][4])), l_835)))
            { 
                uint32_t l_844 = 1UL;
                int32_t l_861[6][4] = {{(-1L),(-10L),(-10L),(-1L)},{(-10L),(-1L),(-10L),0xE89F9503L},{(-10L),(-10L),(-10L),8L},{(-1L),0xE89F9503L,8L,8L},{(-10L),(-10L),1L,0xE89F9503L},{0xE89F9503L,(-1L),1L,(-1L)}};
                int64_t **l_871[3][2][1];
                struct S0 l_876 = {0x0AL,253UL,0UL,0x2CB74BC7L};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_871[i][j][k] = &g_513;
                    }
                }
                if ((safe_lshift_func_uint8_t_u_s((~p_6), 2)))
                { 
                    int32_t *l_841 = &l_834;
                    int32_t *l_842 = &l_794;
                    int32_t *l_843[1][5];
                    int64_t *****l_849[3];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_843[i][j] = &l_840;
                    }
                    for (i = 0; i < 3; i++)
                        l_849[i] = (void*)0;
                    l_844--;
                    (*l_841) ^= p_7;
                    g_850 = l_847;
                }
                else
                { 
                    int32_t *l_853 = (void*)0;
                    int32_t *l_854 = &l_835;
                    int32_t *l_855 = &l_834;
                    int32_t *l_856 = &l_834;
                    int32_t *l_857[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_857[i] = (void*)0;
                    ++l_868;
                }
                if ((l_871[0][0][0] != l_872))
                { 
                    return p_7;
                }
                else
                { 
                    uint64_t ***l_885 = &l_883;
                    l_866 = (((~((0x6BBBC550L <= (safe_lshift_func_uint16_t_u_s(g_65, ((*g_115) && (l_876 , l_860))))) > ((+((((safe_mul_func_uint16_t_u_u(((l_880 , (safe_rshift_func_uint8_t_u_u((((*l_885) = l_883) != (void*)0), (****g_584)))) > l_807[4][0]), p_7)) > g_168.f2) , 0L) , 0x5B59L)) , (*g_115)))) , l_836) == l_886);
                }
                return l_880.f0;
            }
            else
            { 
                uint16_t l_895 = 1UL;
                int32_t l_906 = 0x34C07F67L;
                int32_t *l_914 = &l_858[3][0][1];
                int32_t *l_915 = (void*)0;
                int32_t *l_916 = &l_794;
                int32_t *l_917[7][1] = {{&l_866},{&l_864},{&l_864},{&l_866},{&l_864},{&l_864},{&l_866}};
                uint8_t *****l_922 = &l_921;
                uint8_t *****l_924 = (void*)0;
                int i, j;
                for (g_195 = 0; (g_195 <= 5); g_195 += 1)
                { 
                    int32_t l_901 = (-4L);
                    int i;
                    (**g_599) = &l_834;
                    if (p_7)
                        continue;
                    (*g_457) = (safe_sub_func_int64_t_s_s(((*g_320) |= (safe_rshift_func_int16_t_s_s(((((safe_add_func_int16_t_s_s(l_895, l_896)) ^ (((safe_mod_func_int64_t_s_s((((p_7 || (safe_rshift_func_int16_t_s_u((l_901 , (safe_add_func_int32_t_s_s((*g_457), (safe_add_func_uint64_t_u_u(4UL, (((g_302 , 0x1D2BFEF5L) < l_901) , (**g_852))))))), l_840))) >= p_6) > l_895), p_6)) > (****g_584)) >= p_6)) , (**g_506)) , (*g_115)), (*g_115)))), l_901));
                    l_906 &= 5L;
                    if (l_901)
                        continue;
                }
                l_906 = ((18446744073709551614UL && (safe_add_func_uint32_t_u_u(4294967295UL, 0xA339A49AL))) >= (p_7 , (safe_mul_func_uint16_t_u_u(l_835, (l_911 == (g_302 , l_911))))));
                for (g_157 = (-27); (g_157 == 12); ++g_157)
                { 
                    (**g_599) = &l_906;
                    if (p_6)
                        continue;
                }
                l_918--;
                (*l_914) ^= (((*l_922) = l_921) == (g_584 = l_923[2]));
            }
            (*l_930) = ((((g_850 = &g_851[1][1]) == (void*)0) >= (((l_926 == l_810) || (--(*l_833))) == l_840)) <= ((**l_836) = ((((p_6 == (((**g_304) |= (&g_128 != l_929)) == g_195)) <= l_834) != (**g_114)) & 0xF58C896FB88F7248LL)));
            for (g_65 = 0; (g_65 <= 24); ++g_65)
            { 
                int32_t *l_933 = &g_245[3][2];
                int32_t *l_934 = (void*)0;
                int32_t *l_935 = &l_862;
                int32_t *l_936[3][7] = {{&g_245[4][4],(void*)0,(void*)0,(void*)0,(void*)0,&g_245[4][4],(void*)0},{(void*)0,&l_858[3][0][1],&l_858[3][0][1],(void*)0,&l_866,(void*)0,&l_858[3][0][1]},{&l_835,&l_835,&g_245[4][4],(void*)0,&g_245[4][4],&l_835,&l_835}};
                int64_t l_937 = (-3L);
                int64_t l_955 = 0x124D4ED769B866DCLL;
                int i, j;
                l_948++;
                l_956[1]--;
            }
        }
        else
        { 
            const struct S0 *l_963 = &g_168;
            int32_t l_973 = 3L;
            int16_t * const *l_989 = (void*)0;
            int16_t * const **l_988 = &l_989;
            int32_t *l_990 = &l_973;
            struct S0 **l_991 = &g_370;
            for (l_834 = 0; (l_834 <= 1); l_834 += 1)
            { 
                int64_t l_959 = (-1L);
                uint32_t l_960[3][2] = {{4UL,4UL},{4UL,4UL},{4UL,4UL}};
                int32_t *l_975 = &l_940[0];
                int i, j;
                for (l_951 = 0; (l_951 >= 0); l_951 -= 1)
                { 
                    struct S0 **l_965 = &g_370;
                    int32_t *l_967 = &g_245[3][2];
                    uint32_t *l_968 = &g_58;
                    int32_t *l_972[2][6][5] = {{{&l_858[3][1][0],(void*)0,&l_858[3][1][0],&l_794,&l_864},{&l_940[0],&l_858[3][0][1],&l_866,&l_951,&l_864},{&l_940[0],&l_866,&l_866,&l_940[0],&l_858[3][1][0]},{&l_866,&l_940[0],&l_866,&l_864,&l_858[3][0][1]},{&l_866,&l_866,&l_858[3][1][0],&l_866,&l_866},{&l_940[0],&l_951,&l_940[0],&l_864,&l_866}},{{&l_940[0],&l_951,&l_940[0],&l_940[0],&l_951},{&l_858[3][1][0],&l_866,&l_866,&l_951,&l_866},{&l_866,&l_940[0],&l_866,&l_794,&l_866},{&l_866,&l_866,&l_940[0],&l_858[3][1][0],&l_858[3][0][1]},{&l_866,&l_858[3][0][1],&l_940[0],&l_858[3][1][0],&l_858[3][1][0]},{&l_858[3][1][0],(void*)0,&l_858[3][1][0],&l_794,&l_864}}};
                    int i, j, k;
                    l_960[0][0] &= (l_959 = p_6);
                    (*l_967) = (((*l_884) = (safe_sub_func_uint8_t_u_u((l_963 != ((*l_965) = l_964)), l_966))) & 0x3649DBB45ACBF98BLL);
                    l_973 ^= ((*l_967) ^= (((*l_968)++) , (&g_599 == l_971)));
                    (*l_967) |= (~0L);
                }
                for (g_128 = 0; (g_128 >= 0); g_128 -= 1)
                { 
                    union U1 l_976 = {0x7075L};
                    uint32_t *l_977 = &l_960[0][0];
                    uint32_t l_981 = 1UL;
                    uint32_t ***l_983 = &g_434[0];
                    (**g_599) = l_975;
                    (*g_457) &= ((((l_976 , (*g_599)) != (*g_599)) , ((*l_977) = l_973)) == ((safe_sub_func_uint32_t_u_u(((((((!((l_981 , (void*)0) != ((*l_983) = l_982))) && 0xCC8310CEL) , 8L) & l_984) , g_96) <= p_7), 0x0506513EL)) != p_6));
                }
            }
            (***l_971) = &l_858[3][0][1];
            (*l_990) = (l_940[0] ^= ((****l_971) &= ((*g_115) <= (((**g_304)++) <= (((((p_7 | (!l_973)) <= (l_988 == (g_245[3][2] , &g_114))) && p_6) >= (**g_114)) > p_7)))));
            (*l_991) = l_964;
        }
    }
    --l_1000[5];
    return p_7;
}



static uint32_t  func_8(uint64_t  p_9)
{ 
    int64_t l_35[7][3][7] = {{{0xF643D9D76C132D45LL,9L,(-1L),0x62600BF09457720FLL,1L,0x23986B299B5F277FLL,0x4489B467BB1A88AFLL},{(-1L),0xA95A2E206C165AAELL,(-8L),0x62600BF09457720FLL,(-9L),(-1L),(-2L)},{0L,(-1L),0xE0CD1B7E280BFE73LL,0x25701832D748AEE5LL,1L,(-1L),8L}},{{1L,0x62600BF09457720FLL,(-1L),9L,0xF643D9D76C132D45LL,0x23986B299B5F277FLL,(-2L)},{1L,0xA95A2E206C165AAELL,0x58A8CE9B8A514227LL,(-1L),(-9L),8L,0x4489B467BB1A88AFLL},{0L,0x62600BF09457720FLL,0x58A8CE9B8A514227LL,0x25701832D748AEE5LL,(-1L),8L,8L}},{{(-1L),(-1L),(-1L),(-1L),(-1L),0x23986B299B5F277FLL,0x44FB66C146DF8000LL},{0xF643D9D76C132D45LL,0xA95A2E206C165AAELL,0xE0CD1B7E280BFE73LL,9L,(-9L),8L,0x44FB66C146DF8000LL},{0L,9L,(-8L),0x25701832D748AEE5LL,0xF643D9D76C132D45LL,8L,8L}},{{0xF643D9D76C132D45LL,9L,(-1L),0x62600BF09457720FLL,1L,0x23986B299B5F277FLL,0x4489B467BB1A88AFLL},{(-1L),0xA95A2E206C165AAELL,(-8L),0x62600BF09457720FLL,(-9L),(-1L),(-2L)},{0L,(-1L),0xE0CD1B7E280BFE73LL,0x25701832D748AEE5LL,1L,(-1L),8L}},{{1L,0x62600BF09457720FLL,(-1L),9L,0xF643D9D76C132D45LL,0x23986B299B5F277FLL,(-2L)},{1L,0xA95A2E206C165AAELL,0x58A8CE9B8A514227LL,(-1L),(-9L),8L,0x4489B467BB1A88AFLL},{0L,0x62600BF09457720FLL,0x58A8CE9B8A514227LL,0x25701832D748AEE5LL,(-1L),8L,8L}},{{(-1L),(-1L),(-1L),(-1L),(-1L),0x23986B299B5F277FLL,0x44FB66C146DF8000LL},{0xF643D9D76C132D45LL,0xA95A2E206C165AAELL,0xE0CD1B7E280BFE73LL,9L,(-9L),8L,0x44FB66C146DF8000LL},{0L,9L,(-8L),0x25701832D748AEE5LL,0xF643D9D76C132D45LL,8L,8L}},{{0xF643D9D76C132D45LL,9L,(-1L),(-10L),8L,0x7FD326D35DF961DFLL,0xE0CD1B7E280BFE73LL},{8L,(-8L),0xDE97EE8C4B0538FDLL,(-10L),0x8214D2FC5C3C3AE5LL,(-1L),(-8L)},{0xE69A4575F7F77771LL,0x3F116E8CFB996340LL,0x2DDB74A71A6E483BLL,0x2A4E630971CF717CLL,8L,(-1L),(-1L)}}};
    int16_t l_49[4][4][4] = {{{(-1L),(-4L),0L,0xBB76L},{0L,0xBB76L,0xB9D7L,0L},{0L,(-8L),0x97A0L,0L},{0xF60DL,0xBB76L,0L,0xBB76L}},{{0xFA00L,(-4L),0xF6C8L,0L},{0xB9D7L,0xE505L,0xF60DL,(-1L)},{(-8L),0L,(-1L),0xB9D7L},{(-8L),(-1L),0xF60DL,0xF60DL}},{{0xB9D7L,0xB9D7L,0xF6C8L,0xE505L},{0xFA00L,0xF6C8L,0L,(-4L)},{0xF60DL,0L,0x97A0L,0L},{0L,0L,0xB9D7L,(-4L)}},{{0L,0xF6C8L,0L,0xE505L},{(-1L),0xB9D7L,0xE505L,0xF60DL},{0L,(-1L),0xE505L,0xB9D7L},{(-4L),0L,0xE505L,(-1L)}}};
    union U1 l_52 = {4L};
    int32_t l_55 = 8L;
    uint32_t *l_56 = (void*)0;
    uint32_t *l_57 = &g_58;
    int16_t *l_59 = &l_49[0][1][1];
    int8_t *l_345 = &g_346;
    int64_t **l_531 = &g_320;
    int32_t **l_549 = &g_457;
    int32_t *** const l_548[1][4] = {{&l_549,&l_549,&l_549,&l_549}};
    int32_t *** const *l_547 = &l_548[0][1];
    int32_t *** const **l_546[7][7][5] = {{{&l_547,&l_547,&l_547,&l_547,(void*)0},{(void*)0,&l_547,&l_547,(void*)0,&l_547},{&l_547,(void*)0,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,(void*)0,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,(void*)0,(void*)0,&l_547},{(void*)0,&l_547,&l_547,&l_547,&l_547}},{{&l_547,(void*)0,&l_547,(void*)0,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{(void*)0,&l_547,&l_547,(void*)0,&l_547},{&l_547,&l_547,&l_547,&l_547,(void*)0},{(void*)0,&l_547,&l_547,(void*)0,&l_547},{&l_547,(void*)0,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,(void*)0,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,(void*)0,(void*)0,&l_547},{(void*)0,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,&l_547,(void*)0,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{(void*)0,&l_547,&l_547,(void*)0,&l_547},{&l_547,&l_547,&l_547,&l_547,(void*)0}},{{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,(void*)0},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,&l_547,&l_547,(void*)0}},{{(void*)0,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,(void*)0,&l_547,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,(void*)0},{&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,(void*)0,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,&l_547,&l_547,(void*)0},{(void*)0,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,(void*)0,&l_547,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547}},{{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,(void*)0},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,&l_547,(void*)0,&l_547,&l_547},{&l_547,&l_547,&l_547,&l_547,&l_547},{&l_547,(void*)0,&l_547,&l_547,(void*)0},{(void*)0,&l_547,&l_547,&l_547,&l_547}}};
    int64_t l_563 = 6L;
    int64_t l_587 = 3L;
    const int8_t l_653 = 0xA0L;
    uint64_t l_701 = 0x55086DA41A37B589LL;
    int64_t l_713 = (-1L);
    int32_t l_756[5];
    struct S0 **l_771 = &g_370;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_756[i] = 0x0D2F99CAL;
    if (((func_11((safe_sub_func_int64_t_s_s((func_17(func_20(g_24, ((safe_mul_func_int8_t_s_s(((*l_345) ^= (func_27((((safe_mod_func_uint8_t_u_u((g_36--), (safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((*l_59) = (safe_add_func_uint32_t_u_u(((*l_57) = (safe_mod_func_int64_t_s_s(l_35[5][1][4], (safe_add_func_uint8_t_u_u(l_49[3][3][2], (safe_div_func_uint64_t_u_u(l_49[3][3][2], (l_52 , (safe_add_func_uint8_t_u_u(((((0x5DL | (l_55 = p_9)) , p_9) < g_24) , 1UL), p_9)))))))))), p_9))), 4)), l_35[6][0][4])))) , l_52.f0) & p_9), p_9, l_35[6][0][4], g_60, p_9) , (-8L))), (**g_304))) == p_9), p_9), l_52.f1) < 1L), p_9)), g_60.f3, l_35[5][2][6]) ^ p_9) == 18446744073709551615UL))
    { 
        const uint32_t *l_528 = &g_529;
        int64_t **l_530 = &g_320;
        const int32_t l_537[7] = {0x5742FB8AL,0x5742FB8AL,0x5742FB8AL,0x5742FB8AL,0x5742FB8AL,0x5742FB8AL,0x5742FB8AL};
        int32_t l_564 = 0L;
        int16_t l_569[4][3] = {{0L,0L,1L},{0xF89CL,1L,1L},{1L,0x5986L,0x1CF3L},{0xF89CL,0x5986L,0xF89CL}};
        struct S0 l_582 = {-3L,0xEFL,0x0C1335B9L,5L};
        uint8_t * const **l_606 = &g_388;
        uint16_t *l_620[1][5];
        int32_t *l_655 = (void*)0;
        int32_t ****l_722 = &g_599;
        int32_t l_748 = 0xEAB23089L;
        int32_t l_752 = 0L;
        int32_t l_754 = 0x90EECD37L;
        int32_t l_757[6][3][7];
        int8_t l_777 = 7L;
        uint64_t l_778 = 18446744073709551615UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_620[i][j] = &g_195;
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 7; k++)
                    l_757[i][j][k] = 0x6E8CABCDL;
            }
        }
        (*g_457) = ((l_528 = (void*)0) == (void*)0);
        if ((l_530 != l_531))
        { 
            int64_t ***l_532 = &l_530;
            int32_t **l_536[7][7] = {{&g_457,(void*)0,&g_457,&g_457,&g_457,(void*)0,&g_457},{&g_457,(void*)0,&g_457,&g_457,(void*)0,&g_457,&g_457},{&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457},{(void*)0,&g_457,&g_457,&g_457,(void*)0,&g_457,&g_457},{(void*)0,(void*)0,&g_457,(void*)0,&g_457,&g_457,&g_457},{&g_457,&g_457,&g_457,&g_457,&g_457,&g_457,&g_457},{&g_457,(void*)0,&g_457,&g_457,&g_457,(void*)0,&g_457}};
            int32_t ***l_535[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_535[i] = &l_536[0][6];
            (*l_532) = &g_320;
            (*g_457) = (safe_sub_func_int64_t_s_s(p_9, ((l_535[0] != &l_536[0][6]) != l_537[4])));
            return g_195;
        }
        else
        { 
            int32_t *****l_550 = (void*)0;
            int32_t l_561[4];
            int32_t l_562 = 1L;
            int i;
            for (i = 0; i < 4; i++)
                l_561[i] = (-1L);
            for (g_60.f0 = 0; (g_60.f0 < (-10)); --g_60.f0)
            { 
                int32_t *** const *l_545 = (void*)0;
                int32_t *** const **l_544 = &l_545;
                l_563 &= ((safe_div_func_int32_t_s_s(l_49[3][3][2], (~(!(((((l_546[6][0][3] = l_544) == (l_550 = l_550)) <= (safe_rshift_func_int16_t_s_s(p_9, (safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_9, ((l_561[0] = ((*g_507) <= (((safe_sub_func_uint8_t_u_u(0x73L, 0L)) | 0xE1L) == 0xD323L))) , p_9))), p_9)) != 0xFF45L) >= p_9), g_445[3]))))) <= l_562) & 252UL))))) , 0x87D9713BL);
                if ((*g_457))
                    continue;
                if ((*g_457))
                    continue;
            }
        }
        l_564 = ((*g_507) > 18446744073709551607UL);
        for (g_157 = 0; (g_157 != 4); ++g_157)
        { 
            uint32_t l_579 = 4294967295UL;
            const struct S0 l_616 = {0xF4L,255UL,0x38B35FB3L,0xB78876D1L};
            int64_t ***l_617 = &l_531;
            int32_t l_621[4] = {(-2L),(-2L),(-2L),(-2L)};
            uint64_t *l_668 = &g_96;
            int i;
        }
        for (g_195 = 0; (g_195 < 15); g_195 = safe_add_func_int16_t_s_s(g_195, 9))
        { 
            struct S0 *l_685 = &l_582;
            uint8_t *****l_691[6][4][6] = {{{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584}},{{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0}},{{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584}},{{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584}},{{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0}},{{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584},{&g_584,&g_584,(void*)0,&g_584,&g_584,&g_584},{&g_584,&g_584,&g_584,&g_584,&g_584,(void*)0},{&g_584,&g_584,&g_584,&g_584,&g_584,&g_584}}};
            int32_t l_728 = (-9L);
            int32_t *l_730 = &g_245[3][2];
            int32_t l_755 = 1L;
            int32_t l_760 = 0x7231E8CEL;
            uint32_t l_762 = 1UL;
            int i, j, k;
            for (p_9 = (-29); (p_9 == 53); p_9++)
            { 
                int32_t l_727 = (-1L);
                int64_t l_735 = 0xBDC688BD7B905F5ELL;
                int32_t l_738 = 0x1136EE04L;
                int32_t l_747 = 0x23B36E46L;
                int32_t l_749 = 7L;
                int32_t l_750 = (-1L);
                int32_t l_751 = 0x815057B0L;
                int8_t l_753 = 0x19L;
                int32_t l_758 = 0x4F4F365FL;
                int32_t l_759[6] = {0xAB8233A3L,0xAB8233A3L,0xAB8233A3L,0xAB8233A3L,0xAB8233A3L,0xAB8233A3L};
                int32_t l_761 = 0L;
                int i;
                if ((((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((*g_115), (safe_sub_func_uint8_t_u_u((((void*)0 == l_685) , (safe_unary_minus_func_uint32_t_u((((&g_584 != (((((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0xF6D7L, ((**g_506) >= (*g_513)))), 3L)) , (-1L)) <= p_9) , 3UL) , l_691[0][3][4])) == (*g_507)) < 1L)))), 1UL)))), 0xEC07BF87L)), 0x5C20L)) >= (****l_547)), (**l_549))) , 0xC21DL) != (-1L)))
                { 
                    uint64_t *l_700[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    const uint32_t ***l_710 = (void*)0;
                    const uint32_t **l_712[1];
                    const uint32_t ***l_711 = &l_712[0];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_712[i] = &l_528;
                    (***g_599) = (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((--(*l_57)) > (0x557A8B26L | (g_68[2][5] && ((safe_sub_func_uint64_t_u_u((l_701 = (*g_507)), (!(+(safe_rshift_func_int8_t_s_s((((65529UL < (safe_lshift_func_uint8_t_u_s(p_9, (safe_add_func_uint32_t_u_u((((*l_711) = &l_528) == &l_56), 0xB9A82DE8L))))) && l_713) , p_9), g_302.f0)))))) ^ 0x9653L)))), p_9)), 5UL)) , (*g_507)) , 0L);
                }
                else
                { 
                    int16_t l_729 = 0x0296L;
                    (***g_599) = p_9;
                    (***l_547) = (**g_599);
                    (*g_457) ^= (safe_add_func_int64_t_s_s(((*g_320) = (((((safe_sub_func_uint8_t_u_u((((*l_345) &= (p_9 <= ((**g_114) = ((g_24 = g_302.f0) > 0x5229L)))) != ((g_143 = ((l_722 != &g_599) && (p_9 <= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_162 = (p_9 <= 1L)), 1)), 0x8CCEL))))) >= p_9)), l_727)) || 0UL) ^ l_728) & l_729) , 1L)), p_9));
                    (**g_599) = l_730;
                }
                l_738 ^= (((void*)0 == &g_302) > (safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_735, (*l_730))) == (safe_div_func_uint64_t_u_u((*g_507), (**g_506)))), (*g_115))));
                for (l_738 = 26; (l_738 > (-17)); l_738--)
                { 
                    (*l_730) &= 0L;
                }
                (***g_599) = (safe_add_func_int32_t_s_s(((((p_9 ^ ((((*g_305)++) <= (+(*g_513))) == (((!(((*l_730) != p_9) | ((*l_59) ^= (**g_114)))) >= (**g_506)) , (-1L)))) > (****l_722)) || p_9) == l_747), l_748));
                ++l_762;
            }
            l_757[0][2][2] ^= ((safe_sub_func_int32_t_s_s(((((g_65 < ((safe_mod_func_int64_t_s_s((((*g_507) > ((safe_sub_func_int64_t_s_s((((&g_370 == l_771) ^ (safe_rshift_func_int8_t_s_s(((*l_345) = 0xC0L), g_60.f0))) , (safe_sub_func_int32_t_s_s(((!((l_777 && p_9) | (**g_506))) <= (**g_506)), (*g_457)))), 0xB59B02D502948699LL)) > l_778)) | (*g_507)), (****l_722))) >= (*l_730))) , p_9) , l_59) == &g_24), p_9)) <= p_9);
        }
    }
    else
    { 
        uint8_t **l_784 = &g_305;
        for (g_168.f2 = 0; (g_168.f2 != 39); ++g_168.f2)
        { 
            uint8_t **l_783[2];
            int32_t l_791 = (-6L);
            uint64_t *l_792 = &l_701;
            int i;
            for (i = 0; i < 2; i++)
                l_783[i] = &g_305;
            (**g_599) = (((*l_792) = (((0x26BA0238C63894B3LL == ((safe_lshift_func_uint8_t_u_s((l_783[1] != l_784), (safe_add_func_int32_t_s_s((((p_9 == (safe_mod_func_uint16_t_u_u((p_9 >= (safe_lshift_func_int8_t_s_u((p_9 , l_791), 2))), 65535UL))) > 0x40F8L) & p_9), 0xA6119C95L)))) < g_168.f3)) , g_390) || (*g_115))) , &l_791);
        }
    }
    return p_9;
}



static int64_t  func_11(uint32_t  p_12, int8_t  p_13, uint32_t  p_14)
{ 
    union U1 l_490[6][5][5] = {{{{-1L},{0x25F3L},{7L},{0x3C14L},{2L}},{{1L},{0xAD12L},{-3L},{-7L},{0xCE70L}},{{0x0DBFL},{0L},{0xADA7L},{-1L},{-7L}},{{0xCE75L},{3L},{-5L},{6L},{1L}},{{0x73B8L},{0xCE70L},{0xD7A6L},{0x3C14L},{0x25F3L}}},{{{-1L},{0x41CDL},{0x1CCCL},{0x3031L},{-1L}},{{0x30CDL},{1L},{2L},{1L},{0x30CDL}},{{0xCE70L},{0L},{-1L},{0x3965L},{2L}},{{0L},{0L},{0x1B8BL},{0x28D9L},{0x6F65L}},{{3L},{-1L},{-1L},{0L},{2L}}},{{{-5L},{0x28D9L},{0x3C14L},{0L},{0x30CDL}},{{2L},{6L},{7L},{9L},{-1L}},{{-1L},{-1L},{0x345EL},{-1L},{0x25F3L}},{{-3L},{-5L},{0xCE75L},{-1L},{1L}},{{0x579FL},{1L},{0xAD12L},{-3L},{-7L}}},{{{-1L},{0x73B8L},{0xFB9AL},{1L},{0x1B8BL}},{{-1L},{0x0DBFL},{0xCE70L},{1L},{0L}},{{0x579FL},{-5L},{-4L},{0x30CDL},{0L}},{{-3L},{1L},{0x28D9L},{-7L},{0x0DBFL}},{{-1L},{-1L},{-3L},{0xCE75L},{-3L}}},{{{2L},{2L},{-7L},{1L},{-1L}},{{-5L},{0x6BDCL},{0L},{-1L},{0x345EL}},{{3L},{0L},{-1L},{0x579FL},{0x3965L}},{{0L},{0x6BDCL},{1L},{1L},{-1L}},{{0xCE70L},{2L},{6L},{7L},{9L}}},{{{0x30CDL},{-1L},{7L},{-1L},{0L}},{{-1L},{1L},{0L},{-4L},{0L}},{{0x73B8L},{-5L},{0x0DBFL},{0xFB9AL},{0x519BL}},{{0xCE75L},{0x0DBFL},{-3L},{0L},{0x6BDCL}},{{-4L},{0x73B8L},{-3L},{6L},{1L}}}};
    int8_t *l_493 = &g_346;
    int8_t *l_494 = &g_128;
    int32_t *l_495 = &g_245[3][2];
    int32_t *l_496 = (void*)0;
    int32_t *l_497[4][7] = {{&g_65,&g_65,(void*)0,(void*)0,&g_65,&g_65,&g_65},{(void*)0,(void*)0,&g_65,&g_65,&g_65,&g_65,&g_65},{&g_65,&g_65,&g_65,&g_65,&g_65,(void*)0,&g_65},{&g_65,(void*)0,(void*)0,&g_65,(void*)0,(void*)0,&g_65}};
    uint64_t * const *l_508 = (void*)0;
    int i, j, k;
    if ((g_498 &= ((*l_495) |= ((safe_lshift_func_uint8_t_u_u(((*g_305) |= (((safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((((*l_494) |= ((*l_493) = (((g_346 || ((l_490[5][4][1] , ((((safe_div_func_int8_t_s_s(g_390, g_96)) > l_490[5][4][1].f0) | ((-4L) | ((void*)0 == &g_370))) != 0x96DF63DDF13AAC68LL)) <= (*g_320))) & g_58) || g_60.f0))) & l_490[5][4][1].f1) < p_12), p_14)) >= p_13) , p_13), 65531UL)) < 0UL) || (*g_457))), p_13)) < g_162))))
    { 
        uint8_t *****l_499 = (void*)0;
        uint8_t ****l_501[6] = {(void*)0,(void*)0,&g_303[0],(void*)0,(void*)0,&g_303[0]};
        uint8_t *****l_500 = &l_501[5];
        int64_t *l_512 = &g_194;
        int64_t **l_511[4][5] = {{&l_512,&l_512,&l_512,(void*)0,&l_512},{&l_512,&l_512,&g_320,(void*)0,&l_512},{&l_512,&l_512,&l_512,&l_512,&l_512},{&l_512,(void*)0,&g_320,&g_320,&g_320}};
        int32_t **l_514 = &l_497[0][2];
        int32_t **l_515 = &g_457;
        int i, j;
        (*g_457) = 0L;
        (*g_457) |= ((((((*l_500) = &g_303[5]) == &g_303[0]) != (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((g_506 == l_508), ((*g_320) | 1UL))), (safe_div_func_int64_t_s_s(((g_513 = &g_157) == &g_157), 4L))))) == 0x503A75E2L) & 0xE52504DB1782176ALL);
        (*l_515) = ((*l_514) = &g_65);
    }
    else
    { 
        for (g_498 = 0; (g_498 == (-9)); g_498 = safe_sub_func_uint16_t_u_u(g_498, 7))
        { 
            const uint64_t l_521 = 18446744073709551615UL;
            union U1 *l_522 = &g_302;
            int32_t l_525 = 0xEBB1E1CCL;
            for (g_58 = 0; (g_58 != 12); g_58++)
            { 
                int32_t **l_520 = &l_495;
                union U1 **l_523 = &l_522;
                (*l_520) = l_497[0][2];
                if (l_521)
                    continue;
                (*l_523) = l_522;
                l_525 = (+((*g_457) |= ((void*)0 != &g_370)));
                for (g_390 = (-9); (g_390 < 37); g_390 = safe_add_func_uint32_t_u_u(g_390, 8))
                { 
                    return p_14;
                }
            }
            (*g_457) ^= (-10L);
        }
    }
    return (*g_320);
}



static int64_t  func_17(union U1  p_18, const int16_t  p_19)
{ 
    struct S0 l_348 = {-1L,0x46L,0x8578EF78L,8L};
    int32_t l_357 = (-3L);
    struct S0 *l_358 = (void*)0;
    int32_t l_359 = 2L;
    int32_t *l_360[4][5][4] = {{{&l_359,&g_245[4][1],(void*)0,&g_245[3][0]},{&g_245[3][2],&g_65,&g_245[2][5],&g_65},{&g_65,(void*)0,&l_359,&g_65},{&l_359,&g_65,&g_245[3][0],&g_245[3][0]},{&g_245[4][1],&g_245[4][1],&g_245[2][5],&g_245[3][2]}},{{&g_245[4][1],(void*)0,&g_245[3][0],&g_245[4][1]},{&l_359,&g_245[3][2],&l_359,&g_245[3][0]},{&g_65,&g_245[3][2],&g_245[2][5],&g_245[4][1]},{&g_245[3][2],(void*)0,(void*)0,&g_245[3][2]},{&l_359,&g_245[4][1],(void*)0,&g_245[3][0]}},{{&g_245[3][2],&g_65,&g_245[2][5],&g_65},{&g_65,(void*)0,&l_359,&g_65},{&l_359,&g_65,&g_245[3][0],&g_245[3][0]},{&g_245[4][1],&g_245[4][1],&g_245[2][5],&g_245[3][2]},{&g_245[4][1],(void*)0,&g_245[3][0],&g_245[4][1]}},{{&l_359,&g_245[3][2],&l_359,&g_245[3][0]},{&g_65,&g_245[3][2],&g_245[2][5],&g_245[4][1]},{&g_245[3][2],(void*)0,(void*)0,&g_245[3][2]},{&l_359,&g_245[4][1],(void*)0,&g_245[3][0]},{&g_245[3][2],&g_65,&g_245[2][5],&g_65}}};
    uint8_t **l_385 = &g_305;
    uint8_t l_397 = 0x9DL;
    int32_t ****l_399 = (void*)0;
    int32_t l_441 = 0xCF748600L;
    uint64_t l_478 = 0x8058C4B011579539LL;
    int32_t **l_481 = &l_360[1][2][1];
    int i, j, k;
lbl_467:
    for (g_24 = 0; g_24 < 5; g_24 += 1)
    {
        for (g_195 = 0; g_195 < 7; g_195 += 1)
        {
            g_245[g_24][g_195] = (-5L);
        }
    }
    if ((g_65 = (((l_348 , 1UL) ^ (l_348 , (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u(((((p_18.f1 <= (((*g_320) = (*g_320)) && ((((l_357 , &g_60) == l_358) & l_348.f1) < p_19))) > l_359) && 0x6F0BL) | l_348.f3), l_348.f2)), g_96)) | g_168.f3), (*g_115))), 4)))) & l_357)))
    { 
        uint64_t *l_361 = &g_216;
        int32_t l_368 = 1L;
        int32_t l_375[6][2][7] = {{{1L,0xE4F0C02DL,0xD1B602BBL,0x90F250EAL,1L,0x4D8C9AC7L,1L},{0L,0x2705520FL,9L,0xC3AE12C7L,1L,9L,0x4D8C9AC7L}},{{6L,0x402EC355L,9L,0x90F250EAL,1L,0L,0L},{6L,0x2705520FL,0xD1B602BBL,0x2705520FL,6L,0L,0x4D8C9AC7L}},{{0L,0xE4F0C02DL,0x9830DE37L,0x2705520FL,1L,9L,1L},{1L,0xE4F0C02DL,0xD1B602BBL,0x90F250EAL,1L,0x4D8C9AC7L,1L}},{{0L,0x2705520FL,9L,0xC3AE12C7L,1L,9L,0x4D8C9AC7L},{6L,0x402EC355L,9L,0x90F250EAL,1L,0L,0L}},{{6L,0x2705520FL,0xD1B602BBL,0x2705520FL,6L,0L,0x4D8C9AC7L},{0L,0xE4F0C02DL,0x9830DE37L,0x2705520FL,1L,9L,1L}},{{1L,0xE4F0C02DL,0xD1B602BBL,0x90F250EAL,1L,0x4D8C9AC7L,1L},{0L,0x2705520FL,9L,0xC3AE12C7L,1L,9L,0x4D8C9AC7L}}};
        uint8_t * const *l_386 = (void*)0;
        uint8_t * const **l_387 = (void*)0;
        uint16_t *l_394 = (void*)0;
        uint16_t *l_395 = &g_195;
        uint32_t *l_396 = &g_58;
        uint32_t **l_403 = &l_396;
        uint8_t l_432 = 0x11L;
        int i, j, k;
        l_375[2][1][2] |= (((((((++(*l_361)) >= (safe_mod_func_int64_t_s_s((*g_320), ((((l_368 , g_369[2][0]) != (void*)0) == ((((l_368 < (safe_lshift_func_uint8_t_u_s(p_18.f1, 2))) < ((safe_lshift_func_int8_t_s_s(((p_18.f0 | (**g_304)) | 2UL), p_18.f1)) , g_60.f2)) , p_19) == 0L)) & (-1L))))) , &g_194) != &g_194) & 0xCFAFA3A94196BDB2LL) < l_368) ^ l_368);
        if (((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s(0x6942L, (((safe_lshift_func_int16_t_s_u(((1L <= ((+((safe_mul_func_int16_t_s_s(0x239DL, (((*l_395) = (l_385 == (g_388 = l_386))) <= ((((*l_396) = g_390) & (g_216 , p_19)) , 1L)))) == g_392[0][0])) < p_18.f1)) ^ g_65), l_397)) > p_18.f0) > l_368))) >= 5UL), l_368)) , p_18.f0))
        { 
            uint32_t l_398 = 0x406CBFBBL;
            int32_t *****l_400 = &l_399;
            g_65 ^= l_398;
            g_65 ^= (((*l_400) = l_399) != (void*)0);
        }
        else
        { 
            uint8_t * const l_411 = &g_391;
            const struct S0 *l_417 = &l_348;
            struct S0 *l_418 = &g_168;
            struct S0 **l_419 = &g_370;
            int32_t l_420 = 1L;
            int32_t l_421 = 0x3B934A44L;
            uint8_t ***l_425[6][6] = {{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385},{&l_385,&l_385,&l_385,&l_385,&l_385,&l_385}};
            int8_t *l_433 = &g_168.f0;
            int32_t **l_435 = &l_360[2][4][0];
            int i, j;
            for (l_357 = 0; (l_357 != 9); l_357 = safe_add_func_uint32_t_u_u(l_357, 9))
            { 
                uint32_t ***l_404 = &l_403;
                uint32_t **l_406 = &l_396;
                uint32_t ***l_405 = &l_406;
                (*l_405) = ((*l_404) = l_403);
            }
            l_421 |= (safe_sub_func_uint64_t_u_u(((*l_361) = 0xB9CFE58925F25E43LL), (((*g_115) = ((safe_mul_func_uint8_t_u_u((l_411 == l_411), (safe_mul_func_int16_t_s_s((~(-3L)), ((safe_mod_func_uint8_t_u_u(((((*g_305) = 0xDCL) || ((l_417 != ((*l_419) = l_418)) || l_420)) || l_420), 1UL)) | l_375[3][0][0]))))) , p_19)) != p_18.f1)));
            (*l_435) = (((((((-2L) < ((*g_305) ^= (((*l_395) = (((**g_114) = (safe_mod_func_uint32_t_u_u((((((((*l_433) = (((*l_361) = ((!(((l_425[0][2] = (void*)0) != (void*)0) | (safe_sub_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(0xB7DF1405478AED66LL, l_420)) , (l_432 = (safe_mod_func_uint8_t_u_u(0x09L, 5UL)))) > 0x1FACL), 0x809D9579L)))) == p_18.f0)) < p_18.f0)) , &l_396) != g_434[0]) > 0x8FB74F2756B1A0AELL) || 255UL) , p_19), l_368))) < l_375[2][1][2])) && 0x981EL))) , &l_386) != (void*)0) || (*g_320)) && (**g_304)) , (void*)0);
            for (g_168.f0 = 0; (g_168.f0 >= 25); g_168.f0 = safe_add_func_int16_t_s_s(g_168.f0, 4))
            { 
                uint32_t l_438[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_438[i] = 18446744073709551615UL;
                l_438[3]++;
            }
        }
        for (g_346 = 1; (g_346 >= 0); g_346 -= 1)
        { 
            return (*g_320);
        }
        g_245[2][3] &= l_441;
        for (g_216 = 0; (g_216 >= 17); g_216 = safe_add_func_int8_t_s_s(g_216, 8))
        { 
            int32_t *l_453[7] = {&l_359,&l_359,&l_359,&l_359,&l_359,&l_359,&l_359};
            int16_t *l_458 = (void*)0;
            int16_t *l_459 = &g_445[2];
            int16_t *l_460 = &g_461;
            int64_t l_462[6][2][2] = {{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}},{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}},{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}},{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}},{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}},{{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL},{0x3FF8E7BD97CFE254LL,0x3FF8E7BD97CFE254LL}}};
            int64_t *l_463 = (void*)0;
            int64_t *l_464 = &l_462[0][1][0];
            int i, j, k;
            g_245[3][0] = (g_65 = (g_445[2] = (~(*g_305))));
            (*g_457) &= (((*l_464) = (p_18.f0 , ((*g_320) = (g_68[2][5] | (safe_mul_func_uint8_t_u_u((!(((safe_add_func_int16_t_s_s((**g_114), (safe_rshift_func_uint16_t_u_s((l_453[5] == (void*)0), ((+(((((safe_lshift_func_int16_t_s_s(((*l_460) = ((*l_459) = ((void*)0 == g_457))), 5)) ^ 0x42L) || 0xCD6DL) > 5L) <= (**g_114))) | p_18.f1))))) != (-4L)) <= 65535UL)), l_462[3][1][0])))))) , p_18.f0);
        }
    }
    else
    { 
        int32_t *l_465 = (void*)0;
        int32_t **l_466 = &l_360[0][1][3];
        (*l_466) = l_465;
        return (*g_320);
    }
    for (g_390 = 0; (g_390 <= 2); g_390 += 1)
    { 
        uint16_t l_468 = 65535UL;
        int32_t l_474 = 0L;
        int32_t l_475 = 0x513BDEF8L;
        int32_t l_476[5][7] = {{0x29AE6BF3L,(-1L),0x1D920646L,0L,0L,0x29AE6BF3L,0L},{0x5B5A58DAL,0xB1B8946EL,0xACCBC7F9L,(-1L),(-1L),0xACCBC7F9L,0xB1B8946EL},{(-1L),1L,0x1D920646L,(-7L),1L,0L,0xB1B8946EL},{0x6D74C524L,(-1L),0L,0x6D74C524L,0xB1B8946EL,0x6D74C524L,0L},{0L,0L,9L,(-7L),(-1L),(-1L),0L}};
        int i, j;
        (*g_457) = 0x91A3EE48L;
        if (l_348.f2)
            goto lbl_467;
        for (g_168.f1 = 0; (g_168.f1 <= 2); g_168.f1 += 1)
        { 
            int16_t ***l_471 = (void*)0;
            int32_t l_477[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_477[i] = 1L;
            if ((&g_304 != (void*)0))
            { 
                ++l_468;
            }
            else
            { 
                int16_t ****l_472 = (void*)0;
                g_473 = l_471;
            }
            if (g_68[g_390][g_390])
                continue;
            l_478++;
        }
    }
    (*l_481) = &l_359;
    return (*g_320);
}



static union U1  func_20(uint8_t  p_21, uint32_t  p_22, int32_t  p_23)
{ 
    union U1 l_347 = {0xFB66L};
    return l_347;
}



static uint32_t  func_27(const int32_t  p_28, const int32_t  p_29, int32_t  p_30, struct S0  p_31, uint32_t  p_32)
{ 
    int64_t l_63[1][6][5] = {{{(-4L),0xAA55A6935E7B049BLL,(-1L),(-4L),0x4F6E08938C4ECB2DLL},{(-4L),(-4L),(-5L),(-4L),(-4L)},{0x4F6E08938C4ECB2DLL,(-4L),(-1L),0xAA55A6935E7B049BLL,(-4L)},{(-4L),0xAA55A6935E7B049BLL,(-1L),(-4L),0x4F6E08938C4ECB2DLL},{(-4L),(-4L),(-5L),(-4L),(-4L)},{0x4F6E08938C4ECB2DLL,(-4L),(-1L),0xAA55A6935E7B049BLL,(-4L)}}};
    int32_t l_66 = 0x76A8768DL;
    int32_t l_113 = 0xD203B384L;
    struct S0 *l_167 = &g_168;
    int32_t *l_172 = &l_66;
    const int32_t *l_178 = &g_65;
    const int32_t **l_177 = &l_178;
    int8_t *l_261 = (void*)0;
    uint16_t l_293 = 5UL;
    int i, j, k;
    for (p_31.f0 = 0; (p_31.f0 < 4); p_31.f0 = safe_add_func_int16_t_s_s(p_31.f0, 3))
    { 
        int32_t *l_79 = &g_65;
        int32_t *l_84 = &l_66;
        int16_t *l_112 = &g_98;
        union U1 l_149 = {0x8F99L};
        int32_t l_158 = 0x62718EDFL;
        uint64_t *l_175 = &g_96;
        uint8_t *l_226 = &g_168.f1;
        for (p_32 = 0; (p_32 <= 0); p_32 += 1)
        { 
            for (g_60.f0 = 0; (g_60.f0 <= 0); g_60.f0 += 1)
            { 
                int32_t *l_64 = &g_65;
                int i, j, k;
                (*l_64) ^= (-6L);
                return l_63[p_32][p_32][g_60.f0];
            }
            for (g_36 = 0; (g_36 <= 0); g_36 += 1)
            { 
                int32_t *l_67[4][7][3] = {{{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0}},{{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66}},{{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0}},{{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66},{&g_65,(void*)0,(void*)0},{(void*)0,&l_66,&l_66}}};
                int i, j, k;
                g_68[2][5]++;
                return l_63[p_32][(g_36 + 4)][g_36];
            }
        }
        (*l_79) = (safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((-1L) < 7UL), ((safe_div_func_int64_t_s_s(g_60.f3, 0xBC748E3606EC1612LL)) != (p_30 > 18446744073709551615UL)))), (p_28 > g_24))), 6UL));
        for (g_60.f0 = 0; (g_60.f0 < (-6)); g_60.f0--)
        { 
            int32_t *l_83 = (void*)0;
            int32_t **l_82[7];
            uint64_t *l_95 = &g_96;
            int16_t *l_97 = &g_98;
            const int32_t *l_100 = &g_65;
            int32_t l_188[2];
            const union U1 l_244 = {0xBDC1L};
            int i;
            for (i = 0; i < 7; i++)
                l_82[i] = &l_83;
            for (i = 0; i < 2; i++)
                l_188[i] = 0x8FB1DCAFL;
            (*l_79) = p_32;
            if ((((l_66 ^= ((((*l_79) , l_79) != (l_84 = &g_65)) >= ((void*)0 != &g_65))) , (safe_sub_func_uint16_t_u_u((*l_84), ((*l_97) |= ((safe_add_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u(((*l_95) &= (((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(g_68[2][3], 0x4501C69F0B4AB819LL)), (-1L))) , 65535UL) == g_58)), g_68[2][2])) , g_60.f2), 0L)) < 3UL))))) ^ g_60.f2))
            { 
                int32_t *l_99 = &g_65;
                if (((l_99 = &p_30) == &g_65))
                { 
                    int16_t **l_111 = &l_97;
                    l_100 = &p_28;
                    if (g_36)
                        continue;
                    l_113 &= (safe_sub_func_uint8_t_u_u(((((*l_79) = (safe_div_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((l_66 = 7UL), 7)) && l_66), ((p_31.f3 | ((*l_99) |= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((g_58 <= (((*l_111) = &g_98) == l_112)) ^ ((((&g_65 == &g_65) >= p_28) < 0x3B42L) & g_60.f2)), g_36)), g_68[2][1])))) , 0x5356471FAE99D52ELL)))) , p_29) | 0xA9L), p_32));
                    return (*l_79);
                }
                else
                { 
                    int64_t *l_126 = &l_63[0][0][3];
                    int8_t *l_127 = &g_128;
                    (*l_99) &= (((*l_127) = ((*l_79) = ((((g_114 == (void*)0) != (!(+(safe_sub_func_int8_t_s_s(g_60.f2, (p_28 <= g_68[2][5])))))) , (0x6CDBL <= (safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s(((*l_126) = (safe_rshift_func_uint16_t_u_s(0xB9E1L, 4))), (*l_84))), p_29)))) == 65531UL))) , 0x01084B88L);
                    g_65 &= (~(*g_115));
                }
                for (g_36 = 0; (g_36 <= 35); g_36 = safe_add_func_uint8_t_u_u(g_36, 2))
                { 
                    (*l_99) = 0x3B5AAABCL;
                    if (g_128)
                        break;
                    if ((*l_99))
                        break;
                }
                if (g_60.f0)
                    break;
                if (g_65)
                    continue;
            }
            else
            { 
                int64_t *l_137 = &l_63[0][3][2];
                int32_t l_142 = 0x460F080FL;
                int32_t *l_144 = &l_113;
                g_143 |= (((!(safe_div_func_int32_t_s_s((*l_84), (((((*l_137) = (safe_add_func_uint16_t_u_u(p_29, l_63[0][4][4]))) || (p_29 | (safe_sub_func_int16_t_s_s((*g_115), ((safe_mod_func_uint32_t_u_u(p_31.f0, l_113)) , g_24))))) < l_142) && p_29)))) < 1UL) == 0x44E65D69AD93880BLL);
                l_144 = &g_65;
                if ((*l_79))
                { 
                    uint64_t *l_145 = &g_96;
                    uint64_t **l_146 = &l_95;
                    p_30 = (((((*l_146) = l_145) == ((((safe_mod_func_int8_t_s_s((((*l_100) ^ (((((l_149 , (((safe_add_func_int16_t_s_s((*g_115), (*l_79))) <= 65535UL) && (+0xC4L))) <= g_98) , 0xA2L) , g_60.f1) , p_28)) >= (*l_144)), g_96)) & 0xC740L) <= (*l_144)) , (void*)0)) == p_28) < 0x85L);
                    return p_31.f0;
                }
                else
                { 
                    const int32_t *l_153 = &l_66;
                    const int32_t **l_154 = &l_100;
                    (*l_154) = l_153;
                    if (l_66)
                        break;
                    g_65 |= (p_31 , p_28);
                }
                for (g_98 = (-14); (g_98 != (-23)); g_98 = safe_sub_func_uint32_t_u_u(g_98, 3))
                { 
                    if (p_29)
                        break;
                    g_65 = g_98;
                }
            }
        }
    }
    for (g_168.f0 = 0; (g_168.f0 > (-26)); --g_168.f0)
    { 
        int16_t **l_255 = &g_115;
        int32_t l_258[3][6][2];
        uint8_t *l_271[7] = {&g_60.f1,&g_60.f1,&g_60.f1,&g_60.f1,&g_60.f1,&g_60.f1,&g_60.f1};
        const struct S0 l_284 = {0x3EL,0x1FL,0x3CEA2D98L,0L};
        int64_t *l_323 = (void*)0;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 2; k++)
                    l_258[i][j][k] = 0x87415AF5L;
            }
        }
        if (g_128)
            break;
        for (p_31.f1 = 0; (p_31.f1 < 41); p_31.f1 = safe_add_func_int64_t_s_s(p_31.f1, 2))
        { 
            int16_t **l_254 = &g_115;
            int32_t l_273 = 0xC9303632L;
            int32_t l_291 = 0x6A485D6DL;
            (*l_172) |= (safe_lshift_func_uint8_t_u_u((l_254 != l_255), 6));
        }
    }
    return (*l_178);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_168.f0, "g_168.f0", print_hash_value);
    transparent_crc(g_168.f1, "g_168.f1", print_hash_value);
    transparent_crc(g_168.f2, "g_168.f2", print_hash_value);
    transparent_crc(g_168.f3, "g_168.f3", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_245[i][j], "g_245[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_392[i][j], "g_392[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_393, "g_393", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_445[i], "g_445[i]", print_hash_value);

    }
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_1009, "g_1009", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
